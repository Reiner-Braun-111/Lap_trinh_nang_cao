#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    int countStartSpaces;
    for(int i=0;i<text.size();i++){
        if(( text.substr(i,4) != "Zues")){
            cout<<text[i];
        }else{
        	cout<<"Zeus";
        	i+=3;
        }
    }
    return 0;
    
}
