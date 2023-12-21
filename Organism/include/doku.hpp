#ifndef DOKU_HPP
#define DOKU_HPP

#include "hucre.hpp"
#include <iostream>

class Doku {
	public:
	Hucre hucreler[31];
	Hucre median;
	int hucreSayisi;

	Doku() {}
	Doku(int *DNAlar, int hucreCount);
	Doku(const Doku& other);

	// median hucrenin DNAsını döndüren fonksiyon
	int getMedian();
	void mutate();
};

#endif