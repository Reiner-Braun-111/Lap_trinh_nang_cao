#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    const int MAX_N = 1000;
    int n;
    cin>>n;
    double arrayX[MAX_N];
    double sum = 0;
    double preAns=0;
    for(int i=0;i<n;i++){
        cin>>arrayX[i];
        sum += arrayX[i];
    }
    double mean = sum / n;
    for(int i=0;i<n;i++){
        preAns += (arrayX[i]-mean)*(arrayX[i]-mean);
    }
    cout<<setprecision(2)<<fixed<<preAns/n;
}
