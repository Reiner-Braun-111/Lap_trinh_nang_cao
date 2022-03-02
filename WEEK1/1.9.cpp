#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;

    cin>>a>>b>>c;
    float p=(a+b+c)*0.5;
    if(((a+b)>c)&&((b+c)>a)&&((a+c)>b)){
        cout<<fixed<<setprecision(2)<<sqrt(p*(p-a)*(p-b)*(p-c))*1.0;}
    else{    
        cout<<"invalid";}
        
    return 0;    
}
