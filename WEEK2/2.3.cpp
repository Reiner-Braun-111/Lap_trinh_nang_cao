//Nh?p v�o s? nguy�n duong n v� in ra d�y 1 2 3 � n 
//g?m c�c s? duong nh? hon ho?c b?ng n, c�ch nhau b?i d?u c�ch.
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
