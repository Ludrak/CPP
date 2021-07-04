
// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                      //
//                Created on  : *** *** ** **:**:** ****                      //
//                Last update : Sat Jul 03 23:41:06 2021                      //
//                Made by : Luca Robino <lr@gbu.com>                          //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <iostream>
#include <ctime>

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

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << 
    " accounts:" << _nbAccounts <<
    ";total:" << _totalAmount <<
    ";deposits:" << _totalNbDeposits <<
    ";withdrawals:" << _totalNbWithdrawals <<
    std::endl;
}

Account::Account( void )
: _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
    {
        this->_displayTimestamp();
        std::cout <<
        "index:" << _nbAccounts <<
        ";amount:" << _amount <<
        ";created" <<
        std::endl;
        _nbAccounts++;
    }

Account::Account( int initial_deposit )
: _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
    {
        this->_displayTimestamp();
        std::cout <<
        " index:" << _nbAccounts <<
        ";amount:" << _amount <<
        ";created" <<
        std::endl;
        _nbAccounts++;
        _totalAmount += initial_deposit;
    }

Account::~Account( void )
    {
        this->_displayTimestamp();
        std::cout <<
        " index:" << _nbAccounts <<
        ";amount:" << _amount <<
        ";closed" <<
        std::endl;
        _nbAccounts--;
    }


void	Account::makeDeposit( int deposit )
{
    this->_displayTimestamp();
    std::cout <<
    " index:" << this->_accountIndex <<
    ";p_amount:" << this->_amount <<
    ";deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout <<
    ";amount:" << this->_amount <<
    ";nb_deposits:" << this->_nbDeposits <<
    std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
    this->_displayTimestamp();
    std::cout <<
    " index:" << this->_accountIndex <<
    ";p_amount:" << this->_amount <<
    ";withdrawal:";
    if (this->_amount >= withdrawal)
    { 
        this->_nbWithdrawals++;
        this->_amount -= withdrawal;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << withdrawal <<
        ";amount:" << this->_amount <<
        ";nb_withdrawals:" << this->_nbDeposits <<
        std::endl;
        return (true);
    }
    std::cout << "refused" << std::endl;
    return (false);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    this->_displayTimestamp();
    std::cout <<
    " index:" << this->_accountIndex <<
    ";amount:" << this->_amount <<
    ";deposits:" << this->_nbDeposits <<
    ";withdrawals:" << this->_nbWithdrawals <<
    std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t now = std::time(0);
    std::tm *time = std::localtime(&now);

    std::cout << 
    "[" <<
    time->tm_year + 1900 <<
    time->tm_mon <<
    time->tm_mday <<
    '_' <<
    time->tm_hour <<
    time->tm_min <<
    time->tm_sec <<
    "]";
}
