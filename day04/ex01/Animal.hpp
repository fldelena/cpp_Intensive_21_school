#ifndef H_ANIMAL
# define H_ANIMAL
# include <string>
# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& other);
	virtual ~Animal();
	Animal& operator=(const Animal& other);
	const std::string getType() const;
	virtual void makeSound() const;
};

#endif