#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();

	class InvalidFormException : public std::exception {
		public:
			const char* what() const throw(){ return ("invalid form type");}
	};
	AForm* makeForm(std::string formName, std::string target);
};

#endif