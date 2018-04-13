#ifndef JOGADOR_H
#define JOGADOR_H

#include "dado.h"
#include <string>


class jogador{
	private:
		std::string nome;
		int pontos;
	public:
		jogador(std::string n);
		~jogador();

		void jogarDados(dado &d1,dado &d2,dado &d3,dado &d4,dado &d5);	
		std::string getNome();
		int getPontos();
};



#endif