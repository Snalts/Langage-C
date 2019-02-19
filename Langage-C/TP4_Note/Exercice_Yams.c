#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"fonction.h"


int main(){
	int tab_valeurs[6]={0,0,0,0,0,0};
	jets_de(tab_valeurs);
	printf("vous avez marqué %d point \n ",point(tab_valeurs));
}