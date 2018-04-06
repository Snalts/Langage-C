#include "exo1_main.h"

int main() {
	int nb_miss = NB_PERSONNE_DEPART, nb_can = NB_PERSONNE_DEPART; // Initialisation des variables
	int rives[4] = {nb_miss, nb_can, 0, 0}; // rives[0] == nb_miss au départ, rives[1] == nb_can au départ
	// rives[2] == nb_miss à l'arrivée, rives[3] == nb_can à l'arrivée

	affichage(rives);

	// On fait une première fois pour ne pas re-saisir la traversée vers la rive de départ si tout le monde a traversé
	envoyer(rives, 0); // 0 correspond au départ, 1 correspond à l'arrivée

	// Tant qu'il n'y a pas plus (+) de cannibales que de misionnaire sur une rive ET que tout le monde n'a pas traversé
	while ((rives[0] == 0 || rives[1] <= rives[0]) && (rives[2] == 0 || rives[3] <= rives[2]) &&
		(rives[2] != NB_PERSONNE_DEPART || rives[3] != NB_PERSONNE_DEPART)) {
		affichage(rives);
		envoyer(rives, 1); // Envoie vers la rive d'arrivée

		affichage(rives);
		envoyer(rives, 0); // Envoie vers la rive de départ
	}

	affichage(rives);

	if (rives[1] > rives[0])
		printf("Les cannibales mangent les missionnaires sur la rive de départ\nVous avez perdu la partie\n");
	else if (rives[3] > rives[2])
		printf("Les cannibales mangent les missionnaires sur la rive d'arrivée\nVous avez perdu la partie\n");
	else
		printf("Tous les cannibales et tous les missionnaires ont traversés la rive\nVous gagnez!!\n");
	return 0;
}