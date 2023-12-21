#ifndef SISTEM_HPP
#define SISTEM_HPP

#include "organ.hpp"
#include <iostream>
#include <iomanip>

class Vector {	// veri tutmak ve işlemeyi kolaylaştırmak ve okunurluğu artırmak adına custom Vector class'ı
public:
	Vector();

	void push_back(Organ value);
	void pop_back();

	Organ& back();	
	const Organ& back() const;

	Organ& operator[](int index);
	const Organ& operator[](int index) const;

	int size() const;
	int capacity() const;

private:
	static const int N = 110;
	Organ array_[110];
	int size_;
};

class Sistem
{
	private:
		int numOrgan = 100;	// 100 max
		
	public:
		Vector organlar;
		Sistem(Vector organlar, int numOrgans);
		Sistem();
		void operator= (const Sistem &other);
};

#endif