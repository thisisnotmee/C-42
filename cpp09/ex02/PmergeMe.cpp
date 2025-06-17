#include "PmergeMe.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe & ref)
{
	(void)ref;
}

PmergeMe & PmergeMe::operator=(const PmergeMe & ref)
{
	(void)ref;
	return *this;
}

PmergeMe::~PmergeMe()
{
}

void	PmergeMe::mergeList(std::list<int>& vec, std::list<int>& left, std::list<int>& right)
{
	std::list<int>::iterator itVec = vec.begin();
	std::list<int>::iterator itLeft = left.begin();
	std::list<int>::iterator itRight = right.begin();

	while (itLeft != left.end() && itRight != right.end())
	{
		if (*itLeft <= *itRight)
		{
			*itVec = *itLeft;
			itLeft++;
		}
		else
		{
			*itVec = *itRight;
			itRight++;
		}
		itVec++;
	}

	while (itLeft != left.end())
	{
		*itVec = *itLeft;
		itLeft++;
		itVec++;
	}

	while (itRight != right.end())
	{
		*itVec = *itRight;
		itRight++;
		itVec++;
	}
}

void 	PmergeMe::mergeSortList(std::list<int> & list)
{
	int size = list.size();
	if (size <= 1)
		return;
	int mid = size / 2;

	std::list<int>::iterator it = list.begin();
	for (int i = 0; i < mid; ++i)
		++it;

	std::list<int> left(list.begin(), it);
	std::list<int> right(it, list.end());

	mergeSortList(left);
	mergeSortList(right);
	mergeList(list, left, right);
}

void PmergeMe::mergeVec(std::vector<int>& vec, std::vector<int>& left, std::vector<int>& right)
{
	int leftSize = left.size();
	int rightSize = right.size();
	int i = 0, j = 0, k = 0;

	while (i < leftSize && j < rightSize)
	{
		if (left[i] <= right[j])
		{
			vec[k] = left[i];
			i++;
		} else {
			vec[k] = right[j];
			j++;
		}
		k++;
	}

	while (i < leftSize)
	{
		vec[k] = left[i];
		i++;
		k++;
	}

	while (j < rightSize)
	{
		vec[k] = right[j];
		j++;
		k++;
	}
}

void PmergeMe::mergeSortVec(std::vector<int>& vec)
{
	int size = vec.size();
	if (size <= 1)
		return;
	int mid = size / 2;
	std::vector<int> left(vec.begin(), vec.begin() + mid);
	std::vector<int> right(vec.begin() + mid, vec.end());
	mergeSortVec(left);
	mergeSortVec(right);
	mergeVec(vec, left, right);
}

long long int	PmergeMe::getCurrentTimeMicros()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (tv.tv_sec * 1000000LL) + tv.tv_usec;
}

void PmergeMe::mergeSort(std::vector<int> & vec, std::list<int> & list)
{
	long long int	AtimeV;
	long long int	BtimeV;
	long long int	AtimeL;
	long long int	BtimeL;

	std::cout << "Before : ";
	for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	AtimeV = getCurrentTimeMicros();
	mergeSortVec(vec);
	BtimeV = getCurrentTimeMicros();
	AtimeL = getCurrentTimeMicros();
	mergeSortList(list);
	BtimeL = getCurrentTimeMicros();

	std::cout << "After vec :  ";
	for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "After list :  ";
	for (std::list<int>::const_iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : ";
	std::cout << AtimeV - BtimeV << " ms" << std::endl;
	std::cout << "Time to process a range of " << list.size() << " elements with std::list : ";
	std::cout << AtimeL - BtimeL << " ms" << std::endl;
}