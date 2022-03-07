#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arrayA[10000];
    for(int i=0;i<n;i++){
        cin>>arrayA[i];
    }
    cout<<arrayA[0]<<" ";
    for(int i=1;i<n;i++){
        if(arrayA[i]!=arrayA[i-1]){
            cout<<arrayA[i]<<" ";  
        }
    }
    return 0;
}

