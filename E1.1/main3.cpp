#include <iostream>
#include <cstdlib>

#include "dado.h"

int main(int argc, char const *argv[])
{
	if (argc < 2) { 
        std::cerr << "Uso: " << argv[0] << " <QTDE_DADOS>" << std::endl;
        return 1;
    }

	dado meu_dado;
	for (int i=0;i<atoi(argv[1]);++i) {
		std::cout << meu_dado.jogar() << std::endl;
	}
	return 0;
}
