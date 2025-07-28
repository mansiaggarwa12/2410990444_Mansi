#include <iostream>
#include <windows.h>
using namespace std;

// //1 Banking
// double totalBankBalance = 50000;
// double depositMoney(double amount, double &accountBalance)
// {
//     totalBankBalance+=amount;
//     accountBalance+=amount;

// }
// double withdrawMoney(double amount, double &accountBalance)
// {
//     totalBankBalance-=amount;
//     accountBalance-=amount;
// }
// void displayBalances(double &accountBalance)
// {
//     cout<<totalBankBalance<<endl<<accountBalance;
// }
// int main()
// {
//     int n;
//     double accountBalance=1000;
//     static int transactions=0;

//     cout<<"Initial Account Balance: "<<accountBalance<<"\nInitial Bank Balance: "<<totalBankBalance<<endl;
//     do
//     {
//         cout << "\nEnter 1 to deposit, 2 to withdraw , 3 to display balances and 0 to exit: ";
//         cin >> n;
//         if (n==1){
//             double amt;
//             cout<<"\nEnter amount to deposit: ";
//             cin>>amt;
//             depositMoney(amt,accountBalance);
//             transactions++;
//         }
//         else if (n==2){
//             double amt;
//             cout<<"\nEnter money to withdraw: ";
//             cin>>amt;
//             withdrawMoney(amt,accountBalance);
//             transactions++;
//         }
//         else if (n==3){
//             displayBalances(accountBalance);
//         }
//         else if (n==0){
//             return 0;
//         }
//         else{
//             cout<<"\nWrong input.. Try again...\n";
//         }
//     }
//     while (n != 0);
//     cout<<"Total Transactions: "<<transactions;
// }

// 2 Scientific Calculator

// 3 Traffic Light Stimulator
int green(int remTime)
{
    cout << "GREEN" << endl;
    while (remTime >= 0)
    {
        cout << remTime--<<"    ";
        Sleep(1000);
    }
    cout << "\nYellow Light activated for 5 seconds" << endl;
    cout << "Next: Red light will activate after 5 seconds" << endl;
    return 0;
}
int yellow(int remTime)
{
    cout << "YELLOW" << endl;
    while (remTime >= 0)
    {
        cout << remTime--<<"    ";
        Sleep(1000);
    }
    return 0;
}
int red(int remTime)
{
    cout << "RED" << endl;
    while (remTime >= 0)
    {
        cout << remTime--<<"    ";
        Sleep(1000);
    }
    cout << "\nYellow Light activated for 5 seconds" << endl;
    cout << "Next: Green light will activate after 5 seconds" << endl;
    return 0;
}
int main()
{
    char currL;
    cout << "Enter current Light: ";
    cin >> currL;
    int remTime;
    cout << "Enetr remaining time: ";
    cin >> remTime;
    cout << "Current Light: ";
    if (currL == 'G')
    {
        green(remTime);
    }

    else if (currL == 'R')
    {
        cout << "RED" << endl;
        red(remTime);
    }
    else if (currL == 'Y')
    {
        cout << "YELLOW" << endl;
        yellow(remTime);
    }
}