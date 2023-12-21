/** 
* @file sistem.cpp
* @description   Sistemin oluşturulduğu yer.
* @course   1.Öğretim B grubu
* @assignment   2.Ödev
* @date   23.12.2022
* @author   Yusuf Sedat Sağaltıcı  yusuf.sagaltici@ogr.sakarya.edu.tr
*/



#include "../include/sistem.hpp"

	Vector::Vector() { size_ = 0; }

	void Vector::push_back(Organ value) {
		if (size_ == N) {
			throw std::overflow_error("Vector is full");
		}
		array_[size_++] = value;
	}

	void Vector::pop_back() {
		if (size_ == 0) {
			throw std::underflow_error("Vector is empty");
		}
		--size_;
	}

	Organ& Vector::back() {
		if (size_ == 0) {
			throw std::underflow_error("Vector is empty");
		}
		return array_[size_ - 1];
	}

	const Organ& Vector::back() const {
		if (size_ == 0) {
			throw std::underflow_error("Vector is empty");
		}
		return array_[size_ - 1];
	}

	Organ& Vector::operator[](int index) { return array_[index]; }
	const Organ& Vector::operator[](int index) const { return array_[index]; }

	int Vector::size() const { return size_; }
	int Vector::capacity() const { return N; }

	

Sistem::Sistem() { organlar.push_back(Organ()); }

void Sistem::operator= (const Sistem &other) {
	int i = 0;
	while (i < other.organlar.size()){
		organlar.push_back(other.organlar[i]);
		i++;
	}
}
