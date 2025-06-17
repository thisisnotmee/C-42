#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <sys/time.h>

class PmergeMe
{
	private:
		PmergeMe(const PmergeMe & ref);
		PmergeMe & operator=(const PmergeMe & ref);
	public:
		PmergeMe();
		~PmergeMe();
		long long int	getCurrentTimeMicros();

		void			mergeSort(std::vector<int> & vec, std::list<int> & list);

		void			mergeSortVec(std::vector<int> & vec);
		void			mergeVec(std::vector<int>& vec, std::vector<int>& left, std::vector<int>& right);

		void			mergeList(std::list<int>& vec, std::list<int>& left, std::list<int>& right);
		void 			mergeSortList(std::list<int> & list);
};