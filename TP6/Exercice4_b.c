#include <stdio.h>
#include <stdlib.h>

#define N 20

void echange (int a, int b , int T[N]){
	int sav;
	sav=T[a];
	T[a]=T[b];
	T[b]=sav;

}

int main (){
	int i,j;
	int T[N]={20,19,18,17,16,15,14,13,12,11,10,9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};

	for(i=0; i < N; i++){
		printf("|%d|",T[i]);
	}
	printf("\n");

	for(i=0;i < N/2;i++){
		for(j=N-1; j > i;j--){
			if(T[j-1] > T[j])
				echange(j-1,j,T);
		}
		for(i=0; i < N; i++){
			printf("|%d|",T[i]);
		}
		printf("\n");
		
		for(j=i; j < N;j++){
			if(T[j+1] < T[j])
				echange(j+1,j,T);
		}
	for(i=0; i < N; i++){
		printf("|%d|",T[i]);
	}
	printf("\n");

	}
	for(i=0; i < N; i++){
		printf("|%d|",T[i]);
	}
	printf("\n");
}
