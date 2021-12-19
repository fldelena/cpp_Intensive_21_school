#ifndef H_PHONEBOOK
# define H_PHONEBOOK

#include <string>
#include <iostream>
#include <iomanip>

class contact_list
{
public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string darkest_secret;

};

class phonebook
{
private:
	std::string		add_name();
	std::string		add_numb();
	std::string		add_secr();
	void			header();
	void			write_data(std::string str);
	contact_list	contact[8];

public:
	void			add_cont(int count);
	void			empty_list();
	void			lst_cont(int count);
	void			sch_cont(int count);
	void			pck_cont(int count);

	int			count;

};

int my_strcmp(std::string str, std::string dst);
int my_strlen(std::string str);

#endif
