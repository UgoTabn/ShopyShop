#include <stdio.h>
#include <stdlib.h>

struct Item {
	int prix;
	int premiereLettre;	
}
typedef struct Item item;



int main()
{
	item epee = {10, 5};
	item bouclier = {10, 2};
	item lance = {10, 12};
	item baton = {10, 2};
    return 0;
}

/* Ordre Alpha, Inventaire (quantitées),propose des articles, mecanique d'achat */
