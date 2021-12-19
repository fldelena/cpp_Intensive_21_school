#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{	
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	const Animal *zoo[10];
	for (int i = 0; i < 10; i++)
	{
		if(i < 5)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
		zoo[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete zoo[i];
	while(1);
}
