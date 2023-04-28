#pragma once

class Account
{
    private:
        double m_balance;

    public:
        Account();
        void deposit(double sum);
        void withdraw(double sum);
        double getBalance() const;
        void transfer(Account& to, double sum);
};
