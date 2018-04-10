#include <iostream>
#include <cmath>

using namespace std;

int fatorial(const int n)
{
	/* Calcula recursivamente o fatorial de n */
    if (n)
        return n*fatorial(n-1);
    else 
        return 1;
}
 
int primalidade(const int n, int i) {
/* Testa recursivamente os divisores ímpares de i até 
   a raiz quadrada do N */         	
    
    if(n<2 || !(n%i))
		return 0;                	
	
	if(n==2 || i>sqrt(n))
		return 1;                	
	
	i+=2; // Proximo impar
	return primalidade(n,i);
}
 
int primo(const int n) {
/* Testa se é divisível por 2 executa a função 
 primalidade() para testar os divisores ímpares 
 de 3 até a raiz quadrada do N */
    if (n%2==0)
	    return 0;
    
    return primalidade(n,3);
}
 
int maior_primo_anterior (int valor) {
	/* Busca recursiva pelo maior valor primo anterior a valor */
    if (primo(valor))
	    return valor;
    
    return maior_primo_anterior(--valor);
}
 
int main(int argc, char const *argv[])
{
    int x = 5;
    // Imprime: X =5 (5! = 120) => 113
    std::cout << "X = " << x << "(" << x << "! = " 
        << fatorial(x) << ") => " << maior_primo_anterior(fatorial(x)) << std::endl;

    x = 3;
    // Imprime: X =3 (3! = 6) => 5
    std::cout << "X = " << x << "(" << x << "! = " 
        << fatorial(x) << ") => " << maior_primo_anterior(fatorial(x)) << std::endl;

    x = 9;
    // Imprime: X =9 (9! = 362880) => 362867
    std::cout << "X = " << x << "(" << x << "! = " 
        << fatorial(x) << ") => " << maior_primo_anterior(fatorial(x)) << std::endl;
	
    
    return 0;
}