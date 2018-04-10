#include <iostream>

#include "jogosapo.h"

JogoSapo::JogoSapo(int distancia_){
	m_distancia = distancia_;
}

JogoSapo::~JogoSapo(){}

void 
JogoSapo::addSapo(Sapo * jogador_){
	if (m_total_jogadores<MAX_JOGADORES) {
		m_jogadores[m_total_jogadores++] = jogador_;
	}
}

void 
JogoSapo::run(){
	bool ganhou = false;

	int rodada = 0;

	while (!ganhou) {
		rodada++;
		std::cout << "--------------- RODADA " << rodada << " -------------------" << std::endl;
		for (int i = 0; i < m_total_jogadores; ++i)
		{
			if (!ganhou) m_jogadores[i]->pular();
			m_jogadores[i]->showStatus();
			if (!ganhou && m_jogadores[i]->getDistancia() >= Sapo::getDistanciaTotal()) {
				ganhou = true;
				m_vencedor = m_jogadores[i];
			}
		}
	}
	std::cout << "--------------------------- FIM DO JOGO -------------------------" << std::endl;

	printVencedor();
}

int 
JogoSapo::getDistancia(){
	return m_distancia;
}

Sapo *
JogoSapo::getVencedor(){
	return m_vencedor;
}

int 
JogoSapo::getRodada(){
	return m_rodada;
}

void 
JogoSapo::printVencedor(){
	std::cout << "Eu, " << m_vencedor->getId() 
			<< ", sou o vencedor com " << m_vencedor->getPulos() 
			<< " pulos e uma distancia total de " << m_vencedor->getDistancia() 
			<< "m!! Claro!!!" << std::endl;
}