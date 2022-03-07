#include<bits/stdc++.h>
using namespace std;
int main(){
	string text; 
	cin >> text;
	int s = text.size();
	int count  = 0;
	for(int i = 0;  i < s;i++ ){
		if(isalnum(text[i])) {
		    count++;}
	}
	if((s < 6 || s > 16) || (count  < s  )|| ('0'<= text[0] && text[0] <= '9')  ){
		cout << "Invalid username.";
	}else{
		cout << "Valid username.";
	}
	return 0;
}
