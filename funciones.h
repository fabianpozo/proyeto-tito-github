#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int suma (int m,int n)
{ int ultimodigitosuma; int multi; int sum; int aux; int aux2; //funcion para sumar los numeros pares y multiplicar los impares

    if(n%2==0&&m%2==0)
    {
        sum=m+n;
        return sum;
    }
    if(n%2!=0&&m%2!=0)
    {
        multi=n*m;
        return multi;
    }
    else                                                        // si uno es par y el otro impar se sumara el ultimo digito de los dos numeros
    {
      aux=n%10;
     aux2= m%10;
      ultimodigitosuma=aux2+aux;
      return ultimodigitosuma;
    }



}

int sumparesdigitosn (int n)   //en esta funcion se sumara los digitos pares del numero n
    { int ultidigit=0; int sumpares=0;
        while(n!=0)
        {
             ultidigit=n%10;
            if (ultidigit%2==0)
            {
                sumpares=sumpares+ultidigit;
            }
            n=n/10;
        }
        return sumpares;
    }

int sumimpardigitosm (int m)  //en esta funcion se sumara los digitos impares del numero m
    { int ultidigit2=0; int sumimpar=0;

        while(m!=0)
        {
            ultidigit2=m%10;
            if(ultidigit2%2!=0)
            {
                sumimpar=sumimpar+ultidigit2;
            }
            m=m/10;
        }
        return sumimpar;

    }

float promedion (int n)                                 //funcion para sacar el promedio a n
    { int promedio=0; int ulti=0; int digitos=0; int i=0; int d=0; float aux=0;

        while(n!=0)
        {
              ulti=n%10;

            promedio=promedio+ulti;

            n=n/10;
            d++;    //contador de digitos

        }
        aux= (float)promedio/(float)d;
        return aux;
    }
float promediom (int m)                                 //funcion para sacar el promedio a m
   { int promedio2=0; int ulti2=0; int digitos2=0; int i2=0; int d2=0; float aux2=0;

         while (m!=0)
         {


            ulti2=m%10;

            promedio2=promedio2+ulti2;
                m=m/10;
                d2++;  //contador de digitos
         }
        aux2=(float)promedio2/(float)d2;
        return aux2;

   }



#endif // FUNCIONES_H_INCLUDED
