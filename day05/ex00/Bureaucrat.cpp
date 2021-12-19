#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->Name = "_empty_";
    this->Grade = 100;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade)
{
    this->Name = Name;
    this->Grade = Grade;
    if (Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (Grade > 150)
        throw Bureaucrat::GradeTooLowException();

}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    this->Name = other.Name;
    this->Grade = other.Grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "DESTRUCTOR!" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    this->Name = other.Name;
    this->Grade = other.Grade;
    return(*this);
}

std::string Bureaucrat::getName() const
{
    return (this->Name);
}

int Bureaucrat::getGrade() const
{
    return (this->Grade);
}

void Bureaucrat::UpGrade(int value)
{
    this->Grade -= value;
    if (Grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::DownGrade(int value)
{
    this->Grade += value;
    if (Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &ret, const Bureaucrat &other)
{
    return (ret << other.getName() << " bureaucrat grade " << other.getGrade());
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("has an unacceptably high grade");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("has an unacceptably low grade");
}