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