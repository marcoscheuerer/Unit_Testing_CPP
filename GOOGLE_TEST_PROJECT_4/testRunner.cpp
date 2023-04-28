#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "LibraryCode.hpp"

class AccountTestFixture: public testing::Test
{
    protected:
        Account *account;

    public:
        AccountTestFixture();
        virtual ~AccountTestFixture();
        void SetUp() override;
        void TearDown() override;
        static void SetUpTestCase();
        static void TearDownTestCase();
};

AccountTestFixture::AccountTestFixture()
{
    std::cout << "Constructor called\n";
}

AccountTestFixture::~AccountTestFixture()
{
    std::cout << "Destructor called\n";
}

void AccountTestFixture::SetUp()
{
    std::cout << "SetUp called\n";
    account = new Account();
    account->deposit(10.5);
}

void AccountTestFixture::TearDown()
{
    std::cout << "TearDown called\n";
    delete account;
}

void AccountTestFixture::SetUpTestCase()
{
    std::cout << "SetUpTestCase called\n";
}

void AccountTestFixture::TearDownTestCase()
{
    std::cout << "TearDownTestCase called\n";
}

TEST(AccountTest, TestEmptyAccount)
{
    // Arrange
    Account account;

    // Act
    double balance = account.getBalance();

    // Assert
    ASSERT_EQ(0, balance);
}

TEST_F(AccountTestFixture, TestDeposit)
{
    ASSERT_EQ(10.5, account->getBalance());
}

TEST_F(AccountTestFixture, TestWithdrawOK)
{
    account->withdraw(3);

    ASSERT_EQ(7.5, account->getBalance());
}

TEST_F(AccountTestFixture, TestWithdrawInsufficientFunds)
{
    ASSERT_THROW(account->withdraw(300), std::runtime_error);
}

TEST_F(AccountTestFixture, TestTransferOK)
{
    Account to;

    account->transfer(to, 2);

    ASSERT_EQ(8.5, account->getBalance());
    ASSERT_EQ(2, to.getBalance());
}

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
