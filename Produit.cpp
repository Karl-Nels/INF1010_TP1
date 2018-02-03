/******************************************************************
* Titre: Travail pratique #1 - Produit.cpp
* Date: 26 janvier 2018
* Auteurs: Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/
#include <iostream>
#include "Produit.h"

using namespace std;

/***************************************************************************
Function	 : Default Constructor (build the object "Produit" with its
attributes initialized).
Parameters   : None
Return		 : None
****************************************************************************/
Produit::Produit()
{
	reference_ = 0;
	prix_ = 0.0;
	nom_ = "outil";
}


/**********************************************************
Function	 : Constructor with parameters (build the
object "Produit" and assign parameters to its attributes
the values of the parameters).
Parameters   : Inputs => string nom, int reference, double prix 
Return		 : Type  "Produit"
************************************************************/
Produit::Produit(string nom, int reference, double prix):nom_(nom),reference_(reference),prix_(prix)
{

}

/************************************************************
Function	 :	Destructor (Delete the object)
Parameters   :	None
Return		 :	None
************************************************************/
Produit::~Produit()
{

}


/***************************************************
Function	 : Accessor (Get the name value)
Parameters   : None
Return		 : Type string (nom_)
***************************************************/
string Produit::obtenirNom() const
{
	
	return nom_;
}

/***************************************************
Function	 : Accessor (Get the price value)
Parameters   : None
Return		 : Type double (prix_)
***************************************************/
double Produit::obtenirPrix() const
{
	
	return prix_;
}

/***************************************************
Function	 : Accessor (Get the reference value)
Parameters   : None
Return		 : Type int (reference_)
***************************************************/
int Produit::obtenirReference() const
{

	return this->reference_;
}

/**********************************************************
Function	 : Modificator (change the object's name value)
Parameters   : Type string(nom)
Return		 : None
***********************************************************/
void Produit::modifierNom(string nom)
{
	
	nom_ = nom;
}

/***************************************************************
Function	 : Modificator (change the object's reference value)
Parameters   : Type int(reference)
Return		 : None
****************************************************************/
void Produit::modifierReference(int reference)
{
	
	reference_ = reference;
}

/***************************************************************
Function	 : Modificator (change the object's price value)
Parameters   : Type double(prix)
Return		 : None
****************************************************************/
void Produit::modifierPrix(double prix)
{
	
	prix_ = prix;
}

/******************************************************************
Method Class : Produit
Function	 : Method (print the object's attributes in the console)
Parameters   : None
Return		 : None
******************************************************************/
void Produit::afficher() const
{
	
	cout << "Nom : " << nom_ << endl;
	cout << "Reference : " << reference_ << endl;
	cout << "Prix : " << prix_ << "$" <<  endl;
}