#include <stdio.h>
#include <stdlib.h>
#define N 10
#define SORTI -1


//Fonction qui echange la position de 2 entier d'un tableau
void echange(int a, int b, int T[N]){
	int sav = T[a];
	T[a] = T[b];
	T[b] = sav;
} 

void initialiser(int T[N]){
	int i;
	for(i = 0; i < N;i++){
		T[i]=0;
	}
}


int main(){
	int saisi,j,i,taille=0,nbind=0;
	
	int T[N],R[N];
	initialiser(T);
	initialiser(R);
	/*Saisi valeur */

	do{
		printf("Veuillez saisir votre phrase :[Taille 10 ou -1 pour sortir ]"); 
		scanf("%d",&saisi);
		if(saisi != SORTI){
			T[taille++]=saisi;
		}	
	}while(saisi != -1 && taille < N);

	for( i = 0; i < taille;i++){

		for(j=0;j < taille; j++){
			if(T[j] < T[i])
				nbind++;
		}	
		if(R[nbind] == T[i])
			for(; R[nbind] == T[i];nbind++);
		R[nbind]=T[i];
		nbind=0;
		
		for(saisi=0 ; saisi < taille ; saisi++){
			printf("|%d|",T[saisi]);
		}
		printf("\n");
		for(saisi=0 ; saisi < taille ; saisi++){
			printf("|%d|",R[saisi]);
		}
		printf("\n");
	}
			
	return 0;
}
