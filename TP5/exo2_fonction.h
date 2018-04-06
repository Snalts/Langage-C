#include <stdio.h>
#include <stdlib.h>

#define TAILLE_TAB 7

void saisir_code(char tab[TAILLE_TAB]);
int incorrect(char tab[TAILLE_TAB]);
int bonne_couleur(char);
int afficher_reponse(char code[TAILLE_TAB], char combinaison[TAILLE_TAB]);
int compter_couleur(char tab[TAILLE_TAB], char);
int calcul_couleur(char code[TAILLE_TAB], char combinaison[TAILLE_TAB]);
