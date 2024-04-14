## Program Penjumlahan Pecahan Sederhana

### Deskripsi
Program ini adalah sebuah program sederhana yang bertujuan untuk menjumlahkan dua pecahan sederhana dan menampilkan hasilnya dalam bentuk pecahan yang paling sederhana. Program ini menggunakan algoritma Euclidean untuk menemukan Faktor Persekutuan Terbesar (GCD) dari pembilang dan penyebut hasil penjumlahan.

### Algoritma
1. Program membaca empat input bilangan bulat: A, B, C, dan D. Input ini mewakili dua pecahan sederhana: A/B dan C/D.
2. Program menghitung penyebut baru dengan mengalikan penyebut pecahan pertama (B) dengan penyebut pecahan kedua (D).
3. Program menghitung pembilang baru dengan menjumlahkan hasil perkalian pembilang pecahan pertama (A) dengan penyebut pecahan kedua (D) dan hasil perkalian pembilang pecahan kedua (C) dengan penyebut pecahan pertama (B).
4. Program mencari Faktor Persekutuan Terbesar (GCD) dari pembilang baru dan penyebut baru menggunakan algoritma Euclidean.
5. Program membagi pembilang baru dan penyebut baru dengan nilai GCD yang ditemukan untuk mendapatkan pecahan dalam bentuk paling sederhana.
6. Program menampilkan hasil penjumlahan pecahan sederhana.

### Struktur Kode
- Fungsi `gcd`: Fungsi ini menerima dua parameter bilangan bulat a dan b dan mengembalikan GCD dari kedua bilangan menggunakan algoritma Euclidean.
- Fungsi `main`: Fungsi utama program. Membaca input, menghitung penjumlahan pecahan, mencari GCD, dan menampilkan hasilnya.

### Cara Menggunakan
1. Compile program menggunakan compiler C++.
2. Jalankan program.
3. Masukkan nilai pecahan sebagai input berupa empat bilangan bulat (A, B, C, dan D).
4. Program akan menampilkan hasil penjumlahan pecahan dalam bentuk paling sederhana.

### Contoh Penggunaan
```
Input:
1 2 1 3

Output:
5 6
```

### Keterangan
Pecahan pertama: 1/2

Pecahan kedua: 1/3

Hasil penjumlahan pecahan: 5/6
