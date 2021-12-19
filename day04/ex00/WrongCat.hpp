#ifndef H_WRONGCAT
# define H_WRONGCAT
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& other);
	~WrongCat();
	WrongCat& operator=(const WrongCat& other);
	const std::string getType() const;
	void makeSound() const;
};

#endif