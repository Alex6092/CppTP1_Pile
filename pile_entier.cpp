#include "pile_entier.h"

pile_entier::pile_entier(int taille)
{
	pile = new int(taille);
	this->taille = taille;
	this->hauteur = 0;
}

pile_entier::~pile_entier()
{
	delete pile;
}

// 
void pile_entier::empile(int val)
{
	while (pleine() == 1)
	{
		pile[hauteur] = val;
		hauteur++;
	}
}

int pile_entier::depile()
{
	while (vide() == 1)
	{
		int result = pile[hauteur];
		return result;
	}

	return 0;
}

int pile_entier::pleine()
{	
	return hauteur > taille;
}

int pile_entier::vide()
{
	return hauteur = 0;
}
