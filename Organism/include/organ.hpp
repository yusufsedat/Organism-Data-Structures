#ifndef ORGAN_HPP
#define ORGAN_HPP

#include "BST.hpp"
#include "hucre.hpp"
#include "doku.hpp"

class Organ 
{
	public:
	Doku data;
	int numDoku = 20;	// 20 max
	// İkili arama ağacını tutan veri yapısı
	BST tree;

	Organ() {}

	void operator= (const Organ &other);

	// Dokuları ikili arama ağaçlarına yerleştiren fonksiyon
	void insertIntotree(Doku doku);

	// AVL ağacı mantığına göre dengeli mi değil mi olduğunu belirleyen fonksiyon
	bool isBalanced();
};

#endif