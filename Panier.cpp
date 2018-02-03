/******************************************************************
* Titre: Travail pratique #1 - Panier.cpp
* Date: 26 janvier 2018
* Auteurs: Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/

#include <iostream>
#include "panier.h"

using namespace std;

/***************************************************************************
Function	 : Default Constructor (build the object "Panier" with its
attributes initialized).
Parameters   : None
Return		 : None
****************************************************************************/
Panier::Panier() :capaciteContenu_(0), nombreContenu_(0), totalAPayer_(0.0), contenuPanier_(nullptr)
{

	for (int i = 0; i < nombreContenu_; i++) {
		
	}

}

/**********************************************************
Function	 : Constructor with parameters (build the
object "Panier" and assign parameters to its attributes
the values of the parameters).
Parameters   : Inputs => int capacite
Return		 : Type  "Panier"
************************************************************/
Panier::Panier(int capacite):capaciteContenu_(capacite),nombreContenu_(0),totalAPayer_(0.0), contenuPanier_(nullptr)
{

}

/***************************************************
Function	 : Accessor (Get the Object Contents)
Parameters   : None
Return		 : Pointer table, type "Produit"
***************************************************/
Produit ** Panier::obtenirContenuPanier() const
{

	return contenuPanier_;
}

/***************************************************
Function	 : Accessor (Get the Object table size)
Parameters   : None
Return		 : Type int (nombreContenu_)
***************************************************/
int Panier::obtenirNombreContenu() const
{

	return nombreContenu_;
}

/***************************************************
Function	 : Accessor (Get the amount to pay)
Parameters   : None
Return		 : Type string (totalAPayer_)
***************************************************/
double Panier::obtenirTotalApayer() const
{

	return totalAPayer_;
}

/****************************************************
Function	: Method( add a product into the Bucket )
Parameters	: Produit * prod
Return		: None
****************************************************/
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
Function	 : Method (Delete the bucket contents)
Parameters   : None
Return		 : None
***************************************************/
void Panier::livrer()
{
	contenuPanier_ = nullptr;
	nombreContenu_ = 0;
	totalAPayer_ = 0.0;
	capaciteContenu_ = 1;

}

/***************************************************
Function	 : Method (print the bucket values)
Parameters   : None
Return		 : None
***************************************************/
void Panier::afficher() const
{

	for (int i = 0; i < nombreContenu_; i++)
	{

		contenuPanier_[i]->afficher();
		cout << endl;
		cout << "Total: " << totalAPayer_ << " $" << endl;
	}

	cout << endl;
}