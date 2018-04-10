#include "jogosapo.h"

int Sapo::m_distancia_total = 50;

int main(int argc, char const *argv[])
{
	// Instancia um jogo
	JogoSapo jogo(Sapo::getDistanciaTotal());
	// Adiciona os jogadores
	jogo.addSapo(new Sapo("Ailton"));
	jogo.addSapo(new Sapo("Carol"));
	jogo.addSapo(new Sapo("Jackson"));
	jogo.addSapo(new Sapo("Joicy"));
	jogo.addSapo(new Sapo("Silvio"));
	jogo.addSapo(new Sapo("Denis"));
	jogo.addSapo(new Sapo("Jesse"));
	// Executa o jogo
	jogo.run();

	return 0;
}