#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    const int MAX_N = 1000;
    int n;
    cin>>n;
    double arrayA[MAX_N],arrayB[MAX_N];
    double product = 0;
    for(int i=0;i<n;i++){
        cin>>arrayA[i];
    }
    for(int i=0;i<n;i++){
        cin>>arrayB[i];
    }
    for(int i=0;i<n;i++){
        product += arrayA[i] * arrayB[i];
    }

    cout<<setprecision(2)<<fixed<<product;
}
