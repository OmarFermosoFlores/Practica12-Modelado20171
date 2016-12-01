#include <stdio.h>

int tamanios(){ 
	printf("El tipo short tiene tamaño:  %ld\n",sizeof(short ));//Imprime el tamaño en bytes del tipo de dato short
	printf("El tipo int tiene tamaño:%ld\n",sizeof(int));//Imprime el tamaño en bytes del tipo de dato int
	printf("El tipo unsigned tiene tamaño:  %ld\n",sizeof(unsigned int));//Imprime el tamaño en bytes del tipo de dato unsigned
	printf("El tipo apuntador tiene tamaño:  %ld\n",sizeof(int *));//Imprime el tamaño en bytes del tipo de dato apuntador
	printf("El tipo char tiene tamaño:  %ld\n",sizeof(char));//Imprime el tamaño en bytes del tipo de dato char
	printf("El tipo float tiene tamaño:  %ld\n",sizeof(float));//Imprime el tamaño en bytes del tipo de dato float
	printf("El tipo  double tiene tamaño: %ld\n",sizeof(double));//Imprime el tamaño en bytes del tipo de dato double
	/* 
		Imprime los valores de:
			- short
			- int
			- unsigned int
			- apuntador a int
			- char
			- float
			- dobule
		respectivamnete
	*/
	return 0;
}

int main(){ //Función principal del programa
	tamanios(); //Se manda a llamar a l función tamanios 
	return 0;
}//Termino de la ejecución