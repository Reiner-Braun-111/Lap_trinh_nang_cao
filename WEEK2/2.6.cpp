#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp;
    for(int x = -n; x <= n; x++){
        for(int y = -n; y <= n; y++){
           // temp = x;
            if(x<=0){temp=x;}else{temp=-x;}
            // N?u mu?n in ra n?a du?i h�nh thoi ch? c?n x�t di?u ki?n c?a x
            // v� c?p nh?t bi?n temp ? d�y.
            if (y >= -(n + temp) && y <= n + temp){
                cout<<"* ";
            }else{
                cout<<". ";
            }
        }
        cout<<endl;
    }    
  
    return 0;
}

