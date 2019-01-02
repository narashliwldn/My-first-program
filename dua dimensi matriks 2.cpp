#include <iostream> 
using namespace std;
int main(){ 
int n,r;
int matrik1[2][2]; 
int matrik2[2][2]; 
int matrik3[2][2]; 
int kali; 
cout<<"Masukkan ordo"<<endl;
cin>>n>>r;
//input matrik pertama 
for (int x=0;x<n;x++){          
for (int y=0;y<r;y++){ 
cout <<"masukan nilai matrik pertama baris ke-"<<x<<" kolom ke-"<<y<<" : "; 
cin>>matrik1[x][y]; 
} 
} 
cout<<endl;
//output matrik pertama 
cout<<"Matrik Pertama :"<<endl; 
for (int x=0;x<n;x++){ 
for (int y=0;y<r;y++){ 
cout <<matrik1[x][y]<<"   "; 
} 
cout<<endl; 
} 
cout<<endl;
//input matrik kedua 
for (int x=0;x<n;x++){ 
for (int y=0;y<r;y++){ 
cout <<"masukan nilai matrik kedua baris ke-"<<x<<" kolom ke-"<<y<<" : "; 
cin>>matrik2[x][y]; 
} 
} 
cout<<endl;
//output matrik kedua 
cout<<"Matrik Kedua :"<<endl; 
for (int x=0;x<n;x++){ 
for (int y=0;y<r;y++){ 
cout <<matrik2[x][y]<<"   "; 
} 
cout<<endl; 
}
//rumus perkalian matrik 
for (int x= 0;x<n;x++){ 
for (int y=0;y<r;y++){ 
matrik3[x][y]=0; 
for (int z =0;z<r;z++){ 
kali=matrik1[x][z]*matrik2[z][y]; 
matrik3[x][y]=matrik3[x][y]+kali; 
} 
} 
}
//output matrik hasil perkalian 
cout<<endl; 
cout<<"Matrik hasil perkalian :"<<endl; 
for (int x=0;x<n;x++){ 
for (int y=0;y<r;y++){ 
cout <<matrik3[x][y]<<"   ";
} 
cout<<endl; 
}
}
