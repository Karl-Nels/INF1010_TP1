/******************************************************************
* Titre: Travail pratique #1 - Rayon.cpp
* Date: 26 janvier 2018
* Auteurs: Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/

#include <iostream>
#include "Rayon.h"

using namespace std;

/***************************************************************************
Method Class : Rayon
Function	 : Default Constructor (build the object "Rayon" with its
attributes initialized).
Parameters   : None
Return		 : None
****************************************************************************/
Rayon::Rayon():categorie_("inconnue"),tousProduits_(nullptr),capaciteProduits_(0),nombreProduits_(0){

}

/***********************************************************
Method Class : Rayon
Function	 : Constructor with parameters (build the
object "Rayon" and assign parameters  to its attributes
the values of the parameters).
Parameters   : Inputs => string
Return		 : Type  "Produit"
************************************************************/
Rayon::Rayon(string cat) : categorie_(cat), tousProduits_(nullptr), capaciteProduits_(0), nombreProduits_(0) {

}


/***************************************************
Function	 : Accessor (Get the category value)
Parameters   : None
Return		 : Type string (categorie_)
***************************************************/
string Rayon::obtenirCategorie() const {
	return categorie_;
}


/***************************************************
Function	 : Accessor (Get the Product value)
Parameters   : None
Return		 : Type Produit (tousProduits_)
***************************************************/
Produit ** Rayon::obtenirTousProduits() const {

	return this->tousProduits_;
}

/***************************************************
Function	 : Accessor (Get the maximum value of
products allowed).
Parameters   : None
Return		 : Type int (capaciteProduits_)
***************************************************/
int Rayon::obtenirCapaciteProduits() const {
	return capaciteProduits_;
}

/***************************************************
Function	 : Accessor (Get the name value)
Parameters   : None
Return		 : Type int (nombreProduits_)
***************************************************/
int Rayon::obtenirNombreProduits() const{
	return nombreProduits_;
}

/**********************************************************
Function	 : Modificator (change the object's category value)
Parameters   : Type string(cat)
Return		 : None
***********************************************************/
void Rayon::modifierCategorie(string cat) {
	categorie_ = cat;
}

/**********************************************************
Function	 : Add a product to the pointer table with
dynamic allocation.
Parameters   : Type Produit* (produit)
Return		 : None
***********************************************************/
void Rayon::ajouterProduit(Produit * produit) {
	if (tousProduits_ == nullptr) {
		capaciteProduits_ = 5;
		tousProduits_ = new Produit*[capaciteProduits_];		
	}
	else if(nombreProduits_ == capaciteProduits_) {
		Produit** copie = tousProduits_;
		capaciteProduits_ += 5;
		tousProduits_ = new Produit*[capaciteProduits_];
		tousProduits_ = copie;
		delete copie;
	}
	tousProduits_[nombreProduits_++] = produit;

}

/**********************************************************
Function	 : Print the category,  capacity and number of
products.
Parameters   : None
Return		 : None
***********************************************************/
void Rayon::afficher() const{

	cout << "Categorie: " << categorie_ << endl;
	cout << "Capacite: " << capaciteProduits_ << endl;
	cout << "Nombre de produits: " << nombreProduits_ << endl;

	for (unsigned i = 0; i < nombreProduits_; i++) {
		tousProduits_[i]->afficher();
	}
}
