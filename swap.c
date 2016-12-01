#include <stdio.h>

void swap(int * a, int * b){ //Esta es una funcion que recibe como parametros 2 apuntadores
	int valor = (*a); //Almacena el valor del primero de los apuntadores en una variable que llamamos valor
	(*a) = (*b); // ESta línea es la encargada de igualar el valor de b en a
	(*b) = valor; //En esta linea reasignamos el valor a b a valor que en un principio almaceno el primer valor de a
}

int main(){ //Funcíon principal del programa
	return 0;
}//Termino de la ejecución

/*
Crea un archivo swap.c
Añádelo a tu repositorio
Crea una función llamada swap que reciba 2 apuntadores a int y no regrese nada:
Esta función deberá de cambiar los valores de los 2 números, por lo que si le paso los números a=3 y b=2, hará que cambien de valor: a=2 y b=3
Asegúrate de incluir código de muestra, donde se vea que tu programa funciona. Es decir que en tu main se impriman los valores de a y b antes y después de llamar a la función swap.
Comenta cada línea, a excepción de las que sólo sean { o }.
Haz un push del archivo al repositorio que creaste.
Incluye el archivo swap.c en la carpeta de tu tarea.

*/