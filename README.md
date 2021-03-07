# Subset Sum Problem
Algoritma ini menggunakan pendekatan "backtracking" untuk menyelesaikan permasalahan Subset Sum Problem yang memiliki kompleksitas waktu O(2^n) dan ini sedikit lebih cepat dibandingkan cara rekursif walaupun tetap kompleksitas waktunya eksponensial.

Subset Sum Problem adalah masalah menemukan subset sedemikian rupa sehingga jumlah elemen sama dengan angka tertentu. Pendekatan backtracking menghasilkan semua permutasi dalam kasus terburuk tetapi secara umum, berkinerja lebih baik daripada pendekatan rekursif terhadap masalah jumlah subset.

Himpunan bagian A dari n bilangan bulat positif dan jumlah nilai diberikan, temukan apakah ada subset dari himpunan yang diberikan atau tidak, jumlah elemennya sama dengan nilai penjumlahan yang diberikan.

Contoh:

Diberikan kumpulan bilangan positif berikut:
```
{ 3, 8, 4, 6, 1, 2 }
```
Kita perlu menemukan jika ada subset untuk jumlah tertentu, katakanlah 12:
```
{3, 8, 1}
```
Untuk nilai lain, katakanlah 10, ada subset lain:
```
{4, 6}
```
Demikian pula, untuk 9, kami memiliki {6, 1, 2} sebagai subset.

Masalah ini dapat diselesaikan dengan menggunakan algoritma berikut:

- Metode rekursif
- Backtracking
- Dynamic Programing

<br />

## Backtracking
Dalam algoritma Backtracking, saat kita menyusuri kedalaman pohon, kita menambahkan elemen sejauh ini, dan jika jumlah yang ditambahkan memenuhi batasan eksplisit, kita akan terus menghasilkan simpul anak lebih jauh. Setiap kali batasan tidak terpenuhi, kita menghentikan pembuatan sub-pohon lebih lanjut dari node tersebut dan mundur ke node sebelumnya untuk menjelajahi node yang belum dieksplorasi. Kita perlu menjelajahi node bersama dengan luas dan kedalaman pohon. Kontrol loop menghasilkan node bersama dengan luasnya, dan menghasilkan node di sepanjang kedalaman menggunakan rekursi  (post-order traversal).

### Langkah:

1. Mulailah dengan satu set kosong
2. Tambahkan elemen berikutnya dari daftar ke set
3. Jika subset memiliki jumlah M, maka hentikan dengan subset tersebut sebagai solusi.
4. Jika subset tidak dapat diterapkan atau jika kita telah mencapai akhir dari set, maka lacak kembali subset tersebut hingga kita menemukan nilai yang paling sesuai.
5. Jika subset bisa diterapkan (jumlah subset < M), lanjutkan ke langkah 2.
6. Jika kita telah mengunjungi semua elemen tanpa menemukan subset yang sesuai dan jika tidak ada backtracking yang memungkinkan maka hentikan tanpa solusi.

<br />

## Pseudocode

```
function backTrack (int subSet[], int jumlahSementara, int jumlahDicari, int nilaiAwal)
{
  if (jumlahSementara == jumlahDicari)
    {
        backTrack (subSet, jumlahSementara - subSet[nilaiAwal - 1], jumlahDicari,nilaiAwal);
    }
  else
    {
        for (int i = nilaiAwal; i < SubSet.length; i++)
	    {
	        backTrack (subSet, jumlahSementara + subSet[i], jumlahDicari, i + 1);

	    }
    }
}
```
<br />

## Contoh
```
S = (3, 4, 5, 6) and X = 9.
```
Pohon biner implisit untuk masalah jumlah subset ditampilkan sebagai gambar:
![alt text](https://static.javatpoint.com/tutorial/daa/images/subset-sum-problems2.png)

Angka di dalam node adalah jumlah dari elemen solusi parsial pada level tertentu.

Jadi, jika jumlah elemen solusi parsial kita sama dengan bilangan bulat positif 'X' maka pada saat itu pencarian akan dihentikan, atau dilanjutkan jika semua solusi yang mungkin perlu diperoleh.

<br />

# Kompleksitas
- Kompleksitas waktu kasus terburuk: Θ(2 ^ n)
- Kompleksitas ruang: Θ(1)

<br />

# Video Penjelasan
[![](http://img.youtube.com/vi/kyLxTdsT8ws/0.jpg)](http://www.youtube.com/watch?v=kyLxTdsT8ws "Sum Of Subsets Problem - Backtracking")

<br />

# Referensi
- [iq.opengenus.org/subset-sum-problem-backtracking](https://iq.opengenus.org/subset-sum-problem-backtracking/#:~:text=Algorithms%20backtracking&text=Subset%20sum%20problem%20is%20the,approach%20towards%20subset%20sum%20problem.)
- [www.javatpoint.com/subset-sum-problems](https://www.javatpoint.com/subset-sum-problems)
- [www.tutorialspoint.com/Subset-Sum-Problem](https://www.tutorialspoint.com/Subset-Sum-Problem)

