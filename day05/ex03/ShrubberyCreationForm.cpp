#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    this->target = target;
    this->sIgned = false;
    this->grdToMake = 137;
    this->grdToSign = 145;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
    this->grdToSign = other.grdToSign;
    this->grdToMake = other.grdToMake;
    this->sIgned = other.sIgned;
    this->target = other.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{   
    this->sIgned = other.sIgned;
    this->target = other.target;
    return (*this);   
}

bool    ShrubberyCreationForm::GetSigned() { return (this->sIgned); }
int     ShrubberyCreationForm::GetGrdToSign() { return (this->grdToSign); }
int     ShrubberyCreationForm::GetGrdToMake() { return (this->grdToMake); }

void        ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= this->grdToMake && this->sIgned)
    {
        std::string path = this->target + "_shrubbery";
        std::cout << "The tree " << path << " is grown!!!" << std::endl;
        std::ofstream lol;
        lol.open(path);
        if(lol.is_open())
        {
            lol <<  "        ____(___)          \n" 
                    "     __(    o    )_)__     \n"
                    "   ((  o   o     o   ))    \n"
                    "    (      \\ o  /   ) )   \n"
                    "     (__\\_ o ||__//__)    \n"
                    "         \\\\(    /) | |   \n"
                    "           |  |    | |     \n"
                    "           ( o|    |_|     \n"
                    "          /  | \\          \n" << std::endl;
        }
        else
            std::cout << "file not created" << std::endl;
        lol.close();
    }
    else if (!this->sIgned)
    {
        std::cout << "Error : Form is't signed. Please, sign the form!" << std::endl;
        return ;
    }
    else
        throw Form::GradeTooLowException();
}   

void        ShrubberyCreationForm::beSigned(Bureaucrat &other)
{
    if (other.getGrade() <= this->GetGrdToSign())
        this->sIgned = true;
    else if (other.getGrade() < 1)
        throw Form::GradeTooHighException();
    else
        throw Form::GradeTooLowException();
}