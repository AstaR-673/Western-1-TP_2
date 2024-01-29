#include "Cowboy.h"
using namespace std;
#include <iostream>

Cowboy::Cowboy(const string nom, const string boissonFavorite, const string popularite) : Humain(nom, boissonFavorite)
{
}

void Cowboy::sePresente() const
{
	cout << " ( " << nom << " ) -- " << " Bonjour je suis le " << popularite << " " << getNom() << " et j'aime le " << boissonFavorite << endl;
}

string Cowboy::getNom() const
{
	return nom;
}