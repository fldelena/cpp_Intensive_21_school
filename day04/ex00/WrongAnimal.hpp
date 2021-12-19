#ifndef H_WRONGANIMAL
# define H_WRONGANIMAL
# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& other);
	const std::string getType() const;
	void makeSound() const;
};

#endif