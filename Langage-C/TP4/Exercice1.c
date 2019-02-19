#include<stdio.h>
#include<stdlib.h>
#define REGLE_C 50

int porte_A(int nb){
	//Si nb est un multiple de 5 alors la porte A est en A1, sinon elle est en A2.
	return nb%5;
}

int porte_B(int nb){
	//si les deux chiffres de nb ont la même parité alors la porte B est en B1, sinon elle est en B2.
	int dizaine=0,unitaire=0;
	unitaire=nb%10;
	dizaine=nb/10;

	//Si les 2 nombre on la même parité retourne 0 pour ouvrir la porte B2, 1 pour ouvrir la porte B1.
	if(unitaire%2 ==  dizaine%2) {
		return 0;	
	}
	else 
		return 1;
}
//Si la porte C1 ou C2 est ouverte
int porte_C(int nb){
	//si nb est strictement inférieur à 50 alors la porte C est en C1,retourne 0, sinon elle est en C2, retourne 1. 
	return nb < REGLE_C ? 0 : 1;

}

//Si le mur D est présente ou non
int mur_D(int nb){
	//Si la somme des deux chiffres de nb est strictement inférieure à 9 alors le mur D est présent. 
	int dizaine,unitaire,total;
	unitaire=nb%10;
	dizaine=nb/10;
	total=unitaire+dizaine;
	
	return total <9 ? 0: 1;
	
}

int main(){
	int nb=0;
	do{
		printf("Saisir le nombre dans l'intervalle [1,99] :");
		scanf("%d",&nb);

	}while(nb < 1 || nb > 99);
	if(porte_A(nb) && porte_B(nb) && porte_C(nb) )
			printf("Ariane rejoint Thésée \n");	

	else if(!porte_A(nb) && !porte_B(nb) && (porte_C(nb) ) )
			printf("Ariane rejoint Thésée \n");

	else if (mur_D(nb) && !(porte_C(nb) ) )
			printf("Ariane rejoint Thésée \n");

	else
			printf("Ariane ne rejoint pas  Thésée \n");

	return 1;

}