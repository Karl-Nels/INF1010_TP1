/******************************************************************
* Titre: Travail pratique #1 - Panier.cpp
* Date: 26 janvier 2018
* Auteurs: Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/

#include <iostream>
#include "panier.h"

using namespace std;

Panier::Panier() :capaciteContenu_(0), nombreContenu_(0), totalAPayer_(0.0) {


}

Panier::Panier(int capacite):capaciteContenu_(capacite),nombreContenu_(0),totalAPayer_(0.0), contenuPanier_(new Produit *[capacite]){

}

Produit ** Panier::obtenirContenuPanier() const{

	return contenuPanier_;
}

int Panier::obtenirNombreContenu() const{

	return nombreContenu_;
}

double Panier::obtenirTotalApayer() const {

	return totalAPayer_;
}

void Panier::ajouter(Produit * prod) {

	if (capaciteContenu_ == nombreContenu_) {

		Produit ** copie = contenuPanier_;
		capaciteContenu_ *= 2;
		contenuPanier_ = new Produit*[capaciteContenu_];
		contenuPanier_ = copie;
		delete copie;
	}
	contenuPanier_[nombreContenu_++] = prod;
	totalAPayer_ += contenuPanier_[nombreContenu_]->obtenirPrix();
}

void Panier::livrer() {

	for (unsigned i = 0; i < nombreContenu_; i++) {
		delete contenuPanier_[i];
	}

	delete contenuPanier_;
	contenuPanier_ = nullptr;
	nombreContenu_ = 0;
	totalAPayer_ = 0.0;
	contenuPanier_ = new Produit*[capaciteContenu_];

}
void Panier::afficher() const{

	for (unsigned i = 0; i < nombreContenu_; i++) {

		contenuPanier_[i]->afficher();
	}

}