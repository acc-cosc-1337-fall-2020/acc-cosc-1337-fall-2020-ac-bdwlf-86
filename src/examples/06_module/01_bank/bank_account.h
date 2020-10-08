//bank_account.h
class BankAccount
{
public://access specifier makes class function available to users of the class
    int get_balance(){return balance;}//inline class function
    void deposit(int amount);
    void withdrawal(int amount);


private://access specifier
    int balance{0};
};//Dont forget the semicolon!!!!!