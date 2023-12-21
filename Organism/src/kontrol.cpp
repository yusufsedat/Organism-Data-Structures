/** 
* @file kontrol.cpp
* @description   Mutasyonun saglandigi yer.
* @course   1.Öğretim B grubu
* @assignment   2.Ödev
* @date   23.12.2022
* @author   Yusuf Sedat Sağaltıcı  yusuf.sagaltici@ogr.sakarya.edu.tr
*/


#include "../include/kontrol.hpp"

Kontrol::Kontrol() {}

void Kontrol::readFile(Organizma *final) {

	std::ifstream file("veriler.txt");
	
	// Dosya başarıyla açılmışsa okuma işlemine devam edin
	if (file.is_open()) {
	std::string line; // Dosyadaki her satır için bir string değişkeni oluşturun
	// Dosya sonuna kadar okumaya devam edin
	while (std::getline(file, line)) {

	int array[51], num, size = 0;	// array hucre dnalarını tutacak
				
	// Satırdaki sayıları ayırın
	std::istringstream iss(line);
				
	while (iss >> num) {
		array[size++] = num;
	}

	// Sayıları işleyin, örneğin Hücre sınıfını kullanarak Radij Sort ile sıralayın
	radixSort(array, size);

	final->add(array, size);

	size = 0;
	// İşlemeyi bitirin ve diğer satıra geçin
	}

	// Dosyayı kapatın
	file.close();
	}
	// Dosya açılamazsa hata mesajı yazdırın
	else {
		std::cout << "Dosya açılamadı!" << std::endl;
	}
}

void Kontrol::print(Organizma *final) {

	char input;

	do {

	int i = 1, j = 0; // j sistem, i ise organlar için kullanılıyor
	while (j < final->sistemler.size() - 1) {
	while (i < 101) {
		if (final->sistemler[j].organlar[i++].tree.getBalance()) {
			std::cout <<  " ";
		}
		else
			std::cout <<  "#";
	}
	std::cout << std::endl;
	j++;
	i=1;
	}
	
	BST temp = BST();
	bool mutation = true;
	j = 0;
	i = 1;
	while (j < final->sistemler.size() - 1) {
	while (i < 101) {
		if (final->sistemler[j].organlar[i].tree.root->data.getMedian() % 50 == 0) {
			if (mutation) { 
			temp.postOrderTraversal(final->sistemler[j].organlar[i].tree.root);
			final->sistemler[j].organlar[i].tree = temp;
			}
			mutation = !mutation;
		}
		i++;
	}
	j++;
	i=1;
	}
	input = std::cin.get();
	if (input == 'q')
		break;	
	} while (true);
}
