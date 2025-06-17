#pragma once

# include <iostream>
# include <cstdlib>
# include <cstring>
# include <stack>
# include <sstream>

class RPN
{
    private:
        std::stack<int> stack;
    public:
        RPN();
        ~RPN();

        RPN(RPN const &);
        RPN &operator=(RPN const &);

        void SortArg(char **av);
        void expEval(std::string exp);
        
        int isNbr(char c);
        int isCalc(char c);
        
        int getStackTop();
        int Calcul(int a, int b, char op);
};