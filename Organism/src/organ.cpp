/** 
* @file organ.cpp
* @description   Organın oluşturulduğu yer.
* @course   1.Öğretim B grubu
* @assignment   2.Ödev
* @date   23.12.2022
* @author   Yusuf Sedat Sağaltıcı  yusuf.sagaltici@ogr.sakarya.edu.tr
*/



#include "../include/organ.hpp"

// Dokuları ikili arama ağaçlarına yerleştiren fonksiyon
void Organ::insertIntotree(Doku doku) {
	tree.insert(doku);
}

void Organ::operator= (const Organ &other) {
	tree = other.tree;
}

// AVL ağacı mantığına göre dengeli mi değil mi olduğunu belirleyen fonksiyon
bool Organ::isBalanced() {
	return tree.getBalance();
}