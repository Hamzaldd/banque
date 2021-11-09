#include "Compte.h"
#include <iostream>
using namespace one;
using namespace std;
one::Compte::Compte(int numC, char* nom, double s)
{
	this->numCompte = numC;
	this->solde = solde;
	strcpy(this->nomPropietaire, nom);
}
bool one::Compte::retireArgent(double somme)
{ 
	if (somme > solde)
	{
		return false;
	}
	solde = solde - somme;
    return true;
}

void one::Compte::deposerArgent(double add)
{
	solde = solde + add;
}

void one::Compte::consulterSolde()
{
	std::cout << "Le solde = ";
	std::cout << solde;
}

bool one::Compte::transfererArgent(Compte tmp, double som)
{
	if (this->retireArgent(som))
	{
		tmp.deposerArgent(som);
		return true;
	}
	else
	{
		return false;
	}
}
