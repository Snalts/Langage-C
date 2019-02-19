#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int point(int tab_valeurs[6]){
	int val_point,j=0,suite,brelan,pair,test=0;	
	for(j=1; j < 6 && test == 0; j++){
		if(tab_valeurs[j-1] ==tab_valeurs[j]){
			suite++;
		}
		if(tab_valeurs[j-1] ==3){
			brelan++;
		}
		else if(tab_valeurs[j-1] ==2){
			pair++;
		}

		if(tab_valeurs[j-1] == 5){
			val_point=7;
			test=1;
		}
		else if(tab_valeurs[j-1] == 4){
			val_point=4;
			test=1;;
		}
		else if (suite == 6){
			val_point=6;
			test=1;
		}
		else if (brelan ==1 && pair == 1){
			val_point =5;
			test=1;
		}
			
	}
	if (test ==1)
		return val_point;	

	else {
		if( brelan >= 1)
			val_point=3;
		else if (pair >= 1)
			val_point=2;

		return val_point;	
	}
}

void affichage_de(int tab_valeurs[6]){
	int i=0,j=0;
	for(i=0;i < 6; i++){
		if(tab_valeurs[i] != 0){
			for(j=0; j < tab_valeurs[i]; j++){
				printf("%d  ",i+1);
			}
		}
	}
	printf("\n");
}

void jets_de(int tab_valeurs[6]){
	srand(time(0));
	int jets=0,retire=-1,i=0;
	for(i=0;i <6;i++){
		jets=(rand()%5)+1;	
		tab_valeurs[jets]++;
	}
	affichage_de(tab_valeurs);
	do{
		printf("Combien de de voulez vous relancé (0 ou 1 ou 2) :");
		scanf ("%d",&retire);
	}while(retire < 0 || retire >2);
	

	if(retire != 0){
		for(i=0; i<retire;i++){		
			do{
				printf("Donnez le de a rejouer");
				scanf ("%d",&jets);
			}while(jets < 1 || jets >6 || tab_valeurs[jets] == 0);		
			tab_valeurs[jets]-=retire;
			jets=(rand()%5)+1;
			tab_valeurs[jets]++;
		}
	affichage_de(tab_valeurs);
	}
	
	
}