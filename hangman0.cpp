#include <iostream>
#include <ctime>
#include <bits/stdc++.h>
using namespace std;
const string FIGURE[] = {
 " ------------- \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | /| \n"
 " | \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | /|\\ \n"
 " | \n"
 " | \n"
 " ----- \n",
" ------------- \n"
 " | | \n"
 " | O \n"
 " | /|\\ \n"
 " | / \n"
 " | \n"
 " ----- \n",
 " ------------- \n"
 " | | \n"
 " | O \n"
 " | /|\\ \n"
 " | / \\ \n"
 " | \n"
 " ----- \n",
};//
string secretword;
string guessedWord;
char guess;

string chooseWord();
char getGuess();
void renderGame(string guessedWord, int count);
string generateGuessedWord(string secretword ,string guessedWord);
bool contains(string secretword, char guess);

string update(char guess, string guessedWord, string secretword);

int main(){
	secretword=chooseWord();
	cout<<secretword;
	guessedWord=generateGuessedWord( secretword, guessedWord );
	int count=7;
	do{ 
	    renderGame( guessedWord, count);
	    guess=getGuess();
	    cout<<guessedWord;
		if ( contains( secretword,  guess)){
			
			guessedWord=update( guess,guessedWord, secretword);
			cout<<guessedWord;
			}
		else {
		count--;}
	}while((count!=0)&& (secretword != guessedWord));
	
	if(secretword == guessedWord){
		cout<<"Congrat!!!\n";
	}else{
		cout<<"You lose :(\n";
	}
	return 0;
}


string update(char guess, string guessedWord, string secretword){
	for(int i=0; i<secretword.length();i++){
		if(secretword[i]==guess){
			guessedWord[i]=guess;	
		}
	}
	return guessedWord;


}//

string chooseWord(){//dung
	const string wordList[]={"cherished","friend","joyful"};
	srand(time(0));
	return wordList[rand()%3];
}
char getGuess(){
	cout<<"\n";
	cout<<"Doan chu cai:"<<endl;
	char n;
	cin>>n;
	return n;
}//
string generateGuessedWord(string secretword,string guessedWord ){
	for(int i=0;i<secretword.size();i++){
		guessedWord[i]='_';
	}
	return guessedWord;
}//
void renderGame(string guessedWord, int count)
{
	cout << guessedWord << endl;
	cout<<FIGURE[count]<<endl;
	cout << "live " << count << endl;

}//
bool contains(string secretword, char guess){
	int thisBlock=0;
	for(int i=0; i<secretword.length();i++){
		if(secretword[i]==guess){
			thisBlock ++;	
		}
	}
	if(thisBlock>0) {
		return true;
	}
	else {
		return false;
	}
}


