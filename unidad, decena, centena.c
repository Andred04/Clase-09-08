#include<stdio.h>
#include<math.h>

int main(){
	
	int a, b;
	
	printf("\t\t\t***UNIDAD, DECENA, CENTENA***");
	printf("\n\nIgrese un Numero: \t");
	scanf("%d",&a);
	
	while(a/10){
		
		b = a%10;
		a = a/10;
		
		printf("\t%d ",b);
	}
	
	return 0;
}
