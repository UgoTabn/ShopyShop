#include <stdio.h>
#include <stdlib.h>

struct Item {
	char* nom;
	int prix;
	int quat;	
};
typedef struct Item item;



int main(){
	int thunes = 100;
	int choix = 0;
	int achat = 0;
	item vide = {"vide",0, 0}; 	// decla des items
	item epee = {"epee",10, 5};
	item bouclier = {"bouclier",10, 2};
	item lance = {"lance",10, 12};
	item baton = {"baton",10, 2};
	item potion = {"potion",2, 22};
	item ShopyShop[5];
	ShopyShop[0] = vide;
	ShopyShop[1] = epee;
	ShopyShop[2] = bouclier;
	ShopyShop[3] = lance;
	ShopyShop[4] = baton;
	ShopyShop[5] = potion;
	
	printf("Bienvenue dans le ShopyShop ! :^)\n");
	printf("Vous desirez Acheter (1), ou vendre (2) ? \n");
	printf("vous avez : %d\n",thunes);
	scanf("%d", &choix);
	epee.quat = 10;
	if(choix == 1){
		printf("____________________________________________________\n");
		printf("%s,vaut %d, Quantite : %d\n",ShopyShop[1]);
		printf("(1) pour acheter\n");
		scanf("%d", &achat);
		
	}
	if(achat == 1){
		thunes = thunes - epee.prix;
		epee.quat = epee.quat - 1;

	 
	}
	                                                                   
	printf("%s,Quantite : %d\n",epee.nom, epee.quat);
	printf("vous avez : %d\n ",thunes);
	
    return 0;
}

/* Ordre Alpha, Inventaire (quantitées),propose des articles, mecanique d'achat */
