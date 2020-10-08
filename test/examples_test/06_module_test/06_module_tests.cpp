#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <bank_account.h>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test BankAccount initialization") {
    BankAccount account;

    REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test BankAccount deposit") {
    BankAccount account;
    REQUIRE(account.get_balance() == 0);

    account.deposit(50);

    REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test BankAccount withdrawal") {
    BankAccount account;
    REQUIRE(account.get_balance() == 0);

    account.deposit(50);
    REQUIRE(account.get_balance() == 50);

    account.withdrawal(25);

    REQUIRE(account.get_balance() == 25);
}