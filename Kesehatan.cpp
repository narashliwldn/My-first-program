#include<iostream>
using namespace std;
int main(){
	char a;
	string s2,s3,s4,s5,s6;
	s2="Apakah anda batuk? ";
	s3="Apakah anda pilek? ";
	s4="Apakah anda demam? ";
	s5="Apakah anda mual? ";
	s6="Apakah anda muntah-muntah? ";
cout<<"Cek kesehatan."<<endl;
cout<<"Selamat datang. Silahkan isi pertanyaan ini dengan menjawab yes=y atau no=n."<<endl;
cout<<"Apakah anda pusing? ";
//jawaban no jika tidak pusing dan yes jika iya.
cin>>a;
if(a=='n'){
	cout<<s2;
	//jika tidak pusing, maka akan ditanya apakah pasien batuk.
	cin>>a;
	if(a=='y'){
		cout<<s3;
		//jika batuk, maka akan ditanya apakah pasien pilek.
		cin>>a;
		if(a=='y'){
			cout<<s4;
			//jika pilek, maka akan ditanya apakah pasien demam.
			cin>>a;
			if(a=='y'){
				cout<<"flu";
				//jika pasien batuk, pilek, demam, dan tidak pusing. Artinya pasien sakit flu.
				}
				else cout<<"Batuk Pilek";
				//jika batuk, pilek, tapi tidak demam dan pusing. Artinya pasien sakit batuk pilek.
			} else cout<<"Batuk Aja";
			//jika tidak pilek, tidak pusing, tidak demam, tapi batuk. Artinya pasien hanya sakit batuk.
		}  else cout<<"Ora popo";
		//jika tidak mengalami keempatnya, pasien tidak sakit.
	}
else {cout<<s5;
//jika pasien merasa pusing, akan ditanya apakah pasien mengalami mual.
cin>>a;
if(a=='y'){
	cout<<s6;
	//jika pasien merasa mual, akan ditanya apakah pasien mengalami muntah-muntah.
	cin>>a;
	if(a=='y'){
		//jika pasien merasa pusing, mual, dan muntah. Pasien mengalami "Waah ini.................".
		cout<<"Waah ini........."<<endl;
	}
		else if(a=='n'){
			//jika pasien merasa pusing, mual, tapi tidak muntah. Pasien mengalami Masuk Angin.
			cout<<"Masuk angin";
		}
	}
	else {
	cout<<s2;
	//jika pasien tidak mengalami mual, akan ditanya apakah pasien batuk.
		cin>>a;
	if(a=='y'){
		cout<<s3;
		//jika mengalami batuk, pasien akan ditanya apakah pilek.
		cin>>a;
		if(a=='y'){
			cout<<s4;
			//jika mengalami pilek, akan ditanya apakah pasien demam.
			cin>>a;
			if(a=='y'){
				//jika mengalami batuk, pilek, dan demam. Artinya pasien sakit flu.
				cout<<"flu";
				}
				//jika mengalami batuk, pilek, tapi tidak demam. Artinya pasien sakit batuk pilek.
				else cout<<"Batuk Pilek";
				//jika tidak mengalami pilek, demam, dan hanya sakit batuk. Artinya pasien sakit batuk.
			} else cout<<"Batuk Aja";
			//jika tidak mengalami apapun, pasien tidak mengalami sakit.
		} else cout<<"Ora popo";
}
}
}
