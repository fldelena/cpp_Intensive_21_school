#ifndef H_BUREAUCRAT
#define H_BUREAUCRAT
#include <iostream>
#include <string>

class Bureaucrat
{
private:
    std::string Name;
    int         Grade;
public:
    Bureaucrat();
    Bureaucrat(std::string Name, int Grade);
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &other);

    std::string getName() const;
    int         getGrade() const;
    void UpGrade(int value);
    void DownGrade(int value);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &ret, const Bureaucrat &other);

#endif