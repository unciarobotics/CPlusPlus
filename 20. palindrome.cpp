//Palindrome String

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector<string> word;
	string wrd="";
	string newWrd="";
	
	cout<<"Enter a word: ";
	cin>>wrd;
	for(int i=0; i<wrd.size();i++)
	{
		word.push_back(wrd.substr(i,1));
	}
	
	reverse(word.begin(),word.end());						//reversing the string
	
	for(int j=0;j<word.size();j++)
	{
		newWrd=newWrd+word[j];								//concatenation of words
	}
	
	
	
	if(wrd==newWrd)											//Comparison of correct and reversed word
	{
		cout<<"\nThe string is Palindrome.";
	}
	
	else
	{
		cout<<"\nThe string is not Palindrome";
	}
	
return 0;
}
