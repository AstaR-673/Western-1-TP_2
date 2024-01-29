#pragma once
#include "Humain.h"
class Dame :
	public Humain
{
public:

	Dame(const string nom = "", const string boissonFavorite = "lait", const string
		couleurRobe = "blanche");

	string getNom() const; 
	string getEtat() const;

	void sePresente() const;
	void changeDeRobe(const string couleurRobe);

private:
	string couleurRobe;
	string etat;

};

