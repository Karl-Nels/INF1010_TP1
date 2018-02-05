/******************************************************************
* Titre: Travail pratique #1 - Panier.cpp
* Date: 26 janvier 2018
* Auteurs: Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/

#include <iostream>
#include "panier.h"

using namespace std;

/***************************************************************************
Fonction	 : Constructeur par defaut (initialise l'objet "Panier" avec ses
attributs par defaut).
Parametres   : Aucun
Return		 : None
****************************************************************************/
Panier::Panier() :capaciteContenu_(0), nombreContenu_(0), totalAPayer_(0.0), contenuPanier_(nullptr)
{

	for (int i = 0; i < nombreContenu_; i++) {
		
	}

}

/**********************************************************
Fonction	 : Constructeur par parametres (construit
l'objet "Panier" et assigne respectivement a ses attributs
les valeurs en parametres.
Parametres   : Entrees => int capacite
Return		 : Type  "Panier"
************************************************************/
Panier::Panier(int capacite):capaciteContenu_(capacite),nombreContenu_(0),totalAPayer_(0.0), contenuPanier_(nullptr)
{

}


/***********************************************************
Fonction	 : Destructeur (supprime l'objet)
Parametres   : Aucun
Return		 : None
************************************************************/
Panier::~Panier()
{

	delete[] contenuPanier_;
	contenuPanier_ == nullptr;
}

/***************************************************
Fonction	 : Accesseur (renvoie le tableau de
pointeurs)
Parametres   : None
Return		 : Pointer table, type "Produit"
***************************************************/
Produit ** Panier::obtenirContenuPanier() const
{

	return contenuPanier_;
}

/******************************************************
Fonction	 : Accesseur (renvoie la taille du tableau)
Parameters   : None
Return		 : Type int (nombreContenu_)
******************************************************/
int Panier::obtenirNombreContenu() const
{

	return nombreContenu_;
}

/***************************************************
Fonction	 : Accesseur (renvoie le total a payer)
Parametres   : Aucun
Return		 : Type string (totalAPayer_)
***************************************************/
double Panier::obtenirTotalApayer() const
{

	return totalAPayer_;
}

/********************************************************
Fonction	: Methode( ajoute un produit dans le panier )
Parametres	: Produit * prod
Return		: None
********************************************************/
void Panier::ajouter(Produit * produit)
{


	if (contenuPanier_ == nullptr)
	{
		contenuPanier_ = new Produit*[capaciteContenu_];
		contenuPanier_[nombreContenu_] = produit;
		nombreContenu_++;
	}
	else if (capaciteContenu_ == nombreContenu_) {

		Produit ** copie = new Produit*[capaciteContenu_];
		for (int i = 0; i < capaciteContenu_; i++)
		{
			copie[i] = contenuPanier_[i];
		}
		capaciteContenu_ *= 2;
		contenuPanier_ = new Produit*[capaciteContenu_];
		for (int i = 0; i < capaciteContenu_; i++)
		{
			contenuPanier_[i] = copie[i];
		}
		delete copie;
		contenuPanier_[nombreContenu_++] = produit;
	}
	else
	{
		contenuPanier_[nombreContenu_] = produit;
		nombreContenu_++;
	}

	totalAPayer_ += contenuPanier_[nombreContenu_ - 1]->obtenirPrix();
}

/***************************************************
Fonction	 : Methode (supprime le contenu du panier)
Parametres   : None
Return		 : None
***************************************************/
void Panier::livrer()
{
	delete[] contenuPanier_;
	contenuPanier_ = nullptr;
	nombreContenu_ = 0;
	totalAPayer_ = 0.0;
	capaciteContenu_ = 1;
}

/**********************************************************
Fonction	 : Methode (Affiche les valeurs dans le panier)
Parametres   : None
Return		 : None
***********************************************************/
void Panier::afficher() const
{

	for (int i = 0; i < nombreContenu_; i++)
	{

		contenuPanier_[i]->afficher();
	}
	if(totalAPayer_ != 0)
		cout << "Total: " << totalAPayer_ << " $" << endl << endl;
		
}