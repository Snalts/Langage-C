/* Menu du TP 3 - La liste de lecture */
#include<stdio.h>
#include<stdlib.h>
#define M 20
#define L 10
#define P 1800



void init(int liste[]){
	int i=0;
	for(i=0;i<L;i++){
		liste[i]=-1;	
	}
}

void afficher_duree_morceau(int duree[M]){
	int val=0;
	printf("Ce traitement est disponible\n");
	do{ 
		printf("Veuillez saisir une valeur entre 1 et %d :",M);
		scanf("%d",&val);
	}while((val < 1 )||(val > M));
	printf("La durée du morceau demandé est la piste [%d] de %d seconde\n",val,duree[val-1]);
}

void afficher_liste(int liste[],int duree[M],int *duree_max){	
	int i=0;
	printf("Ce traitement est disponible\n");
	for(i=0;i < L ;i++){
		if(liste[i]== -1)
			printf("Emplacement %d vide \n",i+1);
			
		else	
			printf("Le morceau numero %d a une duree de %d minute et %d seconde\n",liste[i]+1,duree[liste[i]]/60,duree[liste[i]]%60);
		
		
		
		
	}
	
	printf("Il reste %d minute dans la liste\n",*duree_max);
	
	
}

void ajouter(int liste[],int duree[],int *duree_max){
	int i,val=0;
	printf("Ce traitement est disponible\n");
	do{ 
		printf("Veuillez saisir une valeur entre 1 et %d :",M);
		scanf("%d",&val);
	}while((val < 1 )||(val > M));
	for(i=0;liste[i]!=-1 && i<L;i++);
	if(i==L){
		printf("Espace plein, veuillez retirée de la musique");	
	}
	else{
		liste[i]=val-1;
		printf("Valeur max %d : \n",*duree_max);
	
		printf("Valeur musique %d : \n",duree[liste[i]]/60);	
		*duree_max= *duree_max - (duree[liste[i]]/60);
	}
}

void oter(int liste[],int duree[],int *duree_max){
	int i,val;
	printf("Ce traitement est disponible\n");
	do{ 
		printf("Veuillez saisir une valeur entre 1 et %d :",M);
		scanf("%d",&val);
	}while((val < 1 )||(val > M));
	for(i=M-1;(liste[i] != val-1) && (i >= 0);i--);
	if(liste[i] == 	val-1){
		liste[i]=-1;
		*duree_max= *duree_max + (duree[val-1]/60);
	}
	
	else
		printf("Le morceaux n'a pas été trouvé ");
	
	
}

void oter_doublons(int liste[],int duree[],int *duree_max){	
	printf("Ce traitement est disponible\n");
	int i,j,val;
	
	do{ 
		printf("Veuillez saisir une valeur entre 1 et %d :",M);
		scanf("%d",&val);
	}while((val < 1 )||(val > M));
	for(j=0;liste[j]!= val-1;j++);
	for(i=M-1;i >j ;i--){
		if(liste[i] == 	val-1){
			liste[i]=-2;
			*duree_max= *duree_max + (duree[val-1]/60);
		}
	}
	for(i=0,j=0;i<L;i++){
		if(liste[i] > 0){	
			liste[j++]=liste[i];
			if( (j-1) != i)
				liste[i]=-1;

		}	

	}
	
	
}



/* Programme principal */
int main(){	

	/* Declaration du tableau des morceaux*/
	int duree[M]={125,241,136,182,175,196,111,124,174,199, 200,314,80,129,213,231,285,214,152,236} ;
	/* Declaration de la liste de lecture*/
	int liste[L];
	int nb_morceaux=0;
	int *duree_max=malloc(sizeof(2));
	*duree_max=30;
	
	/* Choix de l'utilisateur */

	int choix;	

	init(liste);

	do{
		/* Affichage du menu */
		printf("\nMenu :\n");
		printf(" 1 - Reinitialiser la liste de lecture\n");
		printf(" 2 - Afficher la duree d'un morceau\n");
		printf(" 3 - Afficher la liste et la place restante \n");
		printf(" 4 - Ajouter un morceau\n");
		printf(" 5 - Supprimer un morceau\n");
		printf(" 6 - Supprimer les doublons\n");
		printf(" 7 - Quitter\n");
		printf("Votre choix : ");
		scanf("%i",&choix);

		/* Traitement du choix de l'utilisateur */
		switch(choix){
			case 1 : 	init(liste); 
					break;
			case 2:  	afficher_duree_morceau(duree); 
					break;
			case 3:  	afficher_liste(liste,duree,duree_max); 
					break;
			case 4:  	ajouter(liste,duree,duree_max); 
					break;
			case 5:  	oter(liste,duree,duree_max); 
					break;
			case 6:  	oter_doublons(liste,duree,duree_max); 
					break;
			case 7:  	break;
			default: printf("Erreur: votre choix doit etre compris entre 1 et 7\n");
		}
	}
	while(choix!=7);
	printf("Au revoir !\n");
	free(duree_max);
	return EXIT_SUCCESS;
}
