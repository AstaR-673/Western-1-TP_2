#pragma once
#include "Humain.h"
using namespace std;
#include <iostream>
class Cowboy :
	public Humain
{
private:
	string popularite;
public:
	Cowboy(const string nom = "", const string boissonFavorite = "Whysky", const string popularite = "vaillant");
	void sePresente() const;
	string getNom() const;

};

