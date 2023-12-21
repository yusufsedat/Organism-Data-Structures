#ifndef HUCRE_HPP
#define HUCRE_HPP

class Hucre
{
	private:
		int DNA;
	
	public:
		Hucre(int DNA) : DNA(DNA) {}
		Hucre() {}
		int getDNA() const;
		void setDNA(int dna);
};

#endif