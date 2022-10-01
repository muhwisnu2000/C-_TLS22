#include <iostream>
#include <cstring>

using namespace std;
int nomorBangun;
float PHI = 3.14;
float luas, panjang, lebar, panjangAlas, tinggi, sejajar1, sejajar2, radius;
string konfirmasi;

int main()
{
    cout <<"Menghitung Luas Bangun Datar"<<endl;
    cout <<"Daftar Bangun Datar"<< endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Trapesium" << endl;
    cout << "5. Jajargenjang" << endl;
    cout << "6. Lingkaran" << endl;
    cout << "7. Close" << endl;

    while (1) {
        cout << "Masukkan nomor bangun datar : ";
        cin >> nomorBangun;
        if (nomorBangun == 1) //Menghitung luas persegi
            {
                cout << "Masukkan panjang persegi : ";
                cin >> panjang;
                cout << "Masukkan lebar persegi : ";
                cin >> lebar;
                
                luas = panjang*lebar;
                cout << "Luas persegi adalah " << luas;
            }
        else if (nomorBangun == 2) //Menghitung luas persegi panjang
            {
                cout << "Masukkan panjang persegi panjang : ";
                cin >> panjang;
                cout << "Masukkan lebar persegi panjang : ";
                cin >> lebar;
                
                luas = panjang*lebar;
                cout << "Luas persegi panjang adalah " << luas;
            }
        else if (nomorBangun == 3) //Menghitung luas segitiga
            {
                cout << "Masukkan panjang alas segitiga : ";
                cin >> panjangAlas;
                cout << "Masukkan tinggi segitiga : ";
                cin >> tinggi;
                
                luas = 0.5*panjangAlas*tinggi;
                cout << "Luas segitiga adalah " << luas;
            }
        else if (nomorBangun == 4) //Menghitung luas trapesium
            {
                cout << "Masukkan panjang sisi sejajar 1 : ";
                cin >> sejajar1;
                cout << "Masukkan panjang sisi sejajar 2 : ";
                cin >> sejajar2;
                cout << "Masukkan tinggi trapesium: ";
                cin >> tinggi;
                
                luas = 0.5*(sejajar1+sejajar2)*tinggi;
                cout << "Luas trapesium adalah " << luas;
            }
        else if (nomorBangun == 5)
            {
                cout << "Masukkan panjang alas jajar genjang : ";
                cin >> panjangAlas;
                cout << "Masukkan tinggi jajar genjang : ";
                cin >> tinggi;
                
                luas = panjangAlas*tinggi;
                cout << "Luas jajar genjang adalah " << luas;
            }
        else if (nomorBangun == 6)
            {
                cout << "Masukkan jari-jari lingkaran : ";
                cin >> radius;
                
                luas = PHI*radius*radius;
                cout << "Luas lingkaran adalah " << luas;
            }
        else if (nomorBangun == 7) {
            break;
        }
        cout << endl;

        cout << "Lakukan perhitungan lagi? (input \"Tidak\" untuk selesai)" << endl;
        
        cin >> konfirmasi;
        for (int x=0; x<konfirmasi.length(); x++)
            konfirmasi[x] = (toupper(konfirmasi[x]));

        if (konfirmasi == "TIDAK") {
            break;
        }
    }
            
    return 0;
}