#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string CoinFlip()
{
    if (rand() %2==1){
        return "Heads";
    }
    else
    {
         return "Tails";
    }
}

int main() 
{ 
int numFlips;

srand(2);

    if(!(cin>>numFlips)) return 0;
    
    for(int i=0;i<numFlips;i++)
    {
        cout<<CoinFlip()<<" ";
    }
    cout<<endl;
    return 0;
}
