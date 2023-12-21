#ifndef ORGANIZMA_HPP
#define ORGANIZMA_HPP

#include "hucre.hpp"
#include "doku.hpp"
#include "organ.hpp"
#include "sistem.hpp"
#include <iostream>

class sVector {	// veri tutmak ve işlemeyi kolaylaştırmak ve okunurluğu artırmak adına custom Vector class'ı
public:
	sVector();

	void push_back(Sistem value);

	void pop_back();

	Sistem& back();
	const Sistem& back() const;

	Sistem& operator[](int index);
	const Sistem& operator[](int index) const;

	int size() const;
	int capacity() const;

private:
	static const int N = 100;
	Sistem array_[100];
	int size_;
};

class Organizma
{
	private:
		int numOrgan = 0;
		int numSistem = 0;
		int numDoku = 0;
		int numHucre = 0;
		
	public:
  		sVector sistemler;
		Organizma();
		void addSistem(Sistem sistem);
		void add(int* hucreler, int hucreSayisi);
};

#endif