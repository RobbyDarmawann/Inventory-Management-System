#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string kode_brg;
    string nama;
    int unit;
    float harga;
};

int main() {
    int jumlahData;
    cout << "Input Data Persediaan" << endl;
    cout << "Jumlah Data: ";
    cin >> jumlahData;

    Barang persediaan[jumlahData];

    for (int i = 0; i < jumlahData; i++) {
        cout << "\nData Barang ke-" << i+1 << endl;
        cout << "Kode Barang   : ";
        cin >> persediaan[i].kode_brg;
        cout << "Nama Barang   : ";
        cin.ignore(); 
        getline(cin, persediaan[i].nama);
        cout << "Unit          : ";
        cin >> persediaan[i].unit;
        cout << "Harga         : ";
        cin >> persediaan[i].harga;
    }

    cout << "\nDaftar Persediaan Barang\n";
    cout << "---------------------------------------------" << endl;
    cout << "Kode Barang   Nama Barang   Unit   Harga" << endl;
    cout << "---------------------------------------------" << endl;
    float totalHarga = 0;
    for (int i = 0; i < jumlahData; i++) {
        cout << persediaan[i].kode_brg << "        ";
        cout << persediaan[i].nama << "        ";
        cout << persediaan[i].unit << "      ";
        cout << persediaan[i].harga << endl;
        totalHarga += persediaan[i].unit * persediaan[i].harga;
    }
    cout << "---------------------------------------------" << endl;
    cout << "Total Harga: " << totalHarga << endl;

    return 0;
}
