#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"fonctions.h"

int main(){

	int val_j1=0,val_j2=0,somme=0,debut=rand()%2+1,joueur=0;
	
	printf("	La course a 20\n	");
	
	
	//Joueur 1 qui commence
	if(debut==1){
		while(somme<20){
				printf("Joueur_1 : A vous de jouer :\n");
				joueur=1;
				val_j1=saisi_joueur();
				somme+=val_j1;
				printf("Je joue la valeur %d, le total est de %d\n",val_j1,somme);
				val_j2=strategie_ia(somme);	
				if(val_j2 > 0){
					joueur=2;
					printf("Barbares : A vous de jouer :\n");
					somme+=val_j2;
					printf("Les barbares joue la valeur %d, le total est de %d\n",val_j2,somme);
				}
		}
	}
	//Joueur 2 qui commence
	else{
		while(somme<20){
				printf("Barbares : A vous de jouer :\n");
				joueur=2;
				val_j2=strategie_ia(somme);	
				somme+=val_j2;
				printf("Les barbares joue la valeur %d, le total est de %d\n",val_j2,somme);
				if(somme < 20){
					printf("Joueur_1 : A vous de jouer :\n");
					joueur=1;
					val_j1=saisi_joueur();
					somme+=val_j1;
					printf("Je joue la valeur %d, le total est de %d\n",val_j1,somme);
				}
		}
	}
	
	//Quel joueur a gagne	
	if(somme >20)
		printf("Erreur:Personne a gagne, la valeur est > 20 : %d\n",somme);
	else if(joueur < 2)
			printf("Mikado a gagne\n");
	else
			printf("Les barbares ont gagne\n");
	
	return 1;
	
}