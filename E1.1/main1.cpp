#include <iostream>

#include "aluno.h"

int main(int argc, char const *argv[])
{
	Aluno teste;
	teste.setMatricula("123456");
	teste.setNome("Ronilson Avlis da Silva");
	teste.setIdade(18);
	teste.setSexo("M");
	teste.setFatorRh("AB+");
	
	teste.print();
	return 0;
}