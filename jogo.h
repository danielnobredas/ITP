#ifndef JOGO_H
#define JOGO_H

#include "jogador.h"
#include "dados.h"
#define MAX_JOGADORES 3
#define MAX_DADOS 5


class jogo
{
	private:
		jogador *m_jogadores[MAX_JOGADORES];
		int total_jogadores;
		dado *m_dados[MAX_DADOS];
	public:
		jogo();
		~jogo();
	
};

#endif