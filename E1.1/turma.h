#include "aluno.h"

class Turma
{
private:
	char 	m_id[3];
	char 	m_componente[8];
	Aluno 	m_discentes[40];
	int 	m_totalAlunos = 0;
	char 	m_horario[12];
public:
	char * getId();
	void setId(const char * id_);

	char * getComponente();
	void setComponente(const char * componente_);

	char * getHorario();
	void setHorario(const char * horario_);

	void adicionaAluno(Aluno novo_);
	void removeAluno(const char * chave_);

	void print();
};