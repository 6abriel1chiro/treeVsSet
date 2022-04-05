#pragma once

#include <iostream>
using namespace std;

template<class T>
class Node
{
private:
	T dato;
	Node* siguiente; //derecho
	Node* anterior; //izquierdo
public:
	Node(T dato);
	Node();
	~Node();
	T getDato();
	void setDato(T dato);
	Node<T>*& getDerecha();
	void crearSiguiente(Node<T>* dato);
	Node<T>*& getIzquierda();
	void crearAnterior(Node<T>* dato);
};

template<class T>
Node<T>::Node(T dato)
{
	this->dato = dato;
	siguiente = NULL;
	anterior = NULL;
}

template<class T>
Node<T>::Node()
{
	dato = NULL;
	siguiente = NULL;
	anterior = NULL;
}

template<class T>
Node<T>::~Node()
{

}

template<class T>
T Node<T>::getDato()
{
	return dato;
}

template<class T>
void Node<T>::setDato(T dato)
{
	this->dato = dato;
}


template<class T>
Node<T>*& Node<T>::getDerecha()
{
	return siguiente;
}


template<class T>
void Node<T>::crearSiguiente(Node<T>* nuevoSig)
{
	siguiente = nuevoSig;
}

template<class T>
Node<T>*& Node<T>::getIzquierda()
{
	return anterior;
}



template<class T>
void Node<T>::crearAnterior(Node<T>* nuevoAnt)
{
	anterior = nuevoAnt;
}






