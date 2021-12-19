#ifndef H_CAT
# define H_CAT
# include "Animal.hpp"
# include "Brain.hpp"


class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& other);
	~Cat();
	Cat& operator=(const Cat& other);
	const std::string getType() const;
	void makeSound() const;
	Brain* GetBrain() const;
};

#endif