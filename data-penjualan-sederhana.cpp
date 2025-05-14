#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string nama_barang[4];
    string jumlah_penjualan[4][4];
    int i, j;

    cout << "INPUT PENJUALAN BARANG" << endl;
    cout << "================================" << endl;

    for (i = 1; i < 4; i++) {
        cout << "Data penjualan ke-" << i << endl;
        cout << "Nama Barang : ";
        getline(cin, nama_barang[i]);

        for (j = 1; j < 4; j++) {
            cout << "Data Tahun 200" << j << endl;
            cout << "Jumlah Penjualan : ";
            getline(cin, jumlah_penjualan[i][j]);
        }
        cout << endl;
    }

    cout << endl;
    cout << "HASIL PENJUALAN BARANG" << endl;
    cout << "=======================================" << endl;
    cout << "No Nama Barang     2001    2002    2003" << endl;
    cout << "=======================================" << endl;

    for (i = 1; i < 4; i++) {
        cout << setiosflags(ios::left) << setw(3) << i;
        cout << setiosflags(ios::left) << setw(16) << nama_barang[i];
        for (j = 1; j < 4; j++) {
            cout << setiosflags(ios::left) << setw(8) << jumlah_penjualan[i][j];
        }
        cout << endl;
    }

    cout << "=======================================" << endl;
    return 0;
}
