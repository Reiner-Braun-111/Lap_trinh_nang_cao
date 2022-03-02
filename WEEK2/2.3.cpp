//Nh?p vào s? nguyên duong n và in ra dãy 1 2 3 … n 
//g?m các s? duong nh? hon ho?c b?ng n, cách nhau b?i d?u cách.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int lowerBound, upperBound;
    cin>>lowerBound>>upperBound;
    int ans;
    
    for(int i=sqrt(lowerBound);i<=sqrt(upperBound);i++){
        ans=i*i;
        if((ans>=lowerBound)&&(ans<=upperBound)){
        cout<<ans<<" ";}
    }
    return 0;
}
