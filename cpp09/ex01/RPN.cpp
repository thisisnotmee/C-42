#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN& copy)
{
    this->stack = copy.stack;
}

RPN& RPN::operator=(const RPN& in)
{
    this->stack = in.stack;
    return (*this);
}

int RPN::isNbr(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (-1);
}

int RPN::isCalc(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '*')
        return (1);
    return (-1); 
}

int RPN::Calcul(int a, int b, char op)
{
    if (op == '+')
        return (b+a);
    else if (op == '-')
        return (b-a);
    else if (op == '/')
    {
        if (a == 0)
        {
            std::cout << "Error" << std::endl;
            exit(EXIT_FAILURE);
        }
        return (b/a);
    }
    else
        return (b*a);
}

int RPN::getStackTop()
{
    return (this->stack.top());
}

void RPN::SortArg(char **av)
{
    std::stringstream ss;
    std::string expression;
    int i = 1;
    int j = 0;

    while (av[i])
    {
        while (av[i][j])
        {
            ss << av[i][j];
            j++;
        }
        i++;
    }
    expression = ss.str();
    expEval(expression);
}

void RPN::expEval(std::string exp)
{
    size_t i = 0;
    int res;

    while (i < exp.length())
    {
        while (isspace(exp[i]))
            i++;
        if (isNbr(exp[i]) != -1)
        {
            char tmp[2] = {exp[i], '\0'};
            this->stack.push(atoi(tmp));
        }
        else if (isCalc(exp[i]) != -1)
        {
            if (this->stack.size() < 2)
            {
                std::cout << "Error" << std::endl;
                exit(EXIT_FAILURE);
            }
            int a = this->stack.top();
            this->stack.pop();
            int b = this->stack.top();
            this->stack.pop();
            res = Calcul(a, b, exp[i]);
            this->stack.push(res);
        }
        else
        {
            std::cout << "Error" << std::endl;
            exit(EXIT_FAILURE);
        }
        i++;
    }
    if (this->stack.size() != 1)
    {
        std::cout << "Error" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << getStackTop() << std::endl;
}