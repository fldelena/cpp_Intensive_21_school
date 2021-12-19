#ifndef H_DOG
# define H_DOG
# include "Animal.hpp"


class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& other);
	~Dog();
	Dog& operator=(const Dog& other);
	const std::string getType() const;
	void makeSound() const;
};

#endif