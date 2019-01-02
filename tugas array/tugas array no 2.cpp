#include <iostream>
using namespace std;
int main(){
	float a[100],jumlah=0,rata_rata;
	int n;
	cout<<"Masukkan angka : ";
	cin>>n;
	cout<<"Masukkan Nilai Yang Ingin Dihitung :"<<endl;
    for(int j=0;j<n;j++){
    cout<<"A["<<j<<"]=";
    cin>>a[j];
    jumlah=jumlah+a[j];
    }
	rata_rata=jumlah/n;
    cout<<"Nilai Rata-Rata Dari Data Di Atas Adalah = "<<rata_rata<<endl;
return 0;
}
