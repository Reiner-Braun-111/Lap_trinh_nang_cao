#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    text=' '+text;
    int count=0;
    for(int i=0;i<text.size();i++){
        if((text[i]!=' ') &&( text[i-1]==' ')){
            count++;
        }
    }
    cout<<count;
    return 0;
    
}
