#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int d=0;
    do{
        n=n/10;
        d++;
    }while(n!=0);
    cout<<d;
}
