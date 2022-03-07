#include <iostream>
#include <iomanip>
using namespace std;
void swap(double *a, double *b){
    double temp=*b;
    *b=*a;
    *a=temp;
    
}
int main(){
    int n,b=0;
    cin>>n;
    double arrayA[10000];
    for(int i=0;i<n;i++){
        cin>>arrayA[i];
    }
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arrayA[i]<arrayA[j]){
            swap(&arrayA[i],&arrayA[j]);
        }
    }}
    for(int i=0;i<n;i++){
        cout<<setprecision(2)<<fixed<<arrayA[i]<<" ";
    }
    return 0;
}
