#include <iostream>

#include "turma.h"

int main(int argc, char const *argv[])
{
	Aluno aluno1;
	aluno1.setMatricula("123456");
	aluno1.setNome("Ronilson Avlis da Silva");
	aluno1.setIdade(18);
	aluno1.setSexo("M");
	aluno1.setFatorRh("AB+");

	Aluno aluno2;
	aluno2.setMatricula("5678843");
	aluno2.setNome("Maryelleen Lys Leis");
	aluno2.setIdade(23);
	aluno2.setSexo("F");
	aluno2.setFatorRh("O-");

	Turma lp1;
	lp1.setComponente("IMD0030");
	lp1.setId("01");
	lp1.setHorario("35N12");

	lp1.adicionaAluno(aluno1);
	lp1.adicionaAluno(aluno2);

	lp1.print();

	lp1.removeAluno("123456");

	lp1.print();

	return 0;
}