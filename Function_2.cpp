#include <iostream>
using namespace std;

const int TWINKIE_PRICE = 350;

int accept_money();

int compute_change(int total_paid);

int main()
{
      
    int money_entered, change;

    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    
    money_entered = accept_money();

    
    change = compute_change(money_entered);

    
    cout << "\nEnjoy your deep-fried twinkie. Your change is $"
         << change/100.0 << endl;

    return 0;
}

int accept_money()
{
  int total = 0;
  int coin;
  while(total<TWINKIE_PRICE)
  {
  
  cout<<"Enter a coin(100,25,10,5,1): ";
  cin>>coin;
  
  if(coin==100||coin==25||coin==10|coin==5|coin==1)
  {
    total += coin;
    cout<<"Total Entered: $"<<total/100.0<<endl;
  }else{
      cout<<"Invalid coin ammount"<<endl;
  }
}
  return total;
}
int compute_change(int total_paid) 
{
return total_paid-TWINKIE_PRICE;
}

