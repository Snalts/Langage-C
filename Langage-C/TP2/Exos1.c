#include <stdio.h>
#include <stdlib.h>
#define N 100

/*Recherche si le tableau est un anagrammes, renvoie 1 si les deux chaines sont un annagrammes 
 renvoie 0 si les deux chaines n'ont pas la même taille et que les deux mots ne sont pas un annagrammes.*/
int sont_anagrammes(char tab_1[N],char tab_2[N]){
	int i,j;
	
	for(i=0,j=0;(tab_1[i]!='\0')&&(tab_2[j]!='\0');i++,j++);
	
	if(tab_1[i] != tab_2[j]){
		printf("Les chaines de caractere n'ont pas la même taille\n");
		return 0; 
	}
	else{

		for(i=0;tab_1[i]!='\0';i++){
			
			for(j=0;(tab_2[j]!='\0')&&(tab_2[j]!=tab_1[i]);j++);
		
			if(tab_2[j]!=tab_1[i]){
				return 0;
			}
			else{
				tab_2[j]='*';
			}		
		}
	}			
	return 1;	
}

int main(){
	char chaine_1[N],chaine_2[N];

	printf("Saisir votre premier mot\n");
	scanf("%s",chaine_1);
	printf("Saisir votre deuxieme mot\n");
	scanf("%s",chaine_2);
	if(sont_anagrammes(chaine_1,chaine_2))
		printf("Les deux mots sont un anagrammes\n");
	else
		printf("Les deux mots ne sont pas un anagrammes\n");
	
	return 1; 

}
