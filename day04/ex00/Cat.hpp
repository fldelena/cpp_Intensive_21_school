#ifndef H_CAT
# define H_CAT
# include "Animal.hpp"


class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& other);
	~Cat();
	Cat& operator=(const Cat& other);
	const std::string getType() const;
	void makeSound() const;
};

#endif