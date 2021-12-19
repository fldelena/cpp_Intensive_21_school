#include "Form.hpp"

Form::Form(): name("form"), sIgned(false), grdToSign(10), grdToMake(10)
{}

Form::Form(std::string Name, int grdToSign, int grdToMake): name(Name),
                                                            sIgned(false),
                                                            grdToSign(grdToSign),
                                                            grdToMake(grdToMake)                   
{
    if(this->grdToSign > 150 || this->grdToMake > 150)
        Form::GradeTooLowException();
    if(this->grdToSign < 1 || this->grdToMake < 1)
        Form::GradeTooHighException();
}

Form::Form(const Form &other): name(other.name), grdToSign(other.grdToSign), grdToMake(other.grdToMake)
{
    this->sIgned = other.sIgned;
}

Form::~Form()
{}

Form &Form::operator=(const Form &other)
{
    this->sIgned = other.sIgned;
    return (*this);
}

const std::string Form::GetName() const 
{
    return (this->name);
}

bool Form::GetSigned() const 
{
    return (this->sIgned);
}

int Form::GetGrdToSign() const 
{
    return (this->grdToSign);
}

int Form::GetGrdToMake() const
{
    return (this->grdToMake);
}

void Form::beSigned(Bureaucrat &other)
{

    if (other.getGrade() <= this->GetGrdToSign())
        this->sIgned = true;
    else if (other.getGrade() < 1)
        throw Form::GradeTooHighException();
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &ret, Form const &other)
{
    return (ret << "The Form " << other.GetName() << (other.GetSigned() ? "is signed " : "is't signed ") <<
                    "Grade to sign-" << other.GetGrdToSign() << " Grade to make-" << other.GetGrdToMake());
}


const char *Form::GradeTooHighException::what() const throw()
{
    return ("grade is high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("grade is low");
}