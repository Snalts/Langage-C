#include <stdio.h>
#include <stdlib.h>

int main(){
	int so,o,no,niv=0;
	//Saisi des valeur
	printf("Saisir la valeur du dioxyde de soufre\n");		
	scanf("%d",&so);
	printf("Saisir la valeur du ozone\n");
	scanf("%d",&o);
	printf("Saisir la valeur du dioxyde d'azote\n");
	scanf("%d",&no);
	//Premier cas, si on est toujours et état d'alerte niveau 0
	if((so > 200) || (o > 130) || (no > 200)){
			
		//Deuxieme cas, si on est toujours et état d'alerte niveau 1
			if((so > 350) || (o > 180) || (no > 300)){
					
					//Troisieme cas, si on est toujours et état d'alerte niveau 2
					if((so > 600) || (o > 360) || (no > 400)){
						
						niv=3;
					}
					else{
						niv=2;
					}
			}
			else{
				niv=1;
			}
	}
	//Affichage
	printf("Le niveau d'alerte est de %d\n",niv);
	return 1;		
		
}
