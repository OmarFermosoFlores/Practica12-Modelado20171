#include <stdio.h>

int bubble_sort(int * array,int size){ //Función de ordenamiento bubble sort que toma como parametros un apuntador a un arreglo y el tamaño de este
	for (int i = 0; (i < size); ++i){ //Con este for recorremos todos los elemntos del arreglo
		for (int j = i+1; j < size; ++j){ //Con este segundo for recorremos los elementos posteriores al anterior indice
			if(array[j]<array[i]){ //Con este IF verficamos si el valor actual en la posicion j es menor al del valor en la posición i, si esto se cumple los intercambia de posicion
				int aux = array[i]; 
				array[i] = array[j];
				array[j] = aux;
			}
		}
	}
	return 0; 
}

int main(){ //Funcion donde es llevada la ejecución del programa
	int array[5] = {11,2,13,23,1}; //Creamos un arreglo con un tamaño indiferente y damos los valores a este
	bubble_sort(array,5); //Mandamos llamar a la funcion de ordenamiento bubble_sort
	for (int i = 0; i < 11; ++i){ //Esta línea sirve para imprimir el resultado en consola
		printf("%d\n",array[i] );
	}
	return 0;
}//Termina la ejecución
