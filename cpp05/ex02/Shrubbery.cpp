#include "Shrubbery.hpp"


ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("ShrubberyCreationForm", 145, 137), _cible("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &cible): AForm("ShrubberyCreationForm", 145, 137) { this->_cible = cible; }

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

std::string		ShrubberyCreationForm::GetCible() const { return this->_cible; }

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src)
		this->_cible = src._cible;
	return *this;
}

std::ostream	&operator<<(std::ostream &output, ShrubberyCreationForm const &src)
{
	output << src.GetCible() << ", " << src.GetName() << ", " << src.GetGrade2sign() << ", " << src.GetGrade2exec() << std::endl;
	return output;
}


void	ShrubberyCreationForm::beExecuted(Bureaucrat const &exec) const
{
	try 
	{
		std::string filename;
		std::ofstream file;

		if (exec.GetGrade() > this->GetGrade2exec())
		{
			std::cout << "Grade requis pour executer: " << this->GetGrade2exec() << " mais " << exec.GetName() << " à ";
			throw GradeTooLowException();
		}
		filename = this->_cible + "_shrubbery";
		file.open(filename.c_str());

		if (file.is_open())
		{
			file << "          .     .  .      +     .      .          ." << std::endl;
			file << "     .       .      .     #       .           ." << std::endl;
			file << "        .      .         ###            .      .      ." << std::endl;
			file << "      .      .   '#:. .-##'##-. .:#'  .      . "<< std::endl;
			file << "          .      . '####'###'####'  ." << std::endl;
			file << "       .     '#:.    .:#'###'#:.    .:#'  .        .       ." << std::endl;
			file << "  .             '#########'#########'        .        ." << std::endl;
			file << "        .    '#:.  '####'###'####'  .:#'   .       ." << std::endl;
			file << "     .     .  '#######''##'##''#######'                  ." << std::endl;
			file << "                .'##'#####'#####'##'           .      ." << std::endl;
			file << "    .   '#:. ...  .:##'###'###'##:.  ... .:#'     ." << std::endl;
			file << "      .     '#######'##'#####'##'#######'      .     ." << std::endl;
			file << "    .    .     '#####''#######''#####'    .      ." << std::endl;
			file << "            .     '      000      '    .     ." << std::endl;
			file <<"        .         .   .   000     .        .       ." << std::endl;
			file <<". . .. ------------------O000O-----------------...." << std::endl;
			file << "  						 ____ 											 " << std::endl;
			file << "' 						/      \\												" << std::endl;
			file << " 						| 0  0 | 												" << std::endl;
			file << " 						|  \\/  | 												"<< std::endl;
			file << " 						|  --  | 													" << std::endl;
			file << " 						| \\__/ | 												" << std::endl;
			file << " 						 \\____ /  												" << std::endl;
			file << " 						 /| || |\\ 												"<< std::endl;
			file << "						/_|_||_|_\\												" << std::endl;
			file << "						   /  \\  													" << std::endl;
			file << std::endl;
		}
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

