#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    int countStartSpaces;
    int i=0;
    while(text[i]==' '){
        countStartSpaces++;
        i++;
    }
    for(int i=0;i<countStartSpaces;i++){
        cout<<" ";
    }
    for(int i=countStartSpaces;i<text.size();i++){
        if(text[i]!=' '){
            cout<<text[i];
        }else{
        	cout<<" ";
            while(text[i]==' '){
                i++;
                continue;
            }
            i--;
        }
    }
    return 0;
    
}
