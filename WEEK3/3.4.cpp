#include <iostream>
#include <iomanip>
using namespace std;
void swap(double *a, double *b){
    double temp=*b;
    *b=*a;
    *a=temp;
    
}
int main(){
    int n;
    //cout<<"n:";
    cin>>n;
    double arrayA[1001];
    //cout<<"array:";
    for(int  i=0;i<n;i++){
        cin>>arrayA[i];
    }
    double x;
    //cout<<"x:";
    cin>>x;
    arrayA[n]=x;
    for(int i=0;i<n;i++){
    for(int j=i+1;j<=n;j++){
        if(arrayA[i]>arrayA[j]){
            swap(&arrayA[i],&arrayA[j]);
        }
    }}
    //cout<<"ket qua:";
    for(int  j=0;j<=n;j++){
        cout<<fixed<<setprecision(2)<<arrayA[j]<<" ";
    }  

}
