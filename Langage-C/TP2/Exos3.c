#include <stdio.h>
#include <stdlib.h>
#define N 13

//Programme qui calcul l'ecart entre 2 date et affiche le nombre de jours qui a en difference
int main(){
	int mois[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} ;
	int date_1[2],date_2[2],ec_j;
	printf("Saisir la premiere date :");
	scanf("%d %d",&date_1[0],&date_1[1]);
	printf("Saisir la deuxieme date :");
	scanf("%d %d",&date_2[0],&date_2[1]);
	
	
	
	if(date_1[0] == mois[date_1[1]]){
				date_1[0]=1;
				date_1[1]++;
	}
	
	
	for(ec_j=0;(date_1[0] < date_2[0]) || (date_1[1] != date_2[1]);ec_j++,date_1[0]++){
			
			if(date_1[0] == mois[date_1[1]]){
				date_1[0]=1;
				date_1[1]++;
				
			}
	
	}
	ec_j++;
	printf("Il y a %d jours entre ces deux dates\n",ec_j);
	return 1;

	
}
