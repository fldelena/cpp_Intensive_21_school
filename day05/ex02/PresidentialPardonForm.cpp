#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : grdToSign(25), grdToMake(5)
{
    this->target = target;
    this->sIgned = false;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :
    grdToSign(other.grdToSign),
    grdToMake(other.grdToMake)
{   this->sIgned = other.sIgned;
    this->target = other.target;}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{   
    this->sIgned = other.sIgned;
    this->target = other.target;
    return (*this);
}

bool    PresidentialPardonForm::GetSigned() { return (this->sIgned); }


int     PresidentialPardonForm::GetGrdToSign() { return (this->grdToSign); }


int     PresidentialPardonForm::GetGrdToMake() { return (this->grdToMake); }


void        PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= this->grdToMake && this->sIgned)
    {
        std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
    }
    else if (!this->sIgned)
    {
        std::cout << "Error : Form is't signed. Please, sign the form!" << std::endl;
        return ;
    }
    else
        throw Form::GradeTooLowException();
}   

void        PresidentialPardonForm::beSigned(Bureaucrat &other)
{
    if (other.getGrade() <= this->GetGrdToSign())
        this->sIgned = true;
    else if (other.getGrade() < 1)
        throw Form::GradeTooHighException();
    else
        throw Form::GradeTooLowException();
}