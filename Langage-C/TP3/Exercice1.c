#include<stdio.h>
#include<stdlib.h>
#define PI 3.1416

float sur_disque (float r){
	return PI*r*r;	
}

int main (){
	//Corde = L+l
	float corde=lon+lar;
	
	float lon=0,lar=0,d=0;
	
	float r4=lon-d;
	float res=0;
	float r3=lar+d;
	printf("Saisir la longueur de la maison\n");
	scanf("%f",&lon);
	printf("Saisir la largeur de la maison\n");
	scanf("%f",&lar);
	printf("Saisir la distance de la corde du coin de la maison\n");
	scanf("%f",&d);
	
	
	
	//Calcul du coté ou il a la corde
	res+=sur_disque(corde)/2.0;
	printf("La superficie sur la longueur est de : %.2f \n",sur_disque(corde)/2.0);
	
	//Calcul du premier coté du mur
	printf("La superficie sur a partir du coin du mur r2 est de : %.2f \n",sur_disque(corde-d)/4.0);
	res+=sur_disque(corde-d)/4.0;
	
	//Calcul du deuxieme coté du mur
	printf("La superficie sur a partir du coin du mur r3 est de : %.2f \n",sur_disque(r3)/4.0);
	res+=sur_disque(r3)/4.0;
	
	//Calcul du troisieme coté du mur
	printf("La superficie sur a partir du coin du mur r4 est de : %.2f \n",sur_disque(r4)/4.0);
	res+=sur_disque(r4)/4.0;
	
	//Calcul du quatrieme coté du mur
	printf("La superficie sur a partir du coin du mur r5 est de : %.2f \n",sur_disque(d)/4.0);
	res+=sur_disque(d)/4.0;
	
	//Superficie Total
	printf("La superficie total est de : %.2f \n",res);
}