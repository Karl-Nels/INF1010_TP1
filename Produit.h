/*****************************************************************
* Titre: Travail pratique #1 - Produit.h
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
* Editeurs : Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/

#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Produit
{
public:
	// Constructeurs par defaut et par parametres
	Produit();
	Produit(string nom, int reference, double prix);

	//Destructeur de la classe
	~Produit();

	// Methodes d'acces
	string obtenirNom() const;
	int obtenirReference() const;
	double obtenirPrix() const;

	// Methodes de modification
	void modifierNom(string nom);
	void modifierReference(int reference);
	void modifierPrix(double prix);
   
    // autres methodes
    void afficher() const;
   
private:

	// attributs prives
	std::string nom_;
	int reference_;
    double prix_;
};

#endif 
