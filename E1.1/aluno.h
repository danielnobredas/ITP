class Aluno
{
private:
	char 	m_matricula[10];
	char 	m_nome[80];
	int 	m_idade;
	char 	m_sexo[2];
	char 	m_fatorRh[4];
public:
	char * getMatricula();
	void setMatricula(const char * matricula_);

	char * getNome();
	void setNome(const char * nome_);

	int getIdade();
	void setIdade(int idade_);

	char * getSexo();
	void setSexo(const char * sexo_);

	char * getFatorRh();
	void setFatorRh(const char * fatorRh_);

	void print();
};