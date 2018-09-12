#include <iostream>
#include <conio.h>
using namespace std;
struct Nodo{
    int dato;//dato de tipo int
    struct Nodo *siguiente;//puntero a la misma estructura
}*inicio, *aux, *actual;//se crean tres apuntadores hacia la estructura
/*
*inicio: tener el puntero a la cabeza de la lista
*aux: ayudara a crear nodos
*actual:
*/
void insertarNodo(int);//prototipos de funciones
void mostrarNodo();//prototipos de funciones
int main(int argc, char** argv){
    inicio = NULL;
    //se inserta una primera vez
    insertarNodo(10);
    //se vuelve a llamar, pero como estaa NULL
    insertarNodo(20);
    insertarNodo(30);
    mostrarNodo();
    cin.get();
	return 0;
}
void insertarNodo(int valor){
    actual = inicio;
    if(actual == NULL){
        aux = new Nodo ();//se crea el nodo
        aux -> dato = valor;//asigna valor
        aux -> siguiente = NULL;//se asigna a NULL, porque no hay otro dato enfrente
        inicio = aux;
    }else{
        while(actual->siguiente != NULL){
            actual = actual -> siguiente;
        }
        aux = new Nodo ();//se crea el nodo
        aux -> dato = valor;//asigna valor
        aux -> siguiente = NULL;//se asigna a NULL, porque no hay otro dato enfrente
        actual->siguiente = aux;
    }
}
void mostrarNodo(){
    actual = inicio;
    while(actual != NULL){
        cout << " -> " << actual -> dato << " ";
        actual = actual -> siguiente;
    }
}
