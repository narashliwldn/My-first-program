#include <iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	bool palindrome=true;
	
	for(int i=0;i<s.length();i++){
	if(s[i]!=s[s.length()-i-1])
	palindrome=false;
	}
if(palindrome==true)
	cout<<"Palindrome";
else cout<<"bukan palindrome";
}
