#include <iostream>
#include <string>
#include <ctime>
#include "Account.hpp"
#include <iomanip>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void Account::_displayTimestamp( void )
{
	time_t	time;
	struct tm *date;

	time = std::time(&time); 
	/* получим количество секунд прошедших с начала 1970 ГОДА !!! */
	date = std::localtime(&time); 
	/* возвращает указатель на структуру tm полученную из time */
	std::cout << "[" << (date->tm_year + 1900) << 
		((date->tm_mon / 10) == 0 ? "0" : "") << date->tm_mon <<
		((date->tm_mday / 10) == 0 ? "0" : "") << date->tm_mday <<
		"_" << 
		((date->tm_hour / 10) == 0 ? "0" : "") << date->tm_hour <<
		((date->tm_min / 10) == 0 ? "0" : "") << date->tm_min <<
		((date->tm_sec / 10) == 0 ? "0" : "") << date->tm_sec <<
		"] ";
}

Account::Account( void )
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<
				 ";amount:" << _amount <<
				 ";created" <<
	std::endl;
}

Account::Account(int init_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = init_deposit;
	_totalAmount += init_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<
				 ";amount:" << _amount <<
				 ";created" <<
	std::endl;
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts <<
				 ";total:" << _totalAmount <<
				 ";deposits:" << _totalNbDeposits <<
				 ";withdrawals:" << _totalNbWithdrawals <<
	std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex++ <<
				 ";p_amount:" << _amount <<
				 ";deposits:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_accountIndex--;
	std::cout << ";amount:" << _amount <<
				 ";nb_deposits:" << _nbDeposits <<
	std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex++ <<
				 ";p_amount:" << _amount <<
				 ";withdrawal:";
	_accountIndex--;
	if (_amount < withdrawal)
		std::cout << "refused" << std::endl;
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal <<
					 ";amount:" << _amount <<
					 ";nb_withdrawals:" << _nbWithdrawals <<
		std::endl;
	}
	return (true);
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<
				 ";amount:" << _amount <<
				 ";deposits:" << _nbDeposits <<
				 ";withdrawals:" << _nbWithdrawals <<
	std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex++ <<
				 ";amount:"<< _amount <<
				 ";closed" << std::endl;
}