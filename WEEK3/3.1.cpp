#include <iostream>
using namespace std;
int main(){
    int n,b=0;
    cin>>n;
    int arrayA[10000], arrayB[10000];
    for(int i=0;i<n;i++){
        cin>>arrayA[i];
    }
    for(int i=0;i<n;i++){
        cin>>arrayB[i];
    }   
    for(int i=0;i<n;i++){
        if(arrayA[i]!=arrayB[i]){
            continue;  
        }else{
            b++;
        }
    }
    if(b==n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
