#include <stdio.h>
/*funcion de suma resta mult y division con paso de paramateros por valor*/

int suma(int n, int m); /*n y m*/
int resta(int j, int k); /*j y k*/
int mult(int g, int h); /*g y h*/
void div( int a, int e); /*a y e*/

int main(){
	int m, n, j, k, g, h, a, e, res, opc;
	do{
	printf("\nMENU\n");
	printf("1. Sumar\n");
	printf("2. Restar\n");
	printf("3. Multiplicar\n");
	printf("4. Dividir\n");
	printf("5. Salir\n");
	printf("Eliga la opcion a realizar ");
	scanf("\n%d", &opc);
	
	switch(opc){
		case 1:
			printf("\n\nIngrese dos numeros para sumar: ");
	        scanf("%d %d", &n, &m);
	        printf("la suma es: %d\n", suma(n,m));
	        break;
		
		case 2:
			printf("\n\nIngrese dos numeros para restar: ");
	        scanf("%d %d", &j, &k);
	        printf("la resta es: %d\n", resta(j,k));	
	        break;
	        
	    case 3:
	    	printf("\n\nIngrese dos numeros para multiplicar : ");
	        scanf("%d %d", &g, &h);
	        printf("la multiplicacion es: %d\n", mult(g,h));
	        break;
	        
	    case 4:
	    	printf("\n\nIngrese dos numeros para dividir : ");
	        scanf("%d %d", &a, &e);
	        div( a, e);
	        break;
	        
	    case 5:
	    	printf("\nSaliendo del programa...\n");
	    	break;
	    	
	    default:
	    	printf("Ingrese una opcion valida.\n");
			break;
	}
		
	}while (opc != 5);
	printf(" ");
return 0;
}

int suma(int n, int m){
	return n+m;
}

int resta(int j, int k){
	return j-k;
}

int mult(int g, int h){
	return g*h;
}

void div( int a, int e){
int res;	
	if(e != 0){
		
		printf("La division es: %d\n", res=a/e);
	}
	else {
		printf("ERROR: No se puede dividir entre cero\n");
		}

}
