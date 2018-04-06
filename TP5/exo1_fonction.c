#include "exo1_fonction.h"

void affichage(int rives[4]){
	printf("rive de depart: %d missionnaire(s) et %d cannibale(s)\n",rives[0],rives[1]);
	printf("rive d'arrivee: %d missionnaire(s) et %d cannibale(s)\n",rives[2],rives[3]);

}


void envoyer(int rives[4],int destination){
	printf("Vous êtes sur la rive %s\n", destination? "d'arrivee":"de depart");
	//Envoyer les missionnaires ou les canniballes sur la rive de départ
	int nb_trav_miss=0,nb_trav_can=0;
	
	do{	
		printf("Combien de missionnaires voulez-vous faire traverser ? ");
		scanf("%d",&nb_trav_miss);
	
	}while(nb_trav_miss>rives[destination*2] || nb_trav_miss < 0 || nb_trav_miss > 2 || (rives[destination* 2 + 1] == 0 && nb_trav_miss == 0));

	if(nb_trav_miss < 2){
		do{
			printf("Combien de caniballes voulez-vous faire traverser ? ");
			scanf("%d",&nb_trav_can);
		}while(nb_trav_can>rives[destination * 2 + 1] || nb_trav_can < 0 || nb_trav_can > 2 || (nb_trav_miss == 0 && nb_trav_can == 0));
	}
	//Changement des variables

	rives[destination * 2]-=nb_trav_miss;
	rives[((destination + 1) % 2) * 2]+=nb_trav_miss;

	rives[destination * 2 +1]-=nb_trav_can;
	rives[((destination + 1) % 2) * 2 +1]+=nb_trav_can;
	

}