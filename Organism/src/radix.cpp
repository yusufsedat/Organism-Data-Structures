/** 
* @file radix.cpp
* @description   Radix Sıralama Algotirmasının uygulandığı yer.
* @course   1.Öğretim B grubu
* @assignment   2.Ödev
* @date   23.12.2022
* @author   Yusuf Sedat Sağaltıcı  yusuf.sagaltici@ogr.sakarya.edu.tr
*/


#include "../include/radix.hpp"

void radixSort(int *array, int size) {

	bool sorted = false;

	int digit = 1;

	while (!sorted) {
		Queue queues[10];

		for (int i = 0; i < size; i++) {
			int digitValue = (array[i] / digit) % 10;
			queues[digitValue].enqueue(array[i]);
		}

		int i = 0;
		for (int j = 0; j < 10; j++) {
			while (!queues[j].isEmpty()) {
				array[i++] = queues[j].dequeue();
			}
		}

		digit *= 10;
		if (digit > 1e9) { 
			sorted = true;
		}
	}
}
