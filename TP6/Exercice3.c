#include <stdio.h>
#include <stdlib.h>

#define N 10
#define C 4


//Fonction qui echange la position de 2 entier d'un tableau
void echange(int a, int b, int T[N]){
	int sav = T[a];
	T[a] = T[b];
	T[b] = sav;
} 

int codage(char c){
	int retour;
	switch(c){
		case 'V':retour = 1; break;

		case 'R':retour = 2; break;

		case 'B':retour = 3; break;

		case 'J':retour = 4; break;
		
		default:retour = 0;
	}
	return retour;
}

int decodage(int v){
	char retour;
	switch(v){
		case 0:retour = 'V'; break;

		case 1:retour = 'R'; break;

		case 2:retour = 'B'; break;

		case 3:retour = 'J'; break;
		
		default:retour = '-';
	}
	return retour;
}


int main(){
	int i,j,V[C],c=0;
	char T[N]={'V','R','V', 'B', 'B', 'J', 'R','J','V','B'};
	printf("%s\n",T);
	for(i = 0 ; i < N; i++){
		V[codage(T[i])-1]++;

	}
	printf("%c\n",decodage(1));
	for(i = 0 ; i < C;i++){
		for(j = 0 ; j < V[i] ; j++){
			T[c++]=decodage(i);
		}
	printf("%d val i \n",i);
	}
	printf("%s\n",T);
		
	return 0;
}
