#include <iostream>

#include "corridasapos.h"

CorridaSapos::CorridaSapos(){}

CorridaSapos::~CorridaSapos(){}

void 
CorridaSapos::adicionaJogador(const Sapo novo_){
	m_jogadores.push_back(novo_);

}

Sapo 
CorridaSapos::removeJogador(const std::string id_){
	//m_jogadores.
	return;
}

void 
CorridaSapos::run(){
	bool ganhou = false;
	Sapo * vencedor;

	int rodada = 0;

	while (!ganhou) {
		rodada++;
		std::cout << "--------------- RODADA " << rodada << " -------------------" << std::endl;

		m_jogadores.at(0).pular();
		m_jogadores.at(0).showStatus();
		if (!ganhou && m_jogadores.at(0).getDistancia() >= Sapo::getDistanciaTotal()) {
			ganhou = true;
			vencedor = &m_jogadores.at(0);
		}
		m_jogadores.at(1).pular();
		m_jogadores.at(1).showStatus();
		if (!ganhou && m_jogadores.at(1).getDistancia() >= Sapo::getDistanciaTotal()) {
			ganhou = true;
			vencedor = &m_jogadores.at(1);
		}
		m_jogadores.at(2).pular();
		m_jogadores.at(2).showStatus();
		if (!ganhou && m_jogadores.at(2).getDistancia() >= Sapo::getDistanciaTotal()) {
			ganhou = true;
			vencedor = &m_jogadores.at(2);
		}
	}
	std::cout << "--------------------------- FIM DO JOGO -------------------------" << std::endl;

	std::cout << "Eu, " << vencedor->getId() 
			<< ", sou o vencedor com " << vencedor->getPulos() 
			<< " pulos e uma distancia total de " << vencedor->getDistancia() 
			<< "m!! Claro!!!" << std::endl;
}