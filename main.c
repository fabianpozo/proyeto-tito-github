#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{ int m; float n; int i=1;
     while(i==1)    //para que se repita el programa si esque lo desea
      {
            printf("------------------------------------------------------------------------------");
       printf("\n si sus dos numeros son pares se sumaran \n si sus dos numeros son impares se multiplicaran \n si no, se sumaran el ultimo digito de sus dos numeros");
    printf("\n ingrese m: ");
    scanf("%d",&m);     //se guarda el digito ingresado en m
    printf("\n ingrese n: ");
    scanf("%f",&n);     //se guarda el digito ingresado en n
    if(n==0&&m==0)
        {
    printf("\n resultado: %d",suma(m,n));
    printf("\n\n en su numero n se sumaran los digitos pares: %d \n\n",sumparesdigitosn(n));         /*se muestra en pantalla loque debe hacer las funciones*/
    printf("\n\n en su numero m se sumaran los digitos impares: %d \n\n",sumimpardigitosm(m));
    printf("\n\n el promedio de los digitos del numero n es: el resultado no esta definido  \n\n");
    printf("\n\n el promedio de los digitos del numero m es: el resultado no esta definido  \n\n");
        }
    else
{
        if(m==0)//el promedio de m cuando m fuera 0 seria, 0/0 en efecto, puse un printf para que diera un mensaje de indefinido
           {
    printf("\n resultado: %d",suma(m,n));
    printf("\n\n en su numero n se sumaran los digitos pares: %d \n\n",sumparesdigitosn(n));         /*se muestra en pantalla loque debe hacer las funciones*/
    printf("\n\n en su numero m se sumaran los digitos impares: %d \n\n",sumimpardigitosm(m));
    printf("\n\n el promedio de los digitos del numero n es: %.2f \n\n",promedion(n));
    printf("\n\n el promedio de los digitos del numero m es: el resultado no esta definido  \n\n");
           }
    else
    {
        if(n==0)
        {
        printf("\n resultado: %d",suma(m,n));
    printf("\n\n en su numero n se sumaran los digitos pares: %d \n\n",sumparesdigitosn(n));         /*se muestra en pantalla loque debe hacer las funciones*/
    printf("\n\n en su numero m se sumaran los digitos impares: %d \n\n",sumimpardigitosm(m));
    printf("\n\n el promedio de los digitos del numero n es: el resultado no esta definido  \n\n");
    printf("\n\n el promedio de los digitos del numero m es: %.2f \n\n",promediom(m));
       }
            else
            {
                printf("\n resultado: %d",suma(m,n));
    printf("\n\n en su numero n se sumaran los digitos pares: %d \n\n",sumparesdigitosn(n));         /*se muestra en pantalla loque debe hacer las funciones*/
    printf("\n\n en su numero m se sumaran los digitos impares: %d \n\n",sumimpardigitosm(m));
    printf("\n\n el promedio de los digitos del numero n es: %.2f \n\n",promedion(n));
    printf("\n\n el promedio de los digitos del numero m es: %.2f \n\n",promediom(m));
            }

    }
}


    printf("\n\n desea utilizar el programa otra vez\n");
    printf("1) si \t 2) no \n");
    scanf("%d",&i);



      }

      printf("\t hasta luego\n\n");
      printf("------------------------------------------------------------------------------");
    return 0;
}
