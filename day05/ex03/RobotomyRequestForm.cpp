#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    this->grdToSign = 72;
    this->grdToMake = 45;
    this->target = target;
    this->sIgned = false;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    this->grdToSign = other.grdToSign;
    this->grdToMake = other.grdToMake;
    this->sIgned = other.sIgned;
    this->target = other.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{   
    this->sIgned = other.sIgned;
    this->target = other.target;
    return (*this);  
}

bool    RobotomyRequestForm::GetSigned() { return (this->sIgned); }


int     RobotomyRequestForm::GetGrdToSign() { return (this->grdToSign); }


int     RobotomyRequestForm::GetGrdToMake() { return (this->grdToMake); }



void        RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= this->grdToMake && this->sIgned)
    {
        std::cout << "BzZzZzZ BzZ-BzZ VhzZzZzZ" << std::endl;
        std::cout << "The robotization of the " << this->target;
        int d = rand() % 2;
        if (d)
            std::cout << " was successful!" << std::endl;
        else
            std::cout << " was not a success!" << std::endl;
    }
    else if (!this->sIgned)
    {
        std::cout << "Error : Form is't signed. Please, sign the form!" << std::endl;
        return ;
    }
    else
        throw Form::GradeTooLowException();
}   

void        RobotomyRequestForm::beSigned(Bureaucrat &other)
{
    if (other.getGrade() <= this->GetGrdToSign())
        this->sIgned = true;
    else if (other.getGrade() < 1)
        throw Form::GradeTooHighException();
    else
        throw Form::GradeTooLowException();
}