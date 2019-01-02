#include<iostream>
using namespace std;

void garis(){
    for(int i=1; i<=20; i++){
        cout << "==";
    }
    cout << endl;
}

int main(){
    string nama, jurusan, jawab, keluar;
    int mat, bio, fis, kim, geo, eko, sos, bi, bing, bl, m;
    cout << "PROGRAM PENJURUSAN SNMPTN\n";
    garis();
    cout << "Nama Siswa : ";
    getline(cin,nama);
    cout << " 1.IPA\n 2.IPS \n 3.Bahasa\n Minat Siswa : ";cin >> m;
    garis();
    cout << "NILAI SISWA\n";
    garis();
    cout << "Nilai Mapel IPA\n";
    cout << "Nilai Matematika : ";cin >> mat;
    cout << "Nilai Biologi : ";cin >> bio;
    cout << "Nilai Fisika : ";cin >> fis;
    cout << "Nilai Kimia : ";cin >> kim;
    garis();
    cout << "Nilai Mapel IPS\n";
    cout << "Nilai Geografi : ";cin >> geo;
    cout << "Nilai Ekonomi : ";cin >> eko;
    cout << "Nilai Sosiologi : ";cin >> sos;
    garis();
    cout << "Nilai Mapel Bahasa\n";
    cout << "Nilai Bahasa Indonesia : ";cin >> bi;
    cout << "Nilai Bahasa Inggris : ";cin >> bing;
    cout << "Nilai Bhasa Lain : ";cin >> bl;

        if(m==1){
            if(mat>=80&&bio>=80&&fis>=80&&kim>=80){
            garis();
            cout << "Disarankan masuk jurusan IPA\n";
            }
            else if(mat<80&&fis<80||mat<80&&kim<80||mat<80&&bio<80||bio<80&&fis<80||bio<80&&kim<80||kim<80&&fis<80){
                if(geo>80&&eko>80&&sos>80){
                    cout << "Disarankan Masuk IPS \n";
                }
                else if(geo<80&&eko<80&&sos<80){
                    cout << "Disarankan Masuk Bahasa \n";
                    if(bi<80&&bing<80&&bl<80){
                    cout << "Maaf, Tidak ada jurusan untuk anda \n";
                    }
                }
                else if(bi>80&&bing>80&&bl>80){
                    cout << "Disarankan Masuk Bahasa \n";
                }
            }
        }
        else if(m==2){
            if(geo>=80&&sos>=80&&eko>=80){
            garis();
            cout << "Disarankan masuk jurusan IPS\n";
            }
            else if(geo<80&&sos<80||geo<80&&eko<80||sos<80&&eko<80){
                if(mat>=80&&bio>=80&&fis>=80&&kim>=80){
                    cout << "Disarankan Masuk IPA \n";
                }
                if(bi>80&&bing>80&&bl>80){
                    cout << "Disarankan Masuk Bahasa \n";
                }
            }
        }
        else if (m==3){
            if(bi>=80&&bing>=80&&bl>=80){
            garis();
            cout << "Disarankan masuk jurusan Bahasa\n";
            }
            else if(bi<80&&bing<80||bi<80&&bl<80||bing<80&&bl<80){
                if(mat>=80&&bio>=80&&fis>=80&&kim>=80){
                    cout << "Disarankan Masuk IPA \n";
                }
                if(geo>80&&eko>80&&sos>80){
                    cout << "Disarankan Masuk IPS \n";
                }
            }
        }
        else{
            cout << "Maaf, Tidak ada jurusan untuk anda. Anda bisa belajar untuk menempuh jalur SBMPTN atau Ujian Mandiri.";
        }




return 0;
}
