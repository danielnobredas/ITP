<<<<<<< HEAD
#include <iostream>
#include "dado.h"
#include "jogador.h"

using namespace std;

int main(int argc, char const *argv[]){
	dado d4(3);
	dado d6(6);
	dado d8(8);
	dado d12(12);
	dado d20(20);

	jogador alice("Alice");
	jogador bob("Bob");
	jogador carl("Carl");
	
	
	cout << alice.getNome() << " obteve o total de: " << alice.jogarDados(d4,d6,d8,d12,d20) << " pontos.";
	cout << bob.getNome() << " obteve o total de: " << bob.jogarDados(d4,d6,d8,d12,d20) << " pontos.";
	cout << carl.getNome() << " obteve o total de: " << carl.jogarDados(d4,d6,d8,d12,d20) << " pontos.";

	return 0;
=======
//
//  main.cpp
//  Aula-Fracao
//
//

#include <iostream>
#include <cassert>
#include "Fracao.h"

void TestarSomar()
{
    Fracao f1 = Fracao(1, 3);
    Fracao f2 = *Fracao(1,3).somar( f1 );
    assert( f2.numerador == 2 );
    assert( f2.denominador == 3 );
}

void TestarSubtrair()
{
    Fracao f1 = Fracao(1, 3);
    Fracao f2 = *Fracao(1,3).subtrair( f1 );
    assert( f2.numerador == 0 );
}

void TestarMultiplicar()
{
    Fracao f1 = Fracao(1, 3);
    Fracao f2 = *Fracao(1,3).multiplicar( f1 );
    assert( f2.numerador == 1 );
    assert( f2.denominador == 9 );
}

void TestarDividir()
{
    Fracao f1 = Fracao(1, 3);
    Fracao f2 = *Fracao(1,3).dividir( f1 );
    assert( f2.numerador == 1 );
    assert( f2.denominador == 1 );
}

int main(int argc, const char * argv[]) {
    TestarSomar();
    TestarSubtrair();
    TestarMultiplicar();
    TestarDividir();
        
    Fracao f = Fracao(1,3);
    
    Fracao *f2 = Fracao(1,3).multiplicar( f )->dividir( f )->somar( f );

    assert(f2->numerador == 2);
    assert(f2->denominador == 3);

    std::cout << "Todos testes passaram.\n";
    
    return 0;
>>>>>>> 8a366f3ce15d56d1a5e2b22f2fb212d30d078b28
}
