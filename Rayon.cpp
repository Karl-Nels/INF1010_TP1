/******************************************************************
* Titre: Travail pratique #1 - Rayon.cpp
* Date: 26 janvier 2018
* Auteurs: Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/

#include <iostream>
#include "Rayon.h"

using namespace std;

/***************************************************************************
Fonction	 : Constructeur par defaut (construit l'objet "Rayon" avec ses 
attributs initialises).
Parametres   : Aucun
Return		 : None
****************************************************************************/
Rayon::Rayon():categorie_("inconnue"),tousProduits_(nullptr),capaciteProduits_(0),nombreProduits_(0)
{

}

/***********************************************************
Fonction	 : Constructor par parametres (construit l'objet
"Rayon" et  assigne respectivement a ses attributs les
parametres de la fonction.
Parametres   : Entrees => string
Return		 : Type  "Produit"
************************************************************/
Rayon::Rayon(string cat) : categorie_(cat), tousProduits_(nullptr), capaciteProduits_(0), nombreProduits_(0)
{

}

/***********************************************************
Fonction	 : Destructeur (supprime l'objet)
Parametres   : Aucun
Return		 : None
************************************************************/
Rayon::~Rayon()
{
	delete[] tousProduits_;
	tousProduits_ = nullptr;
}

/*******************************************************
Function	 : Accesseur (retourne la categorie)
Parameters   : None
Return		 : Type string (categorie_)
********************************************************/
string Rayon::obtenirCategorie() const
{
	return categorie_;
}


/***************************************************
Fonction	 : Accesseur (retourne le tableau de pointeurs
tousProduits_)
Parameters   : None
Return		 : Type Produit (tousProduits_)
***************************************************/
Produit ** Rayon::obtenirTousProduits() const
{

	return this->tousProduits_;
}

/***************************************************
Fonction	 : Accesseur (retourne la capacite du 
tableau de produits).
Parametres   : Aucun
Return		 : Type int (capaciteProduits_)
***************************************************/
int Rayon::obtenirCapaciteProduits() const
{
	return capaciteProduits_;
}

/********************************************************
Fonction	 : Accesseur (retourne le nombre de produits)
Parametres   : Aucun
Return		 : Type int (nombreProduits_)
********************************************************/
int Rayon::obtenirNombreProduits() const
{
	return nombreProduits_;
}

/***********************************************************
Fonction	 : Modificateur (modifie la categorie de l'objet)
Parametres   : Type string(cat)
Return		 : None
***********************************************************/
void Rayon::modifierCategorie(string cat)
{
	categorie_ = cat;
}

/***********************************************************
Fonction	 : Ajoute un produit au tableau de pointeurs a
l'aide d'une allocation dynamique.
Parametres   : Type Produit* (produit)
Return		 : None
***********************************************************/
void Rayon::ajouterProduit(Produit * produit)
{
	if (tousProduits_ == nullptr)
	{
		capaciteProduits_ = 5;
		tousProduits_ = new Produit*[capaciteProduits_];
		tousProduits_[nombreProduits_] = produit;
		nombreProduits_++;
	}
	else if(nombreProduits_ == capaciteProduits_)
	{
		Produit ** copie = new Produit*[capaciteProduits_];

		for (int i = 0; i < capaciteProduits_; i++)
		{
			copie[i] = tousProduits_[i];
		}

		capaciteProduits_ += 5;
		tousProduits_ = new Produit*[capaciteProduits_];

		for (int i = 0; i < capaciteProduits_; i++)
		{
			tousProduits_[i] = copie[i];
		}

		delete copie;
		tousProduits_[nombreProduits_++] = produit;
	}

	else
	{
		tousProduits_[nombreProduits_] = produit;
		nombreProduits_++;
	}


}

/************************************************************
Fonction	 : Affiche la categorie, la capacite et le nombre
de produits contenus dans le rayon.
Parametres   : Aucun
Return		 : None
***********************************************************/
void Rayon::afficher() const
{

	cout << "|Categorie: " << setw(10) << categorie_ << endl;
	cout << "|Capacite: "  << setw(11) << capaciteProduits_ << endl;
	cout << "|Nombre de produits: " << setw(1) << nombreProduits_ << endl;
	cout << "+----------------------------+" << endl;

	for (int i = 0; i < nombreProduits_; i++)
	{
		tousProduits_[i]->afficher();
	}

	cout << endl;
}
