#include <stdio.h>
//Se incluye la libreria stdio.h
//Se inicia el algoritmo
//Se declara la variable nummatricula para el numero de la matricular de tipo int, ya que es un numero entero
//Se declaran las variables c1, c2, c3 para las notas y promedio para el promedio de lo datos, de tipo float, ya que pueden corresponder a cifras decimales
//Se imprime el titulo del ejercicio
//Se introduce la primera calificacion
//Se introduce la segunda calificacion
//Se introduce la tercera calificacion
//Se calcula el promedio de las calificaciones
//Se imprime el numero de la matricula
//Se imprime el promedio de las calificaciones
//Fin del algoritmo
int main()
{
	int nummatricula;
	float c1, c2, c3, promedio;

	printf( "\n   PROGRAMA EJERCICIO 1  \n");
	printf( "\n   Introduzca numero de matricula:" );
    scanf( "%d", &nummatricula );
    printf( "\n   Introduzca 1era calificacion:" );
    scanf( "%f", &c1 );
    printf( "\n   Introduzca 2da calificacion:" );
    scanf( "%f", &c2 );
    printf( "\n   Introduzca 3era calificacion:" );
    scanf( "%f", &c3 );

    promedio = (c1 + c2 + c3) / 3;
    
    printf( "\n   El numero de la matricula es: %d \n", nummatricula  );
    printf( "\n   El promedio de las calificaciones es:%.1f \n", promedio);

        return 0;
}



