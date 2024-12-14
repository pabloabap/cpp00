// CABECERA

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

/** Non-member attributes initialization */
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/** Default Account constructor*/
Account::Account( void )
{
}

/** 
 * Alternative Account constructor.
 * @param initial_deposit Initial amount of an Account.
*/
Account::Account( int initial_deposit )
{
	this->_accountIndex = t::_nbAccounts++;
	this->_amount = initial_deposit;
	t::_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	t::_displayTimestamp();
	std::cout  << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";created" << std::endl;
}

/** Default Account destructor.*/
Account::~Account( void )
{
	t::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed" << std::endl;
}

/** Obtain _nbAccount non-member private attribute.*/
int	Account::getNbAccounts( void )
{
	return (t::_nbAccounts);
}

/** Obtain _totalAmount non-member private attribute.*/
int	Account::getTotalAmount( void )
{
	return (t::_totalAmount);
}

/** Obtain _totalNbDeposits non-member private attribute.*/
int	Account::getNbDeposits( void )
{
	return (t::_totalNbDeposits);
}

/** Obtain _totalNbWithdrawals non-member private attribute.*/
int	Account::getNbWithdrawals( void )
{
	return (t::_totalNbWithdrawals);
}

/** Display a sumary of global indicators.*/
void	Account::displayAccountsInfos( void)
{
	t::_displayTimestamp();
	std::cout << " accounts:" << t::getNbAccounts()
		<< ";total:" << t::getTotalAmount()
		<< ";deposits:" << t::getNbDeposits()
		<< ";withdrawals:" << t::getNbWithdrawals()
		<< std::endl;
}

/** Make a deposit of `deposit` amount, update attributes and display the 
 * result of the operation.
 * @param deposit Amount to deposit.
 */
void	Account::makeDeposit( int deposit )
{
	int	p_amount;

	p_amount = this->_amount;	
	this->_amount += deposit;
	this->_nbDeposits ++;
	t::_totalAmount += deposit;
	t::_totalNbDeposits ++;
	t::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";p_amount:" << p_amount
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
}

/** Make a withdrawal if possible, update attributes and display the result of 
 * the operation.
 * @param withdrawal Aumount to withdraw.
 */
bool	Account::makeWithdrawal( int withdrawal )
{
	int		p_amount;

	p_amount = this->_amount;
	if (p_amount > withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals ++;
		t::_totalAmount -= withdrawal;
		t::_totalNbWithdrawals ++;
		t::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
			<< ";p_amount:" << p_amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals
			<< std::endl;
	}
	else
	{
		t::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
			<< ";p_amount:" << p_amount
			<< ";withdrawal:refused" << std::endl;
	}
	return (p_amount == this->_amount);
}

/** Display local current timestamp. */
void	Account::_displayTimestamp( void )
{
	time_t		raw_now;
	struct tm	*local_now;

	time(&raw_now);
	local_now = localtime(&raw_now);
	std::cout << std::put_time(local_now, "[%Y%m%d_%H%M%S]");
}

/** Check object _amount attribute. */
int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

/** Diplay account status. */
void	Account::displayStatus( void ) const
{
	t::checkAmount();
	t::_displayTimestamp();
	std::cout  << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}
