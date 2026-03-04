//Marshon Sellers

#include <iostream>
using namespace std;

struct Bank_Account
{
    int account_number;
    int balance;
};

void deposit_money(Bank_Account &account_ref, int deposit_amount)
{
   account_ref.balance = account_ref.balance + deposit_amount;
    
    cout << "Balance Inside function (copy): " << account_ref.balance << endl;
}

int main()
{
   Bank_Account account_main;
    int deposit_amount;

    cin >> account_main.account_number;
    cin >> account_main.balance;
    cin >> deposit_amount;

    cout << "Balance before call (main): " << account_main.balance << endl;

    deposit_money(account_main, deposit_amount);
    
    cout << "Balance after call (main): " << account_main.balance << endl;

    return 0;
}



