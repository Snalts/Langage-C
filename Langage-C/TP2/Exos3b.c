#include <stdio.h>
#include <stdlib.h>
#define N 13
//Programme qui calcul le lendemain d'une  date et l'affiche .
int main(){

	int date_1[3];
	int mois[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} ;
	
	printf("Saisir la date :\n");
	scanf("%d %d %d",&date_1[0],&date_1[1],&date_1[2]);
	
	//Si c'est une année bissextiles,alors le mois de fevrier est composé de 29 jours
	if(date_1[2]%4==0)
		mois[2]=29;
	
	
		
	//Si on est le dernier jour du mois.
	
	if(date_1[0] == mois[date_1[1]]){
		date_1[0]=1;
		date_1[1]++;

		//Si on est le dernier jour du mois du dernier mois.
		if(date_1[1]==13){
			date_1[1]=1;
			date_1[2]++;
		}
	}
	
	else{
		date_1[0]++;
		
	}
	//Affichage
	printf("Le lendemain sera %d-%d-%d\n",date_1[0],date_1[1],date_1[2]);
	return 1;
}
