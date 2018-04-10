#include <iostream>
 
int somaDivisores (int n){
	int soma = 1;
	for(int i=2;i<= int(n/2);++i){
    		if((n%i)==0){
        			soma+=i;
    		}
	}
	return soma;
}

int main() {
	for (int i = 1; i < 3000; ++i)
    		for (int j = i+1; j <= 3000; ++j)
	{
    		if ((somaDivisores(j)==i) && (somaDivisores(i)==j))
        			std::cout << "(" << i << "," << j << ")" << std::endl;
	}
	return 0;
}
