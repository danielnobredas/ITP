#ifndef _DADO_H_
#define _DADO_H_

#include <random>

class dado{
private:
	int valor;
	int faces;
	std::random_device rd;
	std::default_random_engine gen;
	std::uniform_int_distribution<> dis;
public:
	dado(int f);
	~dado();
	int jogar();
	int getFaces();
	int getValor();	
};


#endif