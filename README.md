<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/headline.gif" width="1000" height="260"/>

# Pratikum-Struktur-Data <img src="https://www.thedataschool.com.au/wp-content/uploads/2022/01/logo-data-structures-algorithms.png" width="34" height="34">

Repositori ini berisi penjelasan mengenai materi yang ada di dalam jobsheet beserta tugas dan latihan yang dikerjakan oleh mahasiswa. Penjelasan beserta link jobsheet telah tertera di bawah.

Dosen : Randi Proska Sandra, M.Sc<br>
Kode Kelas : INF1.62.2014<br>
Seksi : 202323430156<br>
Mahasiswa : Radhia Aulia Nisa (23343049)<br><br>


# 📋 Jobsheets 📋 #
***
## [Jobsheet 1 - Introduction](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%201%20-%20Introduction/latihan)<br> ##

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/data%20structure.jpeg" width="350"/>

<p align="justify">
<b>Struktur data</b> merupakan cara penyimpanan, penyusunan dan pengaturan data di dalam media penyimpanan komputer sehingga data tersebut dapat digunakan secara efisien. Sedangkan data adalah representasi dari fakta dunia nyata. Konstanta digunakan untuk menyatakan nilai yang dapat berubah.
</p>

<p align="justify">
Struktur data dibagi menjadi 2, yaitu : </p>
<ol>
 <li>Struktur data sederhana, misalnya arrray dan record</li>
 <li>Struktur data majemuk, yang terdiri dari</li>
 <ol type='a'>
   <li>linier : Stack, Queue, sertaList dan Multilist</li>
   <li>Non linier : pohon biner dan graph</li>
 </ol>
</ol>

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 2 - Array, Pointer, Structure](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%202%20-%20Array%2C%20Pointer%2C%20Structure)<br> ##

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/pointer.gif" width="350"/>

  #### Array
  Array merupakan suatu kumpulan nilai yang bertipe data sama. Setiap data dalaam array dapat diakses menggunakan indeks dan elemen array dapat diakses langsung secara acak. Dimensi Array dinyatakan dalam bentuk baris dan kolom seperti matriks.<br>
  
  #### Pointer 
  Pointer adalah variable yang berisi alamat memory sebagai nilainya dan berbeda dengan variable biasa yang berisi nilai tertentu. Suatu pointer bukan berisi dengan suatu nilai data seperti halnya pada variabel biasa, variabel pointer berisi suatu alamat. Untuk mendeklarasikan variabel pointer digunakan tanda asterisk atau bintang (*) didepan variabel yang dideklarasikan pada tipe sata tertentu.<br>

  #### Struct ####
  Struct (Structure) merupakan kumpulan variabel yang memiliki tipe data yang berbeda dan bernaung dalam satu nama objek yang serumpun. Sebelum membuat sebuah struct anda perlu menentukan tipe data apa saja di dalamnya. Di saat sebuah struct dideklarasikan, tidak ada alokasi memori yang dilakukan. utnuk mengalokasikan memori menggunakan struct, harus dibuat variabel baru dari struct tersebut. Ada 2 tipe operator yang digunakan untuk mengakses sebuah struct, yaitu : <li>'.' - member operator</li> <li>'-> - operator yang digunakan untuk pointer</li> <br>

  #### ADT (Abstract Data Type) ####
  ADT (Abstract Data Type) merupakan koleksi data dan operasi yang dapat digunakan untuk memanipulasi data tertentu yang telah didefinisikan oleh pemrogram. Dalam membuat tipe data bentukan ini di dalam bahasa C kita tidak boleh menggunakan nama yang sudah ada di dalam keyword bahasa C, seperti int, float, char dll. Kita dapat membuatnya dengan format :<br><br> typedef-(nama tipe data lama)-(nama tipe data baru).<br>
  
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 3 - Single Linked List](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%203%20-%20Single%20Linked%20List)<br> ##

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/Singlelinkedlist.png" width="350" height="120"/>

<p align="justify">
  Single linked list adalah struktur data linear yang terdiri dari sejumlah simpul(node) yang terhubung satu sama lain dengan menggunakan pointer. Setiap simpul memiliki dua bagian, data pointer yang menunjuk ke simpul berikutnya dalam daftar. Di simpul terakhir, pointer menunjuk ke nilai null, menandakan akhir dari linked list.</p>

  #### Simpul/Nodes ####
Sebuah simpul/node berisi alamat dan kumpulan data, dalam sebuah simpul/node keduanya dibungkus menjadi sebuah objek berupa struct.<br>

  #### Alokasi Memori #### 
  Alokasi memori menyediakan fasilitas untuk membuat ukuran buffer dan array secara dinamik. Dinamik artinya bahwa ruang dalam memori akan dialokasikan ketika program dieksekusi (run time). Fasilitas ini memungkinkan user untuk membuat tipe data dan struktur dengan ukuran dan panjang berapapun yang disesuaikan dengan kebutuhan di dalam program.<br>

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 4 - Doubly Linked List](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%204%20-%20Doubly%20Linked%20List)<br> ##

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/double%20linked%20list.png" width="350"/>

Doubly linked list (DLL) berisi pointer tambahan, biasanya disebut pointer sebelumnya, bersama dnegan pointer berikutnya dan data yang ada dalam daftar tertaut tunggal. Sama halnya dengan single linked list sebuah dobly link list memiliki head dan tail, perbedaannya doubly link list memiliki 2 arah data yakni next dan previous.

Kelebihan Doubly Link List dibandingkan Single Link List :
<ul>
<li> DLL bisa berjalan dalam 2 arah ke depan dan kebelakang.</li>
<li> Operasi penghapusan atau deletion() lebih efisien dan simple menggunakan pointer yang menunjuk ke simpul yang akan dihapus.</li>
<li> Dapat melakukan proses insert() simpul lebih efisien.</li>
</ul>

Dalam single link list penghapusan simpul, pointer simpul data sebelumnya diperlukan san untuk mendapatkannya terkadang list data diulang dari awal. Berbeda dengan dobly link list kita langsung dapat pointer simpul data sebelumnya menggunakan pointer previous.

Kelemahan Dobly Link List :
<ul>
<li> Setiap simpul DLL membutuhkan ruang memory tambahan untuk pointer.</li>
<li> Setiap operasi yang dilakukan harus mencantumkan pointer simpul sebelumnya.</li>
</ul>

Jenis Insertion() :
1. penambahan simpul didepan.
2. penambahan setelah simpul yang ditentukan.
3. Di simpul yang paling akhir.
4. Penambahan sebelum simpul yang ditentukan.
   
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 5 - Double and Circular Linked List](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%205%20-%20Double%20and%20Circular%20Linked%20List)<br>

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/double%20circular%20linked%20list.png" width="350"/>

  ####  Double Linked List
  Double Linked List adalah list elemen yang dihubungkan dengan dua pointer dalam satu node. Struktur ini menyebabkan list melintas baik kedepan ataupun kebelakang. Elemen pada double linked list terdiri dari tiga bagian, disamping data (info) dan pointer next, setiap elemen dilengkapi dengan pointer prev dan next . Untuk menunjukkan head dari double linked list ini maka pointer prev dari elemn pertama menunjukkan nilai NULL. Untuk menunjukkan tail dari double linked list, maka pointer next dari elemen terakhir menunjuk nilai NULL.<br>

  #### Circular Linked List
  Circular Linked List adalah bentuk lain dari linked list yang memberikan fleksibelitas. Circular linked list ini dapat berupa single linked list ataupun double linked list. Pada circular ini pointer next dari elemn terakhir tidak menujukkan nilai NULL tetapi nenunjuk pada elemen pertama.<br>
  
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 6 - Stack](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%206%20-%20Stack)<br>

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/stack.gif" width="350"/>

  #### Stack
  Stack adalah sebuah kumpulan data yang mana letaknya berada di atas data yang lain. Dengan demikian stack adalah struktur data yang menggunakan konsep LIFO (Last In First Out). Dalam proses komputasi, untuk meletakkan sebuah elem pada bagian atas stack, disebut dengan <b>push</b>, dan untuk memindahkan data dari tempat yang atas, disebut <b>pop</b>.<br>

  Bentuk penyajian stack bisa menggunakan tipe data array, tetapi kurang tepat karena banyaknya elemen dalam array adalah statis, sedangkan dalam stack banyaknya elemen didalamnya dinamis. Pada suatu saat, ukuran stack akan sama dengan array, bila terus menambhkan data maka akan terjadi overflow. Maka perlu ditambahkan data untuk mencatat posisi ujung stack, yaitu Single Stack dan Double Stack.<br>

  <b>Operasi pada Stack</b> 
 <ul>
  <li><b>Push</b> digunakan untuk menambahkan elemen atau data baru pada stack. Elemen baru tersbut akan menjadi elemen paling atas di dalam stack.</li>
  <li><b>Pop</b> digunakan untuk menghapus elen yang berada paling atas dari stack</li>
  <li><b>Peek</b> digunakan untuk mengecek elemen atau data paling atas tanpa menghapusnya</li>
  <li><b>isFull</b> digunakan untuk memeriksa apakah kondisi stack sudah penuh</li>
  <li><b>isEmpty</b> digunakan untuk memeriksa apakah stack masih dalam kondisi kosong</li>
  <li><b>Clear</b> digunakan untuk mengosongkan stack</li>
 </ul>
  
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 7 - Queue](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%207%20-%20Queue)<br>

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/queue.gif" width="350"/>

  #### Queue
  Queue adalah struktur data linier yang menerapkan prinsip operasi dimana elemen data yang masuk pertama akan keluar lebih dulu. Prinsip ini dikenal dengan istilah FIFO (First In, First Out). Persamaan antara stack dan queue adalah keduanya dapat diimplementasikan menggunakan struktur data linked list atau array.
<br>

 Spesifikasi Queue :
 <ul>
  <li>Enqueue: digunakan untuk menambah elemen di akhir queue</li>
  <li>Dequeue: digunakan untuk menghapus elemen awal queue</li>
  <li>IsEmpty: digunakan untuk mengecek apakah queue kosong</li>
  <li>IsFull: digunakan untuk mengecek apakah queue penuh</li>
  <li>Peek: digunakan untuk mengintip nilai queue</li>
 </ul>

  Cara kerja queue :
 <ul>
  <li>Dua pointer yang disebut FRONT dan REAR digunakan untuk melacak elemen pertama dan 
terakhir dalam antrian.</li>
  <li>Saat menginisialisasi antrian, kami menetapkan nilai FRONT dan REAR ke -1.</li>
  <li>Pada enqueing elemen, kita meningkatkan nilai indeks REAR dan menempatkan elemen baru di 
posisi yang ditunjuk oleh REAR.</li>
  <li>Pada dequeueing suatu elemen, kita mengembalikan nilai yang ditunjuk oleh FRONT dan 
meningkatkan indeks FRONT.</li>
  <li>Sebelum enqueing, kami memeriksa apakah antrian sudah penuh.</li>
  <li>Sebelum dequeuing, kami memeriksa apakah antrian sudah kosong.</li>
  <li>Saat membuat elemen pertama, kami menetapkan nilai FRONT ke 0.</li>
  <li>Saat mendekor elemen terakhir, kita mereset nilai FRONT dan REAR ke -1.</li>
 </ul>

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 8 - Bubble and Insertion Sort](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%208%20-%20Bubble%20and%20Insertion%20Sort)<br>

  #### Sorting
  Sorting (Pengurutan) merupakan proses pengurutan data yang sebelumnya disusun secara acak sehingga tersusun secara teratur menurut aturan tertentu. Teknik Sorting yang umum digunakan : buble sort, insertion sort, selection sort, quicksort, mergesort, heapsort, dan binary sort.<br>
<br>

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/bubble%20sort.gif" width="350"/>

  #### Bubble Sort
  Buble Sort merupakan metode/algoritma pengurutan dengan dengan cara melakukan penukaran data dengan tepat disebelahnya secara terus menerus sampai bisa dipastikan dalam satu iterasi tertentu tidak ada lagi perubahan. Jika tidak ada perubahan berarti data sudah terurut. Disebut pengurutan gelembung karena masing-masing kunci akan dengan lambat menggelembung ke posisinya yang tepat.<br>

<br>
<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/insertion%20sort.gif" width="350"/>

  #### Insertion Sort
  Insertion Sort merupakan sebuah teknik pengurutan dengan cara membandingkan dan mengurutkan dua data pertama pada array, kemudian membandingkan data para array berikutnya apakah sudah berada di tempat semestinya. Algoritma insertion sort seperti proses pengurutan kartu yang berada di tangan kita.

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 9 - Selection and Merge Sort](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%209%20-%20Selection%20and%20Merge%20Sort)<br>

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/selection%20sort.gif" width="350"/>

  #### Selection Sort
  Selection Sort merupakan sebuah algoritma yang digunakan untuk mencari dna memilih element/data terkecil dalam sebuah list yang belum tersusun dalam setiap iterasi dan menempatkan elemen terkecil di urutan paling depan dari urutan list data.<br>

  Cara kerja Slecetion Sort:
  <ol type="1">
  <li>Tentukan elemen pertama dari urutan menjadi elemen terkecil masukkan sebagai elemen “minimum”.</li>
  <li>Bandingkan mnimum dengan urutan elemen kedua. Jika elemen kedua lebih kcil dibandingkan minimum, jadikan elemen kedua sebagai minimum. Bandingkan kembali minimum dengan elemen ketiga. Lakukan secara terus menerus samapai dengan elemen yang terakhir.  </li>
  <li>Setelah setiap perulangan, minimum ditempatkan di paling depan urutan list data </li>
  <li>pada setiap pengulangan, indeksasi (pemberian alamat) dimulai dari elemen pertama dari list. langkah 1-3 dilakukan berulang kali samapi keseluruhan elemen digantikan pada posisi yang 
terurut. </li>
</ol>

<br>
<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/merge-sort-400.gif" width="350"/>

  #### Merge Sort
  Merge sort merupakan pengurutan gabungan terus-menerus memotong daftar menjadi beberapa subdaftar hingga masing-masing hanya memiliki satu item, lalu menggabungkan subdaftar tersebut ke dalam daftar yang diurutkan.

  Divide-and-conquer memecahkan sub-masalah secara rekursif; setiap submasalah harus lebih kecil dari masalah aslinya, dan masing-masing harus mempunyai kasus dasar. Algoritme bagi-dan-taklukkan memiliki tiga bagian :
  <ol type="1">
  <li>Bagilah masalah menjadi beberapa bagian kecil dari masalah yang sama</li>
  <li>Taklukkan submasalah dengan menyelesaikannya secara rekursif. Selesaikan submasalah sebagai kasus dasar jika submasalah tersebut cukup kecil.</li>
  <li>Untuk menemukan solusi dari masalah awal, gabungkan solusi dari submasalah.</li>
</ol>
  
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 10 -  Shell and Quick Sort](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%2010%20-%20Shell%20and%20Quick%20Sort)<br>

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/shell-sort-algorithm4.png" width="350"/>

  #### Shell Sort
  Shell Sort merupakan sebuah algoritma dengan pengurutan elemen pertama memiliki jarak interval dengan elemen yang akan dibandingkan. Pada prinsipnya sama dengan Insertion sort pada pokok bahasan sebelumnya.<br>
  
  Dalam pengurutan Shell Sort, elemen/data diurutkan dengan interval yang terukur. Jarak interval diantara elemen semakin lama semakin mengecil berdasarkan berapa kali pengulangan pengurutan dilakukan.<br>

  Cara kerja Shell Sort :
  <ol type="1">
  <li>Urutkan array yang ada  </li>
  <li>Pada fase pertama, jika besar array N=8 maka jarak interval elemen menggunakan rumus N/2 = 4, akan dibandingkan dan ditukar jika belum sesuai urutan. </li>
  <li>Pada pengulangan kedua rumus formula interval yang digunakan N/4 = 8/4 = 2, Elemen ke 2 dan ke 4 dibandingkan sesuai rumus interval = 2, elemen ke 0 dan 2 juga dibandingkan. </li>
  <li>Proses yang sama berlaku untuk elemen yang tersisa. </li>
  <li>Pada akhirnya samapai pada fase akhir di saat interval N/8  = 8/8 = 1, elemen dengan interval 1 diurutkan </li>
</ol>

<br>
<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/quicksort-600-1.gif" width="350"/>

  #### Qiuck Sort
  Quick Sort merupakan sebuah algoritma yang mengambil sebuah elemen sebagai pivot dan memisahkan array yang ada disekitar pivot.<br>
  
  Proses utama dalam quickSort adalah partisi() . Target dari partisi adalah untuk menempatkan pivot (elemen apa pun dapat dipilih menjadi pivot) pada posisi yang benar dalam susunan yang diurutkan dan meletakkan semua elemen yang lebih kecil di sebelah kiri pivot, dan semua elemen yang lebih besar di sebelah kanan pivot. Partisi dilakukan secara rekursif pada setiap sisi pivot setelah pivot ditempatkan pada posisi yang benar dan akhirnya mengurutkan array.<br>
  
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 11 - Linear and Binary Search](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%2011%20-%20Linear%20and%20Binary%20Search)<br>


Algoritma penacarian adalah algoritma yang menerima sebuah argumen kunci dan dengan langkah-langkah tertentu akan mencari rekaman dengan kunci tersebut. Setelah proses pencarian dilaksanakan, akan diperoleh salah satu dari dua kemungkinan, yaitu data yang dicari ditemukan atau tidak ditemukan.<br>
Ada dua macam teknik pencarian yaitu pencarisan sekuensial dan pencarian biner. Perbedaan dari dua teknik ini terletak pada keadaan data. Pencarian biner digunakan apabila data dalam keadaan acak atau tidak terurut. Pencarian biner data yang sudah dalam keadaan terurut.<br>

<br>

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/linear_search.gif" width="350"/>

#### Linear search
Algoritma pencarian dapat dijelaskan sebagi berikut:<br>
Pencarian dimulai dari data paling awal, kemudian ditelusuri dengan menaikkan indeks data, apabila data sama dengan kunci pencarian dihetikan dan diberikan nilai pengembalian true, apabila sampai indeks terakhir data tidak diteukan maka diberikan nilai pengembalian false.<br>
Algoritma pencarian berurutan dapat dituliskan sebagai berikut:<br>
1. i <- 0
2. ketemu <- false
3. Selama (tidak ketemu) dan (i <= N)kerjakan baris 4
4. Jika(data[i]=x) maka ketemu <- true, jika tidak i <- i+1
5. Jika(ketemu) maka i adalah indeks dari data yang dicari, jika tidak data tidak ditemukan.

<br>

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/Binary_search_tree_example.gif" width="350"/>

#### Binary search
Salah satu syarat agar pencarian biner dapat dilakukan adalah data udah dalam keadaan terurut. Dengan kata lain, apabila data belum dalam keadaan urut, pencarian biner tidak dapat dilakukan.<br>
Algoritma binary search:<br>
1. Data diambil dari posisi 1 sampai posisi akhir N.
2. Kemudian cari posisi data tengah dnegan rumus: (posisi awal+ posisi akhir)/2.
3. Kemudian data yang dicari dibandingkan dengan cata yang ditengah, apakah sama atau lebih kecil, atau lebih besar.
4. Jika lebih besar, maka proses pencarian dicari dengan posisi awal adalah posisi tengah + 1.
5. Jika lebih kecil, maka proses pencarian dicari dengan posisi akhir adalah posisi tengah - 1.
6. Jika data sama, berarti ketemu.
   
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 12 - Tree](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%2012%20-%20Tree)<br>

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/tree.png" width="350"/>

  #### Tree Traversal
  Traverse atau Melintasi sebuah pohon data/tree artinya mengunjungi semua simpul yang ada pada pohon tersebut. Ada beberapa hal yang dapat dilakukan contoh jika ingin menambah nilai semua data pada pohon tersebut atau mencari nilai tertinggi diantaranya. Untuk operasi-operasi tersebut, harus dilakukan mengunjungi setiap simpul dari pohon data.<br>

Terdapat 3 cara melintasi tree :
<br>1. Inorder Traversal 
<br>langkah-langkahnya : 
  <li>Kunjungi semua nodes/simpul di sebelah kiri subtree. </li>
  <li>Kemudian kunjungi root node/simpul paling atas </li>
  <li>Kunjungi semua simpul yang ada di kanan subtree </li>

 <br>2. Preorder Traversal 
 <br>langkah-langkahnya : 
  <li>Visit root node  </li>
  <li>Visit all the nodes in the left subtree </li>
  <li>Visit all the nodes in the right subtree </li>

 <br>3. Postorder Traversal 
 <br>langkah-langkahnya : 
  <li>Visit all the nodes in the left subtree  </li>
  <li>Visit all the nodes in the right subtree </li>
  <li>Visit the root node </li>
  
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## [Jobsheet 13 -  Graphs](https://github.com/radhiaauliaa/pratikum-struktur-data/tree/main/Jobsheet%2013%20-%20Graphs)<br>

<img src="https://github.com/radhiaauliaa/pratikum-struktur-data/blob/main/asset/Graphs-in-DSA.png" width="350"/>

  #### Depth First Search/Traversal
  Traversal berarti mengunjungi semua node dari suatu graph. DFS atau DFT adalah algoritma pencarian rekursif yang digunakan untuk menjelajahi semua node dalam suatu graph atau pohon.<br>

  Algoritma DFS 
  Implementasi dasar dari DFS membagi setiap node dalam graph atau pohon menjadi dua kategori:
<li>Visited (Telah Dikunjungi)</li>
<li>Not Visited (Belum Dikunjungi)</li><br>

Tujuan dari algoritma ini adalah menandai setiap node yang telah dikunjungi sambil menghindari node yang sudah dikunjungi sebelumnya.<br>

  Cara Kerja Algoritma DFS
  <li>Mulai dengan meletakkan salah satu node dari graph ke dalam sebuah stack.</li>
  <li>Ambil node teratas dari stack dan tambahkan ke dalam daftar node yang telah   dikunjungi.</li>
  <li>Buat daftar node yang berhubungan langsung dengan node tersebut. Tambahkan node yang belum dikunjungi ke dalam stack.</li>
  <li>Ulangi langkah 2 dan 3 hingga stack kosong.</li>
  
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">
