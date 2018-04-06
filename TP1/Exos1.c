#include <stdio.h>
#include <stdlib.h>

int main(){
/*On definie les variables de x et n comme dans les conditions du TP*/
float x,x_n=1;
int n,i;

printf("Saisir la valeur de x:\n");
scanf("%f",&x);
printf("Saisir la valeur de n:\n");
scanf("%d",&n);



/*On ecrit toute les methode possibles via les conditions du tp*/


//Premiere condition, Si x est inferieur a 0 alors on peut pas  le definir.
if (x <0){
	printf("x_n n'est pas definie vue que x < 0 \n");
		return 0;
}
	
else{
	//Deuxieme conditions, Si x est egale a 0 , alors le resultats depend de n
	if(x == 0){
		if(n < 0){
			printf("x_n n'est pas definie vue que n <0 et que x=0 \n");
			return 0;
		}
		else{
			printf("x_n est definie\n");			
			if(n == 0)
				x_n=1;
			else{
				x_n=0;
			}
		}
	}
	/*Troisieme condition, si x est superieur a 0, alors le resultats depend de 			n*/
	else{
		if(n == 0)
			x_n=1;
		else{
			if( n > 0){
				for(i=0; i < n; i++){
					x_n*=x;	
				}
			}
			else{
				for(i=0,x_n=x; i >= n; i--){
					x_n= x_n/x;	
				}
			}
		}
	}
	
}
//Affichage
printf("La valeur de x_n:%.2f \n",x_n);
return 1;
}


