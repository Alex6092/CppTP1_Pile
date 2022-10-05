#include <iostream>
#include <stdio.h>
#include "pile_entier.h"

using namespace std;

int main(int argc, char ** argv)
{
	pile_entier * pile = new pile_entier(34);

	cout << (pile->vide() == 1 ? "Pile vide" : "Pile pas vide") << endl;
	cout << (pile->pleine() == 1 ? "Pile pleine" : "Pile pas pleine") << endl;

	// Rempli la pile
	for (int i = 0; pile->pleine() == 0; i++)
	{
		cout << "Empile " << i << endl;
		pile->empile(i);
	}

	// Vide la pile
	while (pile->vide() != 1)
	{
		int val = pile->depile();
		cout << "Depile " << val << endl;
	}

	return 0;
}