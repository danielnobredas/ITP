/** 
 *  @file    nameSort.cpp
 *  @author  Nomed Nocaed (nnocae10)
 *  @date    1/18/2014  
 *  @version 1.0 
 *  
 *  @brief CSC 112, Lab 1, sorts strings using insertion sort
 *
 *  @section DESCRIPTION
 *  
 *  This is a little program that reads a list of names from
 *  a specified file or from standard input and then sorts
 *  the names in ascending order and prints them to standard
 *  output.
 *  
 *  Command line arguments are used to specify where the
 *  list of names should be read from.  If the program
 *  doesn't receive any command line arguments then it reads
 *  the names from standard input. If the program receives
 *  a single command line argument then it reads the names
 *  from the corresponding file.  If more than one command
 *  line argument is specified the program prints a usage
 *  message and terminates.
 *
 */

#include "sapo.h"

#include <iostream>

Sapo::Sapo(std::string id_):m_distancia(0), m_pulos(0), rd(), gen(rd()), dis(1, SAPO_PULO_MAX) {
	m_id =id_;
}

Sapo::~Sapo(){}

std::string 
Sapo::getId(){
	return m_id;
}

void 
Sapo::setId(std::string id_){
	m_id = id_;
}

int 
Sapo::getDistancia(){
	return m_distancia;
}

int 
Sapo::getPulos(){
	return m_pulos;
}

int 
Sapo::getDistanciaTotal(){
	return m_distancia_total;
}

void 
Sapo::pular(){
	m_pulos++;
	m_distancia += std::round(dis(gen));
}

void 
Sapo::showStatus(){
	for (int i = 0; i < m_distancia; ++i)
	{
		std::cout << ".";
	}
	std::cout << m_id << "(" << m_distancia << "m)" << std::endl;
}
