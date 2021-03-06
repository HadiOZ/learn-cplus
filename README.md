## Perintah GCC yang biasanya digunakan


#### basic compile: 
`g++ <source file>`
Perintah ini akan menghasilkan file executable dengan ekstensi yang disesuaikan dengan plafom yang digunakan sebagai contoh `a.out` jika menggunkan linux linux atau `a.exe` jika menggunkan windows. `<source file>` disi dengan alamat file yang akan dicompile.

#### compile dengan spesifik executable extension:
`g++ <source file> -o <souce build>`
Perintah ini akan menghasilkan file executable yang spesifik sesuai dengan permintan, `<souce build>` diisi dengan alamat tempat file hasil compile akan ditaruh diikuti dengan nama file dan ekstensinya, sebagai contoh `g++ dummy.cpp -o dummy.out` perintah ini kana menghasilkan file executable dengan nama `dummy` dan ekstensi `*.out`.

#### compile ke file object
`g++ -c <source file> -o <souce build>`

#### membuat archive library
`ar rcs <library name> <source build>`
c for create
r for replace
s for indexing

#### melihat isi archive library
`ar t <library name>`

#### mengunakan archive library
`g++ <source file> -l<library name> -o <source build>`
jika file archive library berada di luar path standar GCC maka gunakan:
`g++ <source file> -L<path archive> -l<library name> -o <source build>` atau `g++ <source file> <library name> -o <source build>`


### Referensi
- [Memahami Static dan Shared Library di Linux](https://cintaprogramming.com/2018/02/14/memahami-static-dan-shared-library-di-linux/)
