/** 
* @file doku.cpp
* @description   Dokunun oluşturulduğu yer.
* @course   1.Öğretim B grubu
* @assignment   2.Ödev
* @date   23.12.2022
* @author   Yusuf Sedat Sağaltıcı  yusuf.sagaltici@ogr.sakarya.edu.tr
*/



#include "../include/doku.hpp"

Doku::Doku(const Doku& other) {
	hucreSayisi = other.hucreSayisi;
	median = Hucre(other.median.getDNA());
	for (int i = 0; i < hucreSayisi; i++) {
	hucreler[i] = Hucre(other.hucreler[i].getDNA());
	}
}


Doku::Doku(int *DNAlar, int hucreCount) {
	hucreSayisi = hucreCount;
	int i = 0;
	while (i < hucreCount)
		hucreler[i++] = Hucre(DNAlar[i]);
	median = hucreler[hucreCount/2];
}


// Ortada kalan sayıyı döndüren fonksiyon
int Doku::getMedian() {
	return median.getDNA();
}

void Doku::mutate() {
	int i = 0;
	while (i < hucreSayisi) {
		if (hucreler[i].getDNA() % 2 == 0)
			hucreler[i].setDNA(hucreler[i].getDNA() / 2);
		i++;
	}
}
