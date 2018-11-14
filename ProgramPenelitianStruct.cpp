#include <iostream>
using namespace std;

//membuat data mengenai peserta penelitian: nama, asal, kelompok penelitian.

struct namaLengkap{
	string namaDepan;
	string namaTengah;
	string namaBelakang;
};
struct asalnya{
	string kota;
	string provinsi;
};
struct peserta{
	namaLengkap nama;
	asalnya asal;
	int kode;
};

int main(){
	int n;
	cout<<"Jumlah peserta penelitian: ";
	cin>>n;
	cout<<endl;
	string p1,p2,p3;
	p1="Alter-Ego Millenials dalam Menggunakan Akun Media Sosial: Studi Mengenai Identitas.";
	p2="Fenomena Kutu Loncat (Grasshopper) dalam Konteks Keorganisasian.";
	p3="Kecenderungan Generasi Milenial dalam Membeli Obat Secara Online.";
	
	peserta penelitian[n];
	for(int i=0;i<n;i++){
		cout<<"Nama Lengkap: ";
		cin>>penelitian[i].nama.namaDepan;
		cin>>penelitian[i].nama.namaTengah;
		cin>>penelitian[i].nama.namaBelakang;
		cout<<"Asal: ";
		cin>>penelitian[i].asal.kota;
		cin>>penelitian[i].asal.provinsi;
		cout<<"Kelompok Penelitian: ";
		cin>>penelitian[i].kode;
	}

	cout<<endl;
	
	for(int i=0;i<n;i++){
		cout<<"Nama Peserta : "<<penelitian[i].nama.namaDepan<<" "<<penelitian[i].nama.namaTengah<<" "<<penelitian[i].nama.namaBelakang<<endl;
		cout<<"Asal : "<<penelitian[i].asal.kota<<", "<<penelitian[i].asal.provinsi<<endl;
		cout<<"Penelitian : ";
		if(penelitian[i].kode==1){
			cout<<p1<<endl;
		}
		else if(penelitian[i].kode==2){
			cout<<p2<<endl;
		}
		else if(penelitian[i].kode==3){
			cout<<p3<<endl;
		}
		else cout<<"Tidak ditemukan subjeknya"<<endl;
	}
}
