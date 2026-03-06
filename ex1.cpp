#include  <iostream>
  
  using namespace std;
  
  #define PRECO 1.99
int main(){
	
	cout << "--Calculo--\n";
	int pera = 3;
	char quantidade = 'A';
	float peso = 2.5;
	
	cout << "Existem " << pera << " pera de qualidade " << "quantidade" << " pesando " << " quilos. " << endl;
	cout << "O preco por quilo eh R$" << PRECO << ", o total eh R$" << peso * PRECO << endl;
	
	return 0;
}
