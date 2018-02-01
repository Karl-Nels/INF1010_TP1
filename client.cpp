/******************************************************************
* Titre: Travail pratique #1 - client.cpp
* Date: 26 janvier 2018
* Auteurs: Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/

#include <iostream>
#include "client.h"

using namespace std;


Client::Client(string nom, string prenom, int identifiant, string codePostal, long date): nom_(nom),
prenom_(prenom), identifiant_(identifiant), codePostal_(codePostal),dateNaissance_(date),monPanier_(nullptr)
{

}

string Client::obtenirNom() {
	return nom_;
}

string Client::obtenirPrenom() {
	return prenom_;
}

int Client::obtenirIdentifiant() {

	return identifiant_;
}

string Client::obtenirCodePostal() {

	return codePostal_;
}

long Client::obtenirDateNaissance() {

	return dateNaissance_;
}

void Client::modifierNom(string nom) {

	nom_ = nom;
}

void Client::modifierPrenom(string prenom) {

	prenom_ = prenom;
}


void Client::modifierIdentifiant(int identifiant) {

	identifiant_ = identifiant;
}

void Client::modifierCodePostal(string codePostal) {

	codePostal_ = codePostal;
}

void Client::modifierDateNaissance(long date) {
	dateNaissance_ = date;
}

void Client::acheter(Produit * prod) {

	if ( monPanier_ == nullptr){
		monPanier_ = new Panier(4);
	}
		monPanier_->ajouter(prod);
}

void Client::afficherPanier() {

	if (monPanier_ != nullptr)
		monPanier_->afficher();
	else
		cout << "Votre Panier est vide !" << endl;
						
}

void Client::livrerPanier() {

	monPanier_->livrer();
	
	if(monPanier_ == nullptr)
		cout << "Le panier a ete vide!" << endl;

}
