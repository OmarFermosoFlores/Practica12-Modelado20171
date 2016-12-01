#include <stdio.h>

/* Declaración de funciones */
int misterio1(int (*fun) (int), int);  
void misterio2(void (*fun) (int), int);  
int cuadrado_num(int);
void imprime_num(int);

int main()
{

  int (*fun1) (int); // Este es un apuntador a la funcion llamada fun1
  void (*fun2) (int); //Este es un apuntador a la funcion llamada fun2

  fun1 = &cuadrado_num; //Fun1 va a ser un apuntador a la función cuadrado de un número
  fun2 = &imprime_num; //Fun2 va a ser un apuntador a la función imprime

  int var = misterio1(fun1, 3); //Se manda a llamar la función1 que es la que saca el cuadrado de un número el cual es 3 en este ejemplo
  misterio2(fun2, var); //Al no estar precedida por un int sabes que la función es void & solo imprime el número 9 pues es el resultado de llamar a fun1 con 3 
}


int misterio1(int (*fun) (int), int num) //Esto recibe un apuntador a una cierta funcion y un número arbitrario
{
    return fun(num); //Nos devuelve el resultado de la funcion fun
}

void misterio2(void (*fun) (int), int num) //ESto de igual manera recibe un apuntador a una cierta función y nuevamente un número aritrario
{
    fun(num); //ESta vez se ejecuta la función aunque en esta ocasión no nos devuelve nada por ser void
}

int cuadrado_num(int num) // Esta es una función que nos devuelve el cuadrado de un numero que toma como parametro
{
    return num * num; //Ejecuta la operación necesaria para devolvernos el cuadrado del numero que tomo antes
}

void imprime_num(int num) // ESta función nos imprime el número que recibe como parametro 
{
    printf("Tada: %d\n", num);
}