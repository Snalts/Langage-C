#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declaration des variables et saisi des valeurs 
	int mou,lou,ser;
	int nb_jour;
	printf("Saisir le nombre de mouton(s)\n");
	scanf("%d",&mou);
	printf("Saisir le nombre de loup(s)\n");
	scanf("%d",&lou);
	printf("Saisir le nombre de serpent(s)\n");
	scanf("%d",&ser);
	//Deroulement de la journée jusqu'a la fin de la journée
	for(nb_jour=0;(mou >0) && (lou >0) && (ser >0);nb_jour++){
		mou-=lou;
		if(mou <= 0)
			mou=0;
		lou-=ser;
		if(lou <= 0)
			lou=0;
		
		if(mou > 0){//Si il n'y a plus de mouton, il ne peuvent pas attaqué les serpents
			ser-=mou;
			if(ser <= 0)
				ser=0;
		}
		if((mou >0) && (lou >0) && (ser >0)) 	
			printf("%d jours, il reste %d mouton, %d loup, %d serpent\n",nb_jour,mou,lou,ser);

	}
	//Affichage du dernier jour, qui reste en vie et qui est mort
	if (mou == 0 && lou == 0)
		printf("Les moutons et les loups disparaissent le matin du %d jours, il reste %d serpent\n",nb_jour,ser);
	else if (lou == 0 && ser == 0)
		printf("Les loups et les serpents disparaissent le matin du %d jours, il reste %d mouton\n",nb_jour,mou);
	else if(mou == 0)
		printf("Les moutons disparaissent le matin du %d jours, il reste %d loup et %d serpent\n",nb_jour,lou,ser);
	else if(lou == 0)
		printf("Les loups disparaissent le matin du %d jours, il reste %d mouton et %d serpent\n",nb_jour,mou,ser);
	else if(ser == 0)
		printf("Les serpents disparaissent le matin du %d jours, il reste %d mouton et %d loup\n",nb_jour,mou,lou);
	return 0;
}
	
	
