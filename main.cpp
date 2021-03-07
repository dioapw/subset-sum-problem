#include <iostream>
using namespace std;

void
printSubset (int subSet[], int panjang)
{

  for (int i = 0; i < panjang - 1; i++)
    {

      cout << subSet[i] << ", ";

    }

  cout << subSet[panjang - 1] << "\n";

}

void backTrack (int kotak[], int panjangKotak, int subSet[], int panjangSubSet, int jumlahSementara, int jumlahDicari, int nilaiAwal)
{
  if (jumlahSementara == jumlahDicari)
    {
        printSubset (kotak, panjangKotak);
        backTrack (kotak, panjangKotak - 1, subSet, panjangSubSet,jumlahSementara - subSet[nilaiAwal - 1], jumlahDicari,nilaiAwal);
    }
  else
    {
        for (int i = nilaiAwal; i < panjangSubSet; i++)
	    {
	        kotak[panjangKotak] = subSet[i];
	        backTrack (kotak, panjangKotak + 1, subSet, panjangSubSet, jumlahSementara + subSet[i], jumlahDicari, i + 1);

	    }
    }
}

int main ()
{
  int set[] = { 3, 8, 4, 6, 1, 2 };
  int panjangSet = sizeof (set) / sizeof (set[0]);
  int *kotak = new int[panjangSet];
  backTrack (kotak, 0, set, panjangSet, 0, 12, 0);
  delete[]kotak;
}
