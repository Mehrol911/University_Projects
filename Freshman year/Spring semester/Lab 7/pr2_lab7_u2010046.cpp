/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 2. create account (inside currrent and saving acc)
Week: 8
Lab: 7
***/
#include<iostream>
// click + to open Class account or current account or saving account
#include<windows.h>
using namespace std;
// check if there is int main()
class Account  // class account 
{
private: // -
    string customerName;
    int accountNumber;
    string accountType;
public: // + 
    void getAccountInfo() // get account infor
    {
        cout << "Fill some account info:" << endl; // write some account info
        cout << "Customer name: "; // right customer name string
        cin >> customerName;
        cout << "Account number: ";  // account number should be integer
        cin >> accountNumber;

    }
    void printAccountInfo() 
    {
        cout << "Account information:" << endl; // here is the account information
        cout << "Customer name: " << customerName << endl; // write the name 
        cout << "Account number: " << accountNumber << endl;
        string tempAccountType = accountType == "C" ? "Current" : "Saving"; // which one saving or current
        cout << "Account type: " << tempAccountType << endl;
    }
    void setAccountType(string accountType)  // set accounttype
    {
        this->accountType = accountType; // using this pointer
    }
    string getAccountType() // get accounttype
    {
        return this->accountType; // using this pointer
    }
};

class CurrentAccount : public Account  // current account in account
{
private:
    const float penaltyAmount = 2; // this is constant number 
    const float minimumBalance = 100.0; // this is constant number
    float amount;
public:
    void printCurrentAccountRequirements() 
    {
        cout << "\"Current\" type of account requirements:" << endl;
        cout << "Minimum balance = " << minimumBalance << endl; // it is the minimum balance
        cout << "Penalty amount if x <= 100: " << minimumBalance << endl; // x is the monet in the balance
    } 
    void desposit() 
    {
        float depositedAmount;
        cout << "Enter the amount of deposit: "; // write the money you want to deposit
        cin >> depositedAmount;
        amount += depositedAmount; // it will be added to the ammount in the current balance
        cout << "Succesfully deposited" << endl; // after depositing

    }
    void balance() 
    {
        cout << "Balance of account: " << amount << endl; 
    }
    void withdraw() 
    {
        float withdrawedAmount;
        cout << "Enter the amount of withdraw: "; // you can withdraw money 
        cin >> withdrawedAmount;
        if (withdrawedAmount > amount) 
        {
            cout << "You don`t have enough money to withdraw" << endl; // you can see this message if there isn`t enough money to withdraw
        }
        else 
        {
            amount -= withdrawedAmount;
            cout << "Succesfully withdrawed" << endl; 
            penalty();
        }
    }
    void penalty() 
    {
        if (amount < minimumBalance) 
        {
            amount -= penaltyAmount; // it will take money from amount it is penalty
            cout << "Account penaltied of 2 USD for being less than 100$ in account" << endl;
        }
    }
};
class SavingAccount : public CurrentAccount  // saving account in current acc
{
private:
    float amount;
public:
    void desposit() 
    {
        float depositedAmount;
        cout << "Enter the amount of deposit: "; // write the any number you want to deposit
        cin >> depositedAmount;
        amount += depositedAmount;
        cout << "Succesfully deposited" << endl; 
    } 
    void balance() 
    {
        cout << "Balance of account: " << amount << endl;
    }
    void withdraw() 
    {
        float withdrawedAmount;
        cout << "Enter the amount of withdraw: ";// write the any number you want to withdraw from your balance
        cin >> withdrawedAmount;
        if (withdrawedAmount > amount) 
        {
            cout << "You don`t have enough money to withdraw\n";
        }
        else
        {
            amount -= withdrawedAmount;
            cout << "Succesfully withdrawed" << endl;
        }
    }
    void computeInterest() 
    {
        float tempDeposit;
        int tempYears;
        cout << "Calculating interest (ROI is 4% per year):" << endl; 
        cout << "Enter amount of deposit: ";
        cin >> tempDeposit;
        cout << "Enter years: ";
        cin >> tempYears;
        cout << "Interest after " << tempYears << " is: " << (tempDeposit * (1 + tempYears * 4)) << endl;

    }
};

int main() // change here
{
    system("color A0");
    SavingAccount a;
    int menuChoice = 0;
    cout << "Account type: " << endl; 
    cout << "Write S for saving account: " << endl;
    cout << "Write C for current account: "<<endl;
    string accountType;
    cin >> accountType;

    if (accountType == "C") 
    {
        a.setAccountType("C");
    }
    else if (accountType == "S") 
    {
        a.setAccountType("S");
    }
    a.getAccountInfo(); // getting account information
   // system("clear"); // it clears the screen

    if (accountType == "C") 
    {
        while (1) // menu for current acc
        {
            cout << "<----- MENU ----->\n";
            cout << "1 Make deposit\n";
            cout << "2 Display balance\n";
            cout << "3 Withdraw money\n";
            cout << "4 Account requirements\n";
            cout << "5 Exit \n\n";
            cout << "Write menu number: ";
            cin >> menuChoice;

            switch (menuChoice)
            {
            case 1:
                a.CurrentAccount::desposit();
                break;
            case 2:
                a.CurrentAccount::balance();
                break;
            case 3:
                a.CurrentAccount::withdraw();
                break;
            case 4:
                a.CurrentAccount::printCurrentAccountRequirements();
                break;
            case 5:
                return 1;
                break;
            default:
                cout << "Incorrect menu number" << endl;
                break;
            }
            system("pause");

            system("cls");

        }
    }
    else if (accountType == "S") 
    {    
        while (1) // menu for saving acc
        {
            cout << "<----- MENU ----->\n";
            cout << "1. Make deposit\n";
            cout << "2. Display balance\n";
            cout << "3. Compute and deposit interest\n";
            cout << "4. Withdraw money\n";
            cout << "5. Exit\n\n";
            cout << "Write menu number: ";
            cin >> menuChoice;
            switch (menuChoice)
            {
            case 1:
                a.desposit();
                break;
            case 2:
                a.balance();
                break;
            case 3:
                a.computeInterest();
                break;
            case 4:
                a.withdraw();
                break;
            case 5:
                return 1;
                break;
            default:
                cout << "Incorrect menu number" << endl;
                break;
            }
            system("pause");

            system("cls");
            return 0;
        }

    }
}