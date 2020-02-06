#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	
	
		int Vietank = 120
		int Attaquetank = 20
		int Staminatank = 100
		int Tremblemment = 30
		int xptank = 0
	
	
		int Viedps = 80
		int Attaquedps = 40
		int Staminadps = 100
		int BoostAttaque = 20 
		int xpdps = 0
	
		int Vieking =100
		int Attaqueking = 20
		int Manaking =100
		int Heal = 20
		int xpking = 0
	
		int Viegolem = 100 
		int Attaquegolem = 20
	

		int Viepiou = 80 
		int Attaquepiou = 30 
		
		//variablechoixjoueur
		int choixaction=0
		
		//variable comportement monstre 
		
		int i=0
	}
	
	while ( Vietank>0 && Viedps>0 && Vieking>0 || Viepiou>0 && Viegolem>0 ) 
	{
		printf (" Un monstre vous attaque \n");
	float nombre=0;
	srand(time(NULL));
	nombre= (float)rand() / (float)1;
	
	if nombre= 0 
	  printf (" Golem sauvage apparait \n")
	}  
	  
	  
	  // Tour du tank
	  
	  printf (" Au tank d'attaquer que faites vous ? \n")
	  printf (" Tapez 1 pour Attaquer , 2 pour défendre , 3 pour lancer tremblement \n")
	  scanf("%d", &choixAction);
	
	if (choixAction == 1)
		{
			printf("Vous lancez une attaque \n");
			Viegolem-20;
			printf(" Golem a %d points de vie! \n", Viegolem);
		}
		
		else if (choixAction == 2)
		{
			printf("Vous vous protegez \n");
			printf("Vous avez %d point de vie ! \n", Vietank);
			
		}
		else if (choixAction == 3)
		{
			printf("Vous lancez tremblement \n");
			Viegolem-30;
			printf("Il vous reste %d d'endurence \n",Staminatank-30);
			printf("Golem a %d points de vie! \n", Viegolem);
			

		}
		
		
		
		// Tour du deuxieme perso
		
		
		printf (" Au dps d'attaquer que faites vous ? \n")
	  printf (" Tapez 1 pour Attaquer , 2 pour défendre , 3 pour un boost d'attaque \n")
	  scanf("%d", &choixAction);
	
	if (choixAction == 1)
		{
			printf("Vous lancez une attaque \n");
			Viegolem-40;
			printf(" Golem a %d points de vie! \n", Viegolem);
		}
		
		else if (choixAction == 2)
		{
			printf("Vous vous protegez \n");
			printf("Vous avez %d point de vie ! \n", Vietank);
			
		}
		else if (choixAction == 3)
		{
			printf("Vous lancez boost d'attaque \n");
			Attaquedps+20;
			printf("Il vous reste %d de stamina \n",Staminadps-30);
			printf("Golem a %d points de vie! \n", Viegolem);
			

		}
		
		//Tour du King
		
		printf (" Au King d'attaquer que faites vous ? \n")
	  printf (" Tapez 1 pour Attaquer , 2 pour défendre , 3 pour un sort \n")
	  scanf("%d", &choixAction);
	
	if (choixAction == 1)
		{
			printf("Vous lancez une attaque \n");
			Viegolem-20;
			printf(" Golem a %d points de vie! \n", Viegolem);
		}
		
		else if (choixAction == 2)
		{
			printf("Vous vous protegez \n");
			printf("Vous avez %d point de vie ! \n", Vietank);
			
		}
		else if (choixAction == 3)
		{
			printf("Vous lancez Heal \n");
			Viedps+20 Vieking+20 Vietank+20;
			printf("Il vous reste %d de Mana \n",Manaking-50);
			printf("King a désormais %d points de vie! \n", Vieking);
			printf("Dps a désormais %d points de vie! \n", Viedps);
			printf("Tank a désormais %d points de vie! \n", Vietank);
		}
		
	//Tour du golem
	
	printf (" Le golem vous attaque? \n")
	  printf (" Tapez 1 pour Attaquer , 2 pour défendre , 3 pour un sort \n")
	  scanf("%d", &choixAction);
	
	if (choixAction == 1)
		{
			printf("Vous lancez une attaque \n");
			Viegolem-20;
			printf(" Golem a %d points de vie! \n", Viegolem);
		}
		
		else if (choixAction == 2)
		{
			printf("Vous vous protegez \n");
			printf("Vous avez %d point de vie ! \n", Vietank);
			
		}
		else if (choixAction == 3)
		{
			printf("Vous lancez Heal \n");
			Viedps+20 Vieking+20 Vietank+20;
			printf("Il vous reste %d de Mana \n",Manaking-50);
			printf("King a désormais %d points de vie! \n", Vieking);
			printf("Dps a désormais %d points de vie! \n", Viedps);
			printf("Tank a désormais %d points de vie! \n", Vietank);
		}
		