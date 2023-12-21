
/** 
* @file main.cpp
* @description   Genel komutları yapan yer.
* @course   1.Öğretim B grubu
* @assignment   2.Ödev
* @date   23.12.2022
* @author   Yusuf Sedat Sağaltıcı  yusuf.sagaltici@ogr.sakarya.edu.tr
*/


#include "../include/kontrol.hpp"
#include "../include/sistem.hpp"
#include "../include/organizma.hpp"

int main(int argc, char *argv[])
{
	Kontrol cont = Kontrol();
	Organizma *ornek = new Organizma();
	cont.readFile(ornek);
	cont.print(ornek);
	return 0;
}