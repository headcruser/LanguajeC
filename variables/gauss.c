#include <stdio.h>

/*sUMATORIA DE GAUSS*/

int main(void ){

  /**
          FORMULA 

	   n*(n+1)
	x= -------
	      2
  */
  int n=100;
  int x= n*(n+1)/2;

   printf("El resultado de sumar los primeros 100 numeros es: \n");

  /***
	printf(const char* formato, ...);
	const Descripcion de salida para la cadena
  */
   printf("%d",x); 
   printf("\n");

}
