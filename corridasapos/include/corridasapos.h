#include <vector>

#include "sapo.h"

class CorridaSapos
{
private:
	std::vector<Sapo> m_jogadores;
public:
	CorridaSapos();
	~CorridaSapos();

	void adicionaJogador(const Sapo novo_);

	Sapo removeJogador(const std::string id_);

	void run();
	
};