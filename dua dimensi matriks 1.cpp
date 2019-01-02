#include<iostream>
using namespace std;
int main(){
	int n,r;
	int p[n][r];
	cout<<"Masukkan baris dan kolom yang diinginkan: "<<endl;
	cin>>n>>r;
cout<<"Matriks1"<<endl;
for(int i=0;i<n;i++){
for(int j=0;j<r;j++){
	cin>>p[i][j];
}
}
cout<<"Matriks T"<<endl;
for(int i=0;i<n;i++){
for(int j=0;j<r;j++){
	cout<<p[j][i]<<endl;
}
}
}
