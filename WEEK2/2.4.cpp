#include <iostream>
using namespace std;
int main()
{
    int total,totalLegs, numChicken,numDog;
    cin>>total>>totalLegs;
    if(totalLegs%2!=0){cout <<"invalid";}
    for ( numChicken=1;numChicken<=(totalLegs/2);numChicken++){
        numDog=total-numChicken;
        if(2*numChicken+4*numDog==totalLegs){ 
            cout <<"chicken = "<<numChicken<<", "<<"dog = "<<numDog;} 
        
        }
  
return 0;
}

