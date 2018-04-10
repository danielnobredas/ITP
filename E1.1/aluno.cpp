#include <iostream>
#include <cstring>

#include "aluno.h"

char *
Aluno::getMatricula(){
	return m_matricula;
}

void 
Aluno::setMatricula(const char * matricula){
	strcpy(m_matricula, matricula);
}

char * 
Aluno::getNome(){
	return m_nome;
}
	
void 
Aluno::setNome(const char * nome_){
	strcpy(m_nome, nome_);
}

int 
Aluno::getIdade(){
	return m_idade;
}

void 
Aluno::setIdade(int idade_){
	m_idade = idade_;
}

char * 
Aluno::getSexo(){
	return m_sexo;
}

void 
Aluno::setSexo(const char * sexo_){
	strcpy(m_sexo, sexo_);
}

char * 
Aluno::getFatorRh(){
	return m_fatorRh;
}

void 
Aluno::setFatorRh(const char * fatorRh_){
	strcpy(m_fatorRh, fatorRh_);
}

void
Aluno::print(){
	std::cout << "Matricula: " << m_matricula << std::endl;
	std::cout << "Nome: " << m_nome << std::endl;
	std::cout << "Idade: " << m_idade << " Sexo: " << m_sexo << " Tipo Sanguineo: " << m_fatorRh << std::endl;
}