/******************************************************************
* Titre: Travail pratique #1 - Produit.cpp
* Date: 26 janvier 2018
* Auteurs: Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/
#include <iostream>
#include "Produit.h"

using namespace std;

/***************************************************************************
Fonction	 : Produit() constructeur par defaut (construit l'objet Produit avec
ses parametres).
Parametres   : Aucun
Return		 : Aucun
****************************************************************************/
Produit::Produit()
{
	reference_ = 0;
	prix_ = 0.0;
	nom_ = "outil";
}


/************************************************************
Fonction	 : Constructeurr par parametres (construit
l'objet "Produit" et  assigne les valeurs en parametres
a ses attributs.
Parametres   : Entrees => string nom, int reference, double prix 
Return		 :  Un objet de type "Produit"
************************************************************/
Produit::Produit(string nom, int reference, double prix):nom_(nom),reference_(reference),prix_(prix)
{

}

/************************************************************
Fonction	 :	Destructeur (Detruit l'objet)
************************************************************/
Produit::~Produit()
{

}


/****************************************************
Fonction	 : Accesseur (retourne la valeur de nom_)
Parametres   : Aucun
Return		 : string (nom_)
*****************************************************/
string Produit::obtenirNom() const
{
	
	return nom_;
}

/*****************************************************
Fonction	 : Accesseur (retourne la valeur de prix_)
Parametres   : Aucun
Return		 : Type double (prix_)
******************************************************/
double Produit::obtenirPrix() const
{
	
	return prix_;
}

/***************************************************
Function	 : Accesseur (retourne la reference_)
Parametres   : Aucun
Return		 : Type int (reference_)
***************************************************/
int Produit::obtenirReference() const
{

	return this->reference_;
}

/**********************************************************
Fonction	 : Modificateur (modifie le nom de l'objet)
Parametres   : Type string(nom)
Return		 : None
***********************************************************/
void Produit::modifierNom(string nom)
{
	
	nom_ = nom;
}

/***************************************************************
Fonction	 : Modificateur (modifie la reference de l'objet)
Parametres   : Type int(reference)
Return		 : None
****************************************************************/
void Produit::modifierReference(int reference)
{
	
	reference_ = reference;
}

/***************************************************************
Fonction	 : Modificateur (modifie le prix de l'objet)
Parametres   : Type double(prix)
Return		 : None
****************************************************************/
void Produit::modifierPrix(double prix)
{
	
	prix_ = prix;
}

/******************************************************************
Fonction	 : Methode (Affiche tous les attributs de l'objet )
Parametres   : Aucun
Return		 : None
******************************************************************/
void Produit::afficher() const
{
	cout << "+----------------------------+" << endl;
	cout << "| Nom : " << setw(10) << nom_ << endl;
	cout << "| Reference : " << setw(10) << reference_ << endl;
	cout << "| Prix : " << setw(10)  << prix_ << "$" <<  endl;
}