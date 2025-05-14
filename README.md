# data-penjualan-sederhana-cpp
Program C++ sederhana untuk merekam dan menampilkan data penjualan barang dengan array 2 dimensi

---

# 📊 data-penjualan-sederhana-cpp

Program C++ sederhana yang menggunakan array dua dimensi untuk mencatat dan menampilkan data penjualan barang selama tiga tahun (2001–2003). Input dilakukan secara berulang menggunakan `for loop`, dan hasilnya ditampilkan dalam bentuk tabel.

---

## 📌 Fitur
- Input nama barang
- Input jumlah penjualan untuk tahun 2001–2003
- Output hasil penjualan dalam bentuk tabel rapi
- Penggunaan array 2 dimensi dan `setw` untuk tampilan

---

## 💡 Contoh Output

```yml
INPUT PENJUALAN BARANG
================================
Data penjualan ke-1
Nama Barang : Buku
Data Tahun 2001
Jumlah Penjualan : 120
Data Tahun 2002
Jumlah Penjualan : 135
Data Tahun 2003
Jumlah Penjualan : 140

Data penjualan ke-2
Nama Barang : Pensil
Data Tahun 2001
Jumlah Penjualan : 100
Data Tahun 2002
Jumlah Penjualan : 110
Data Tahun 2003
Jumlah Penjualan : 125

Data penjualan ke-3
Nama Barang : Penghapus
Data Tahun 2001
Jumlah Penjualan : 80
Data Tahun 2002
Jumlah Penjualan : 95
Data Tahun 2003
Jumlah Penjualan : 100


HASIL PENJUALAN BARANG
=======================================
No  Nama Barang     2001    2002    2003
=======================================
1   Buku            120     135     140
2   Pensil          100     110     125
3   Penghapus       80      95      100
=======================================
```

---

## 🧠 Konsep yang Digunakan
```yml
| Konsep                 | Deskripsi                                      |
|------------------------|-----------------------------------------------|
| Array 2 Dimensi        | Menyimpan data penjualan berdasarkan barang & tahun |
| Perulangan `for`       | Mengisi dan mencetak data                     |
| `getline()`            | Input string termasuk spasi                   |
| `setw()` + `setiosflags()` | Format output kolom                       |
```

---

**luqmanaru**  
Program ini ditulis sebagai latihan simulasi input dan output penjualan barang menggunakan array dua dimensi di bahasa pemrograman C++.
