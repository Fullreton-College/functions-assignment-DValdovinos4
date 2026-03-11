#include <iostream>
using namespace std;

void computeCoins(int coinValue, int& num, int& amountLeft);

int main()
{
int amount, originalAmount;
int quarters, dimes, pennies;
char choice;
do{
    cout<<"Enter an amount between 1 and 99: ";
    cin>>amount;
    

 if(amount<1 || amount>99)
{
    cout<<"Invalid amount, please input an amount between 1 and 99: "<<endl;
    continue;
}
originalAmount = amount;

computeCoins(25, quarters, amount);
computeCoins(10, dimes, amount);
computeCoins(1, pennies, amount);
cout<<originalAmount<<"Cents can be given as"<<endl;
cout<<quarters<<" Quarters"<<endl;
cout<<dimes<<" Dimes"<<endl;
cout<<pennies<<" Pennies"<<endl;

cout<< "Do you want to calculate change for another amount? (Y/N)";
cin>>choice;
}while(choice == 'Y' || choice == 'y');

return 0;
}
void computeCoins(int coinValue, int& num, int& amountLeft)
{
    num = amountLeft / coinValue;
    amountLeft = amountLeft % coinValue;
}
