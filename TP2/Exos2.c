#include <stdio.h>
#include <stdlib.h>
#define N 10
//Fonction qui renvoie si il est pair ou non.
int impair(int i){
	return i%2;
}

/*Fonction qui separe les entiers du tableau, tous les paires seront du coté droits, 
tous les impaires seront du coté gauche.*/
int main(){
	int tab_1[N]={5,8,6,9,12,4,3,1,4,22};
	int i=0,j=(N-1),sav;
	

	while(i < j){
		if(impair(tab_1[i])){
			sav=tab_1[j];
			tab_1[j--]=tab_1[i];
			tab_1[i]=sav;
		}
		else
			i++;
			
	}		
				
	for(i=0;i < N;i++){
		printf("|%d|",tab_1[i]);
	}
	printf("\n");	
}
