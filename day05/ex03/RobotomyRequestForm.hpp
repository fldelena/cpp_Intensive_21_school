#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"


class RobotomyRequestForm: public Form

{
private:
    std::string         target;
public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

    bool    GetSigned();
    int     GetGrdToSign();
    int     GetGrdToMake();

    void        execute(Bureaucrat const &executor) const;
    void        beSigned(Bureaucrat &other);


};

#endif