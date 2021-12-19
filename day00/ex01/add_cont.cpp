#include "phonebook.hpp"

std::string		phonebook::add_name()
{
	std::string	str;
	std::getline(std::cin, str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122))
		{
			std::cout << "Error: this line can only contain alphabetic values!" << std::endl;
			std::cout << "TRY AGAIN!!!" << std::endl;
			return (phonebook::add_name());
		}
	}
	return (str);
}

std::string		phonebook::add_numb()
{
	std::string	str;
	std::getline(std::cin, str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 48 || str[i] > 57)
		{
			std::cout << "Error: this line can only contain numeric values!" << std::endl;
			std::cout << "TRY AGAIN!!!" << std::endl;
			return (phonebook::add_numb());
		}
	}
	return (str);
}

std::string		phonebook::add_secr()
{
	std::string	str;
	std::getline(std::cin, str);
	return (str);
}

void			phonebook::add_cont(int count)
{
	int i = count % 8;

	std::cout << "Enter a first name:\t";
	this->contact[i].first_name = phonebook::add_name();
	std::cout << "Enter a last name:\t";
	contact[i].last_name = phonebook::add_name();
	std::cout << "Enter a nickname:\t";
	contact[i].nickname = phonebook::add_name();
	std::cout << "Enter a phone number:\t";
	contact[i].phone_number = phonebook::add_numb();
	std::cout << "Enter a darkest secret:\t";
	contact[i].darkest_secret = phonebook::add_secr();
	phonebook::count++;
}
