#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_REP 2
int PedirSumarMostrar()
{
    int valor1;
    int valor2;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &valor1);
    printf("Ingrese otro numero: ");
    scanf("%d", &valor2);
    resultado = valor1 + valor2;
    printf("La suma es: %d", resultado);

    return 0;
 }
int SacarPromedio()
{
   float acumulador=0;
   int i;
   int buffer;

   for(i=0;i<CANTIDAD_REP;i++);
   {
     printf("Ingrese numero %d ",i+1);
     scanf("%d", &buffer);
     acumulador = acumulador + buffer;
   }
   printf("El promedio es: &f", (float)acumulador / CANTIDAD_REP);
   return 0;
}

 int main()
 {
     if(!PedirSumarMostrar())
     {
     printf("\nATR");
     }

     SacarPromedio();
     return 0;
 }
