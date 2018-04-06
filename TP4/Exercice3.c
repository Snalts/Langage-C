#include<stdio.h>
#include<stdlib.h>

#define N 5


void affichage_sens(char sens[N]){
	int i=0,maxi=0,mini=0;
	for(i=0;i< N;i++){
		printf("Le %d signal est : %c\n",i+1,sens[i]);
		if(sens[i] == '+'){
			maxi++;
		}
		else if(sens[i] == '-')
			mini++;
	}
	if(maxi > mini)
		printf("Il y a plus de maxima que de minima\n");
	else if(maxi < mini)
		printf("Il y a plus de minima que de maxima\n");
	else
		printf("il y a autant de maxima que de minima\n");
	
	if (mini == 0)
		printf("Il y a aucun minima\n");
	
	if (maxi == 0)
		printf("Il y a aucun maxima\n");	

}

/*Fonction qui rempli le tableau sens via le tableau signal*/
void rempli_sens(char sens[N],int signal[N]){
	int i=0;
	sens[0]=' ';
	sens[N-1]=' ';
	for(i=1;i < (N-1);i++){
		printf("Val_i:%d |Val_i-1:%d |Val_i:%d\n",signal[i],signal[i-1],signal[i+1]);

		if(signal[i]< signal[i-1] && signal[i] > signal[i+1])
			sens[i]='-';
		
		else if(signal[i] > signal[i-1] && signal[i] < signal[i+1])
			sens[i]='+';
			
		else if(signal[i]> signal[i-1] && signal[i] > signal[i+1])
			sens[i]='O';
		else
			sens[i]='o';		
	}
}

/*Affiche le tableau signal*/

void affichage_signal(int signal[N]){
	int i=0;
	for(i=0;i<N;i++){
		printf("|%d|",signal[i]);
	}
	printf("\n");

}

/*Fonction qui definie un tableau signal */
void defini_signal(int signal[N]){
	int i=0,val;
	for(i=0; i < N;i++){
		printf("Saisir la valeur %d :",i+1);
		scanf("%d",&val);
		signal[i]=val; 
	} 
}


/* Programme principal */
int main(){	
	char sens[N];	
	int signal[N];
	defini_signal(signal);
	affichage_signal(signal);
	rempli_sens(sens,signal);
	affichage_sens(sens);
	
}
