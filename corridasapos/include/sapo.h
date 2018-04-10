/**
 * @file	sapo.h
 * @brief	Implementação da classe Sapo em C++
 * @author	Silvio Costa Sampaio
 * @since	01/04/2018
 * @date	01/04/2018
 * @sa		SIGAA
 */

#ifndef SAPO_H
#define SAPO_H

#include <string>
#include <random>

#define SAPO_PULO_MAX 3	/**< Constante que define o valor máximo de cada salto. Com isso, os saltos poderão variar entre 0..SAPO_PULO_MAX. */

class Sapo
{
private:
	std::string 	m_id;			/**< Identificação única do Sapo. */
	int 			m_distancia;	/**< Define a distância percorrida pelo Sapo. */
	int 			m_pulos;		/**< Define a quantidade de pulos dados pelo Sapo. */

	static int 		m_distancia_total;	/**< Define a distância final para a corrida. */

	std::random_device 				rd;		/**< Dispositivo usado para a geração de números randômicos. */ 
	std::default_random_engine 		gen; 	/**< Máquina de geração de números randômicos. */
	std::uniform_int_distribution<> dis;	/**< Define a distribuição a ser usado no sorteio dos valores randômicos, neste caso, uma distribuição uniforme, pois representa melhor cada salto. */
public:
	Sapo(std::string id);
	~Sapo();

	std::string getId();
	void setId(std::string id_);

	int getDistancia();

	int getPulos();

	static int getDistanciaTotal();

	void pular();

	void showStatus();
};

#endif
