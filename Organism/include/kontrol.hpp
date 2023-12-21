#ifndef KONTROL_HPP
#define KONTROL_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include "radix.hpp"
#include "queue.hpp"
#include "hucre.hpp"
#include "doku.hpp"
#include "organ.hpp"
#include "sistem.hpp"
#include "organizma.hpp"
#include <iomanip>

class Kontrol
{
	public:
		Kontrol();
		void readFile(Organizma *final);

		void print(Organizma *final);
};

#endif