#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
// devuelve el valor almasenado en la direccion del apuntador
    return *ptr;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
//devuelve el valor de la suma de los valores almasenados en los apuntadores
    return *a + *b;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
// el if comprueba si las dos variables apuntan ala misma direccion de la memoria
    if(a==b)
    return true;
    return false;
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
// el if comprueva se los dos valores almasenados en las direcciones de los apuntadores son iguales
    if(*a==*b)
    return true;
    return false;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
// devuelve la primera letra de la palabra
    return (*a)[0];
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de pahttp://www.traductor.com/lindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
// tome la idea de un video de youtube https://www.youtube.com/watch?v=97Q5NxUGTq4
// un string almasena la palabra dada y el otro esta en blaco
    string palabra = *a;
    string alreves;

// el siclo recorre toda la palabra como un arreglo de atras para delante(de derecha a izquierda)
    for(int i=palabra.length(); i=1; i--)
    // esta variable va almacenado la palabra alreves
        alreves = alreves+palabra[i];
// el if compara si la palabra se puede leer de igual manera de derecha a izquierda y de izquierda a derecha
    if(palabra==alreves)
    return true;
    else
    return false;
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
// se crea una variable para colocar el valor de la base
    int total = *base;
//el siclo recorre las veses que dice el exponete
    for(int i=1; i<*exponente; i++)
//la base se va a multiplicar por si misma las veses que lo diga el exponente
    total = total *(*base);
    return total;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
