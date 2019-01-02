#include<iostream>
using namespace std;
int main(){
	char huruf[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int n;
	cout<<"Masukkan nilai : ";
	cin>>n;
	cout<<"Huruf ke "<<n<<" adalah "<<huruf[n-1];
}
