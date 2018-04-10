#include <stdio.h> 
//Se incluye la libreria stdio.h
//Se inicia el algoritmo
//Se declara la variable dias para los dias a ser transformados a segundos de tipo int, porque solo se consideraran valores enteros para los dias
//Se declara la varible segundos para los segundos correspondientes a los dias ingresados de tipo int, porque solo se consideraran valores enteros para los segundos
//Se imprime el titulo del ejercicio
//Se ingresa el numero de dias a ser calculados
//Se calculan los segundos correspondientes a los dias ingresados sabiendo que un dia tiene 86400 segundos
//Se imprimen la cantidad de segundos correspondientes a los dias ingresados
//Fin del algoritmo

int main()
{
	int dias, segundos;

	printf("\n  PROGRAMA EJERCICIO 7 \n");
    printf("\n  Calculadora Días a Segundos \n");
	printf("\n  Ingrese el numero de dias: ");
	scanf("%d", &dias);

	segundos = dias * 86400;

	printf("\n  Hay: %d segundos en ", segundos);
	printf("%d dias\n",dias);
		return 0;
}
