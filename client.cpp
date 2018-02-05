/******************************************************************
* Titre: Travail pratique #1 - client.cpp
* Date: 26 janvier 2018
* Auteurs: Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/

#include <iostream>
#include "client.h"

using namespace std;


/**********************************************************
Fonction	 : Constructeur par parametres (construit
l'objet "Client" et assigne respectivement a ses attributs
les valeurs en parametres.
Parametres   : Entrees => int capacite
Return		 : Type  "Client"
************************************************************/
Client::Client(string nom, string prenom, int identifiant, string codePostal, long date): nom_(nom),
prenom_(prenom), identifiant_(identifiant), codePostal_(codePostal),dateNaissance_(date),monPanier_(nullptr)
{

}

/******************************************************
Fonction	 : Destructeur (supprime l'objet).
*******************************************************/
Client::~Client() {
		
		delete monPanier_;
		monPanier_ = nullptr;
}

/***************************************************
Fonction	 : Accesseur (renvoie le nom de l'objet )
Parametres   : None
Return		 : string
***************************************************/
string Client::obtenirNom()
{
	return nom_;
}

/******************************************************
Fonction	 : Accesseur (renvoie le prenom de l'objet)
Parametres   : None
Return		 : String
*******************************************************/
string Client::obtenirPrenom()
{
	return prenom_;
}


/*********************************************************
Fonction	 : Accesseur (renvoie l'identifiant de l'objet)
Parametres   : None
Return		 : int
*******************************************************/
int Client::obtenirIdentifiant()
{

	return identifiant_;
}

/***********************************************************
Fonction	 : Accesseur (renvoie le code postal du client)
Parametres   : None
Return		 : String
***********************************************************/
string Client::obtenirCodePostal()
{

	return codePostal_;
}

/******************************************************
Fonction	 : Accesseur (renvoie la date de naissance
du client)
Parametres   : None
Return		 : Long
*******************************************************/
long Client::obtenirDateNaissance()
{

	return dateNaissance_;
}

/******************************************************
Fonction	 : modificateur (modifie le nom du client.
Parametres   : Aucun
Return		 : None
*******************************************************/
void Client::modifierNom(string nom)
{

	nom_ = nom;
}

/******************************************************
Fonction	 : modificateur (modifie le prenom du client.
Parametres   : Aucun
Return		 : None
*******************************************************/
void Client::modifierPrenom(string prenom)
{

	prenom_ = prenom;
}

/**********************************************************
Fonction	 : Modificateur (modifie l'identifiant)
Parametres   : Aucun
Return		 : Rien
*******************************************************/
void Client::modifierIdentifiant(int identifiant)
{

	identifiant_ = identifiant;
}

/******************************************************
Fonction	 : Modificateur (modifie le code postal du
 client).
Parametres   : Aucun
Return		 : Rien
*******************************************************/
void Client::modifierCodePostal(string codePostal)
{

	codePostal_ = codePostal;
}

/******************************************************
Fonction	 : modificateur (modifie la date de  
naissance pour le client.
Parametres   : Aucun
Return		 : None
*******************************************************/
void Client::modifierDateNaissance(long date)
{
	dateNaissance_ = date;
}

/******************************************************
Fonction	 : Methode (acheter un produit et le mettre
dans le panier du piment). 
Parametres   : Aucun
Return		 : None
*******************************************************/
void Client::acheter(Produit * prod)
{

	if ( monPanier_ == nullptr){
		monPanier_ = new Panier(4);
	}
		monPanier_->ajouter(prod);
}

/******************************************************
Fonction	 : Methode (affiche le contenu du panier)
Parametres   : Non
Return		 : String
*******************************************************/
void Client::afficherPanier()
{

	if (monPanier_ != nullptr)
		monPanier_->afficher();

	else
		cout << "M. " << nom_ <<  " votre Panier est vide !" << endl << endl ;
						
}

/************************************************************
Fonction	 : Methode (SUpprime le contenu du panier client )
Parametres   : None
Return		 : String
************************************************************/
void Client::livrerPanier()
{

	monPanier_->livrer();
	
/*if(monPanier_ == nullptr)
		cout << "Le panier a ete vide!" << endl;
		*/
}
