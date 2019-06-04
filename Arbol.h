#ifndef ARBOL_H
#define ARBOL_H

#include<iostream>

using std::cout;
using std::endl;

#include<new>
#include "nodoarbol.h"

template<class TIPONODO>
class Arbol
{
	public:
		Arbol();
		void insertarNodo(const TIPONODO &valor);
		void preOrdenRecorrido() const;
		void inOrdenRecorrido() const;
		void postOrdenRecorrido() const;
		
	private:
		NodoArbol<TIPONODO> *raizPtr;
		
		//Funciones de utileria
		void insertaAyudanteNodo(NodoArbol<TIPONODO> **ptr, const TIPONODO &valor);
		void preOrdenAyudante(NodoArbol<TIPONODO> *ptr)  const;
		void inOrdenAyudante(NodoArbol<TIPONODO> *ptr)   const;
		void postOrdenAyudante(NodoArbol<TIPONODO> *ptr) const;

};

#endif
