#include <stdio.h>
#include <stdlib.h>
#define N 50

//Fonction qui echange la position de 2 caractere d'un tableau
void echange(int a, int b, char T[N]){
	char sav = T[a];
	T[a] = T[b];
	T[b] = sav;
} 


int main(){
	int j,k,i,mini=0,taille;
	char T[N];

	/*Saisi valeur */

	printf("Veuillez saisir votre phrase :"); 
	scanf("%s",T);
	
	/*Calcul la taille de la chaine */
	for(taille=0; T[taille]!= '\0' ;taille++);
	
	i= taille - 1;

	for(--taille  ;taille > 0; taille--){
		
		for(j=0 ; j <= taille ; j++){
			if(T[mini] > T[j]){
				mini=j;	
			}
		 
		}
		echange(mini,taille,T);
		
		mini=0;

				
		for(j=i; j >= 0 ; j--){ 
			printf("%c",T[j]);
		}
		printf("\n");
	}
	
	
}
