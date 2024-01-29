#include <iostream>
#include <string>
#include "Humain.h"
using namespace std;
#include "Cowboy.h"
#include "Dame.h"


int main()
{
	Cowboy lucky("Lucky Luke");
	Dame jenny("Jenny");
	lucky.sePresente();
	jenny.sePresente();
	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();
	return 0;





}





/*
int main()
{
	Humain lucky("Lucky Luke", "coca-cola");
	cout << "Une histoire sur " << lucky.getNom() << endl;
	lucky.sePresente();
	lucky.boit();

	Humain* joe = new Humain("Joe");
	cout << "Une histoire sur " << joe->getNom() << endl;
	joe->setBoissonFavorite("whisky");
	joe->sePresente();
	joe->boit();

	return 0;
}
*/