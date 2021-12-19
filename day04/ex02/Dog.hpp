#ifndef H_DOG
# define H_DOG
# include "Animal.hpp"
# include "Brain.hpp"


class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog& other);
	~Dog();
	Dog& operator=(const Dog& other);
	const std::string getType() const;
	void makeSound() const;
	Brain* GetBrain() const;
};

#endif