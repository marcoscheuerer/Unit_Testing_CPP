#include "LibraryCode.hpp"
#include <stdexcept>

Account::Account() : m_balance{0}
{
}

void Account::deposit(double sum)
{
    m_balance += sum;
}

void Account::withdraw(double sum)
{
    if (m_balance < sum)
    {
        throw std::runtime_error("Insufficient funds");
    }

    m_balance -= sum;
}

double Account::getBalance() const
{
    return m_balance;
}

void Account::transfer(Account& to, double sum)
{
    withdraw(sum);      // will throw an error if not enough
    to.deposit(sum);
}
