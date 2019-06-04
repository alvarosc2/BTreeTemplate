		#include"Arbol.h"
		
		template<class TIPONODO>
		Arbol<TIPONODO>::Arbol()
		{
			raizPtr = 0;
		}
		
		template<class TIPONODO>
		void Arbol<TIPONODO>::insertarNodo(const TIPONODO &valor)
		{
			insertaAyudanteNodo(&raizPtr, valor);
		}
		
		template<class TIPONODO>
		void Arbol<TIPONODO>::preOrdenRecorrido() const
		{
			preOrdenAyudante(raizPtr);	
		}
		
		template<class TIPONODO>
		void Arbol<TIPONODO>::inOrdenRecorrido() const
		{
			inOrdenAyudante(raizPtr);	
		}
		
		template<class TIPONODO>
		void Arbol<TIPONODO>::postOrdenRecorrido() const
		{
			postOrdenAyudante(raizPtr);
		}
		
		//Funciones de utileria
		template<class TIPONODO>
		void Arbol<TIPONODO>::insertaAyudanteNodo(NodoArbol<TIPONODO> **ptr, const TIPONODO &valor)
		{
			if (*ptr == 0)
				*ptr = new NodoArbol<TIPONODO>(valor);
			else if (valor < (*ptr)->datos)
				insertaAyudanteNodo(&((*ptr)->izqPtr), valor);
			else if (valor > (*ptr)->datos)
				insertaAyudanteNodo(&((*ptr)->derPtr), valor);
			else
				cout << valor << " dup" << endl;
		}
		
		template<class TIPONODO>
		void Arbol<TIPONODO>::preOrdenAyudante(NodoArbol<TIPONODO> *ptr) const
		{
			if (ptr != 0)
			{
				cout << ptr->datos << ' ';
				preOrdenAyudante(ptr->izqPtr);
				preOrdenAyudante(ptr->derPtr);
			}
		}
		
		template<class TIPONODO>
		void Arbol<TIPONODO>::inOrdenAyudante(NodoArbol<TIPONODO> *ptr) const
		{
			if (ptr != 0)
			{
				inOrdenAyudante(ptr->izqPtr);
				cout << ptr->datos << ' ';
				inOrdenAyudante(ptr->derPtr);
			}
		}
		
		template<class TIPONODO>
		void Arbol<TIPONODO>::postOrdenAyudante(NodoArbol<TIPONODO> *ptr) const
		{
			if (ptr != 0)
			{
				postOrdenAyudante(ptr->izqPtr);
				postOrdenAyudante(ptr->derPtr);
				cout << ptr->datos << ' ';
			}
		}
		
		
		//Separé la clase Arbol en dos archivos Arbol.h y Arbol.cpp eso me obliga
		//a poner estas dos lineas en este archivo ya que de lo contrario el 
		//enlazador no podrá enlazar el código dando un error
		//undefinded reference to
		template class Arbol<int>;
		template class Arbol<double>;
