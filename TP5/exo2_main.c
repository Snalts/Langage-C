#include "exo2_main.h"

#define TAILLE_TAB 7  


int main(){
	//Definis les variables
	char code[TAILLE_TAB],combinaison[TAILLE_TAB];
	int bien_places=0,bonne_couleur=0;
	
	//Saisi du code 
	printf("Saisir code:\n");
	saisir_code(code);

	printf("Tour joueur:\n");
	//Parti recherche du code
	do {
		saisir_code(combinaison);
	
	} while(afficher_reponse(code,combinaison) != (TAILLE_TAB-1));

	printf("Bravo,vous avez devine le code secret !\n");

}
