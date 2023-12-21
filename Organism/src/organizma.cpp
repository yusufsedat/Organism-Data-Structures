/** 
* @file organizma.cpp
* @description   Organizmanın oluşturulduğu yer.
* @course   1.Öğretim B grubu
* @assignment   2.Ödev
* @date   23.12.2022
* @author   Yusuf Sedat Sağaltıcı  yusuf.sagaltici@ogr.sakarya.edu.tr
*/



#include "../include/organizma.hpp"

	sVector::sVector() { size_ = 0; }

	void sVector::push_back(Sistem value) {
		if (size_ == N) {
			throw std::overflow_error("sVector is full");
		}
		array_[size_++] = value;
	}

	void sVector::pop_back() {
		if (size_ == 0) {
			throw std::underflow_error("sVector is empty");
		}
		--size_;
	}

	Sistem& sVector::back() {
		if (size_ == 0) {
			throw std::underflow_error("sVector is empty");
		}
		return array_[size_ - 1];
	}
	const Sistem& sVector::back() const {
		if (size_ == 0) {
			throw std::underflow_error("sVector is empty");
		}
		return array_[size_ - 1];
	}

	Sistem& sVector::operator[](int index) { return array_[index]; }
	const Sistem& sVector::operator[](int index) const { return array_[index]; }

	int sVector::size() const { return size_; }
	int sVector::capacity() const { return N; }

Organizma::Organizma() {
	sistemler.push_back(Sistem());
}

void Organizma::addSistem(Sistem sistem) {
	sistemler[numSistem++] = sistem;
}

void Organizma::add(int* hucreler, int hucreSayisi) {
	//std::cout << Doku(hucreler, hucreSayisi).getMedian() << " ";
	//std::cout << numDoku << " ";
	sistemler.back().organlar.back().insertIntotree(Doku(hucreler, hucreSayisi));
	numDoku++; numHucre += hucreSayisi;
	if (numDoku == 20){
		sistemler.back().organlar.push_back(Organ());
		numOrgan++;
		numDoku = 0;
	}
	
	if (numOrgan == 100) {
		sistemler.push_back(Sistem());
		numSistem++;
		numOrgan = 0;

		
	} 
	
}