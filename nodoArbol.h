#ifndef NODOARBOL_H
#define NODOARBOL_H

//declaración anticipada de la clase Arbol
template<class TIPONODO> class Arbol;

template<class TIPONODO>
class NodoArbol{
	friend class Arbol<TIPONODO>;
	
	public:
		NodoArbol(const TIPONODO &d) : izqPtr(0), datos(d), derPtr(0)
			{
				//cuerpo vacio
			}

		TIPONODO obtenerDatos() const
		{
			return datos;
		}
		
	private:
		NodoArbol<TIPONODO> *izqPtr; //apuntador al subarbol izquierdo
		TIPONODO datos;
		NodoArbol<TIPONODO> *derPtr; //apuntador al subarbol derecho
};

#endif
