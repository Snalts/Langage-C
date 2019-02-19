#include "exo2_fonction.h"

void saisir_code(char tab[TAILLE_TAB]) {
	do {
		printf("Saisir code/proposition: ");
		scanf("%s", tab);
	} while (incorrect(tab));
}

// Si le tableau comporte une couleur incorrecte
int incorrect(char tab[TAILLE_TAB]) {
	int i = 0;
	for (i = 0; tab[i] && bonne_couleur(tab[i]); i++);

//	printf("i: %d\npos6: %c", i, tab[6]);
	return i == TAILLE_TAB - 1? 0 : i;
}

// Si la couleur saisie est correcte
int bonne_couleur(char c) {
	return (c == 'R' || c == 'V' || c == 'J' || c == 'B');
}

int afficher_reponse(char code[TAILLE_TAB], char combinaison[TAILLE_TAB]) {
	int bien_places = 0, bonne_couleur = calcul_couleur(code, combinaison);

	// S'il y a au moins 1 bonne couleur
	if (bonne_couleur) {
		int i = 0;
		// Comparaison de chaque emplacement des tableaux
		for (i = 0; i < TAILLE_TAB - 1; i++)
			// Ajoute 1 bien placé et enlève 1 bonne couleur (puisqu'il est placé)
			if (code[i] == combinaison[i]) {
				bien_places++;
				bonne_couleur--;
			}
	}

	printf("Réponse: %d bien placés\n", bien_places);

	if (bonne_couleur)
		printf("Réponse: %d bonne couleur\n", bonne_couleur);

	return bien_places;
}

int compter_couleur(char tab[TAILLE_TAB], char couleur) {
	int i = 0, retour_fonction = 0;

	// On compte le nombre de pions pour la couleur
	for (i = 0; i < TAILLE_TAB - 1; i++)
		if (tab[i] == couleur)
			retour_fonction++;

	return retour_fonction;
}

int calcul_couleur(char code[TAILLE_TAB], char combinaison[TAILLE_TAB]) {
	int R = 0, V = 0, J = 0, B = 0;
	int var1 = 0, var2 = 0;
	int minimum = 0;

	// On prend les minimum de chaque couleur
	var1 = compter_couleur(code, 'R');
	var2 = compter_couleur(combinaison, 'R');
	R = var1 < var2? var1 : var2;

	var1 = compter_couleur(code, 'V');
	var2 = compter_couleur(combinaison, 'V');
	V = var1 < var2? var1 : var2;
	
	var1 = compter_couleur(code, 'J');
	var2 = compter_couleur(combinaison, 'J');
	J = var1 < var2? var1 : var2;

	var1 = compter_couleur(code, 'B');
	var2 = compter_couleur(combinaison, 'B');
	B = var1 < var2? var1 : var2;

	minimum = R + V + J + B;

	return minimum;
}
