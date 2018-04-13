#include "jogador.h"
#include <string>


jogador::jogador(std::string n){
	nome = n;
	pontos = 0;
}
jogador::~jogador(){}

void
jogador::jogarDados(dado &d1,dado &d2,dado &d3,dado &d4,dado &d5){
	pontos += d1.jogar() + d2.jogar() + d3.jogar() + d4.jogar() + d5.jogar(); 
	return pontos;
}

std::string 
jogador::getNome(){
	return nome;
}

int
jogador::getPontos(){
	return pontos;
}
