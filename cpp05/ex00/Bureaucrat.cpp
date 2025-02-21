#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bob"), _grade(150) {}

Bureaucrat::~Bureaucrat() {}

//cpy constructor
Bureaucrat::Bureaucrat(Bureaucrat const &srcs)
{
	*this = srcs;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &srcs)
{ 
	if (this != &srcs)
	{
		this->_grade = srcs._grade;
	}
	return (*this);
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooHighException();
	if (grade < 1)
		throw GradeTooLowException();
	this->_grade = grade;
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void		Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException ();
	this->_grade--;
}

void		Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw GradeTooLowException ();
	this->_grade++;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return (out);
}