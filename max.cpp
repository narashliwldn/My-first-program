#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>b){
		b=a;
	}
	if(b>c){
		c=b;
	}
	if(c>d){
		d=c;
	}
	if(d>a){
		a=d;
	}
	
	cout<<a<<endl;
	return 0;
}
