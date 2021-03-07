## Perintah GCC yang biasanya digunakan


#### basic compile: 
###### `g++ <source file>`
Perintah ini akan menghasilkan file executable dengan ekstensi yang disesuaikan dengan plafom yang digunakan sebagai contoh `a.out` jika menggunkan linux atau `a.exe` jika menggunkan windows. `<source file>` disi dengan alamat file yang akan dicompile.

#### compile dengan spesifik executable extension: 
###### `g++ <source file> -o <souce build>`
Perintah ini akan menghasilkan file executable yang spesifik sesuai dengan permintan, `<souce build>` diisi dengan alamat tempat file hasil compile akan ditaruh diikuti dengan nama file dan ekstensinya, sebagai contoh `g++ dummy.cpp -o dummy.out` perintah ini kana menghasilkan file executable dengan nama `dummy` dan ekstensi `*.out`.

#### compile ke file object:
###### `g++ -c <source file> -o <souce build>`
Perintah ini digunakan untuk membuat object file dari source file. Ekstensi dari object file adalah `*.o`, object file bisa digunkan sebagai linking file atau dimasukan ke dalam archive library, kelebihan dari object file adalah pihak ke tiga tidak bisa mengetahui apa isi dari object file tersebut.

#### membuat archive library: 
###### `ar rcs <library name> <source build>`

Perintah ini digunakan untuk membuat sebuah archive library, archive library adalah file yang berisi kumpulan file yang digunkan sebagai linking file pada saaat proses mengcompile, singkatnya perintah di atas digunakan untuk membuat archive yang berisi kumpulan file library.
Archive library ini digunakan ketika linking file yang dipakai terlalu banyak sehingga merepotkan pada saat proses compile,

c for create
r for replace
s for indexing

#### melihat isi archive library: 
###### `ar t <library name>`
Perintah ini digunakan untuk melihat isi dari library yang telah dibuat.

#### mengunakan archive library: 
###### `g++ <source file> -l<library name> -o <source build>`
jika file archive library berada di luar path standar GCC maka gunakan: `g++ <source file> -L<path archive> -l<library name> -o <source build>` atau `g++ <source file> <library name> -o <source build>`


### Referensi
- [Memahami Static dan Shared Library di Linux](https://cintaprogramming.com/2018/02/14/memahami-static-dan-shared-library-di-linux/)
