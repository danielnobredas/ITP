#include <random>

#include "dado.h"

using namespace std;

dado::dado(int f):faces(f),rd(),gen(rd()),dis(1, f){
	valor = round(dis(gen));
}

dado::~dado(){

}

int
dado::jogar(){
	valor = round(dis(gen));
	return valor;
}

int
dado::getValor(){
	return valor;	
}

int
dado::getFaces(){
	return faces;
}