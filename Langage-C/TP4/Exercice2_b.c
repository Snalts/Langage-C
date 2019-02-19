#include<stdio.h>
#include<stdlib.h>
#define N 10

int taille_suite_max(int Tab[N]){
	int i =0,compteur=1,compteur_max=0;
	for (i=1; (i<N) ;i++){
		 if (Tab[i-1] <= Tab[i] )
				compteur++;
		else{
			if(compteur_max < compteur){
				compteur_max=compteur;
			}
			compteur=1;
		}
		printf("Valeur compteur %d , valeur de i %d, Valeur Max %d \n ",compteur,i,compteur_max);
	}
	if(compteur_max < compteur){
		compteur_max=compteur;
	}		
	
	return compteur_max;
}


/* Programme principal */
int main(){	
	int tab[N]={2,2,5,4,1,1,4,5,9,1};
	printf("La plus grande suite est de %d \n",taille_suite_max(tab));
	return 0;
}
