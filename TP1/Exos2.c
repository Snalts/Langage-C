#include <stdio.h>
#include <stdlib.h>

//Programme qui lit deux entier representant le mois et l'année et l'affiche
int main(){
	int mois,ans,jours;
	//Saisi les donnée via le terminal
	
	printf("Saisir le mois compris entre 1 et 12\n");
	scanf("%d", &mois);
	
	
	printf("Saisir l'anne\n");
	scanf("%d", &ans);
	
	switch(mois){
		//Premier cas, Pour les jours a 30.
		case 4:
		case 6:
		case 9:
		case 11 :jours=30;
		break;

		//Deuxieme cas, le mois de fevrier
		case 2:	if( ans%4 == 0)
				jours=29;		
			else
				jours=28;
		break;
		//Troisieme cas,Pour les jours a 31
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12 :jours=31;
		break;
		//Quatrieme cas, Le mois est incorrect
		default:printf("Le mois est incorrrect\n");
			return 0;
	}
	//Affichage
	printf("Le nombre de jours sera de %d pour le mois de %d a l'annee de %d\n",jours,mois,ans);
	
	
	return 1;
}
