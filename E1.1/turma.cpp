#include <iostream>
#include <cstring>

#include "turma.h"

char * 
Turma::getId(){
	return m_id;
}

void 
Turma::setId(const char * id_){
	strcpy(m_id, id_);
}

char * 
Turma::getComponente(){
	return m_componente;
}

void 
Turma::setComponente(const char * componente_){
	strcpy(m_componente, componente_);
}

char * 
Turma::getHorario(){
	return m_horario;
}

void 
Turma::setHorario(const char * horario_){
	strcpy(m_horario, horario_);
}

void 
Turma::adicionaAluno(Aluno novo_){
	m_discentes[m_totalAlunos++] = novo_;
}

void 
Turma::removeAluno(const char * chave_){
	int removido = 0;
	int totalAlunosInicial = m_totalAlunos;
	for (int i = 0; i < totalAlunosInicial; ++i)
	{
		if (removido){
			m_discentes[i-1] = m_discentes[i];
		}
		if (strcmp(m_discentes[i].getMatricula(),chave_)==0){
			removido = 1;
			m_totalAlunos--;
		}
	}
}

void
Turma::print(){
	std::cout << "Componente: " << m_componente << " Turma: " << m_id << std::endl;
	std::cout << "Total de Alunos: " << m_totalAlunos << " Horario: " << m_horario << std::endl;

	for (int i = 0; i < m_totalAlunos; ++i)
	{
		m_discentes[i].print();
	}

	std::cout << std::endl << std::endl << std::endl;
}