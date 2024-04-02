#include <iostream>
#include <string> // Include the <string> header for getline
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};
struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur; // Added umur variable
};
int main() {
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++) {
        cout << "Data Ke-" << (i + 1) << ":" << endl;
        cout << "Nomor Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << "Alamat Mahasiswa : " << endl;
        cout << "\t Nama Desa : ";
        getline(cin, mhs[i].alamat.desa);
        cout << "\t Nama Kota : ";
        getline(cin, mhs[i].alamat.kota);
        cout << "Umur Mahasiswa : ";
        cin >> mhs[i].umur;
        cin.ignore(); // Ignore newline character
        cout << endl;
    }