#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
//se crea el nuevo nodo
struct Nodo{
  int valor;
  Nodo *siguiente;
};
//prototipo de funcion
void insertarLista(Nodo *&, int);
void mostrarlista(Nodo *);
Nodo *Lista = NULL; // se crea un puntero y se iguala a NULL
int main(int argc, char const *argv[]) {
  cout << "INSERTANDO ELEMENTOS DE LA LISTA:" << endl;
  cout << "\n";
  insertarLista(Lista, 10);
  insertarLista(Lista, 20);
  insertarLista(Lista, 5);
  cout << "\n\n";
  cout << "MOSTRABDO ELEMENTOS DE LA LISTA" << endl;
  cout << "\n";
  mostrarlista(Lista);
  getch();
  return 0;
}//fin de main

void insertarLista(Nodo *&Lista, int n){
  Nodo *inicio = new Nodo();//crear el nuevo nodo
  inicio->valor = n;//se asigna el valor a dato
  //se crean los dos auxiliares
  Nodo *aux1 = Lista;
  Nodo *aux2;
  //while para que se inserten los elementos de forma ordenada
  while((aux1 != NULL) && (aux1 -> valor < n)){
    aux2 = aux1;
    aux1 = aux1 -> siguiente;
  }//fin de while
/*
  si el siguiente condicional se cumple, significa que no ha entrado
  a el while, por lo tanto el elemento va al principio
*/
  if(Lista == aux1){
    Lista = inicio;
  }
/*
  si entra el else, significa que ha entrado al while
  por lo tanto se ha recorrido una posicion
*/
  else{
    aux2 -> siguiente = inicio;
  }
  inicio -> siguiente = aux1;
  cout << "elemento " << n << " insertado a lista correctamente" << endl;
}//fin de la funcion insertarLista

void mostrarlista(Nodo *Lista){
  //se crea un nuevo nodo
  Nodo *actual = new Nodo ();
  //se le asigna al nodo Lista
  actual = Lista;
  while (actual != NULL) {
    //imprime el valor del primer nodo
    cout << " -> " <<actual -> valor ;
    //avanza hasta que actual sea igual a NULL
    actual = actual -> siguiente;
  }
}
