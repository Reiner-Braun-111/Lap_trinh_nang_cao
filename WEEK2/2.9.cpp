#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    const int MAX_N = 1000;
    int n;
    cin>>n;
    double arrayX[MAX_N];
    for(int i=0;i<n;i++){
        cin>>arrayX[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<setprecision(2)<<fixed<<arrayX[i]*1.0<<" ";
    }
    
}
