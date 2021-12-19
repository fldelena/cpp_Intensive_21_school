#include "phonebook.hpp"

void	phonebook::header()
{
	std::cout << "#############################################" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     index|first name| lust name|  nickname|" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|~~~~~~~~~~|~~~~~~~~~~|~~~~~~~~~~|~~~~~~~~~~|" << std::endl;
}

void	phonebook::write_data(std::string str)
{
	if (my_strlen(str) > 10)
		std::cout << str.substr(0, 9)<< ".";
	else
		std::cout << std::setw (10) << str;
}

void	phonebook::empty_list()
{
	std::cout << "|list is empty, to add a contact enter \"ADD\"|" << std::endl;
	std::cout << "#############################################" << std::endl;
}

void	phonebook::lst_cont(int count)
{
	for(int i = 0; i < count ; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		write_data(contact[i].first_name);
		std::cout << "|";
		write_data(contact[i].last_name);
		std::cout << "|";
		write_data(contact[i].nickname);
		std::cout << "|" << std::endl;
	}
	std::cout << "#############################################" << std::endl;
}

void	phonebook::pck_cont(int count)
{
	std::string str;
	std::cout << "select the contact number: ";
	std::getline(std::cin, str);
	if ((my_strlen(str) > 1) || str[0] < 49 || str[0] > 56)
		std::cout << "Incorrect contact number" << std::endl;
	else
	{
		int i = str[0] - 48;
		if (i > count)
			std::cout << "no contact" << std::endl;
		else
		{
			i--;
			std::cout << "First name:\t" << contact[i].first_name << std::endl;
			std::cout << "Last name:\t" << contact[i].last_name << std::endl;
			std::cout << "Nickname:\t" << contact[i].nickname << std::endl;
			std::cout << "Phone number:\t" << contact[i].phone_number << std::endl;
			std::cout << "Darkest secret:\t" << contact[i].darkest_secret << std::endl;
		}
	}
}

void	phonebook::sch_cont(int count)
{
	if (count > 8)
		count = 8;
	phonebook::header();
	if (count == 0)
		phonebook::empty_list();
	else
	{
		phonebook::lst_cont(count);
		phonebook::pck_cont(count);
	}
}
