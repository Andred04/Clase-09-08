#include<stdio.h>
#include<stdlib.h>

int main(){
    
   int x, factorial, numero;
   
   	printf("\t\t\t***FACTORIAL DE UN NUMERO***");
    printf("\nIngrese numero para obtener el factorial:\t");
    scanf("%d",&numero);
    
    

    factorial = 1;
   
    for(x=1; x <= numero; x++)
      {
        
         factorial = factorial * x;
      }
   
    printf("\nEl factorial de %d es: %d \n",numero,factorial);

    return 0;
}
