#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int saisi_joueur(){
	int val=0;
	while((val<1) || (val > 3)){
		printf("Saisir une valeur compris entre 1-3 : ");
			scanf("%d",&val);
	}
	return val;
}

int saisi_ia(int somme){
	if(somme < 17){
			return rand()%3+1;
	}
	switch(somme){
		case 17 : return 3;
			break;
		case 18 : return 2;
			break;
		case 19 : return 1;
			break;
		default : return -1;
	}
}

int strategie_ia(int somme){
	if(somme < 17){
			if((somme%4)== 0)
					return 1;
			else
				return 4-(somme%4);
	}
	switch(somme){
		case 17 : return 3;
			break;
		case 18 : return 2;
			break;
		case 19 : return 1;
			break;
		default : return -1;
	}
}