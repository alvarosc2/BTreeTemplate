#include <iostream>

using std::cout;
using std::cin;
using std::fixed;
using std::endl;

#include <iomanip>
using std::setprecision;

#include "nodoArbol.h"
#include "Arbol.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Arbol<int>intArbol; //Crear arbol de valores int
	int intValor;
	
	cout << "Escribe 10 valores integer:\n";
	
	for (int i = 0; i < 10; i++)
	{
		cin >> intValor;
		intArbol.insertarNodo(intValor);
	}
	
	cout << "\nRecorrido preorden\n";
	intArbol.preOrdenRecorrido();
	
	cout << "\nRecorrido inorden\n";
	intArbol.inOrdenRecorrido();
	
	cout << "\nRecorrido postorden\n";
	intArbol.postOrdenRecorrido();		
	
	cout << fixed << setprecision(1)
		 << "\n\n\nEscriba 10 valores double:\n";

	
	Arbol<double>doubleArbol;
	double doubleValor;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> doubleValor;
		doubleArbol.insertarNodo(doubleValor);
	}
	
	cout << "\nRecorrido preorden\n";
	doubleArbol.preOrdenRecorrido();
	
	cout << "\nRecorrido inorden\n";
	doubleArbol.inOrdenRecorrido();
	
	cout << "\nRecorrido postorden\n";
	doubleArbol.postOrdenRecorrido();
	
	cout << endl;
					 	
	return 0;
}
