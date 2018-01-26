#include <iostream>
#include "panier.h"

using namespace std;

Panier::Panier(int capacite):capaciteContenu_(capacite),nombreContenu_(0),totalAPayer_(0.0), contenuPanier_(new Produit *[capacite]){

}

Produit ** Panier::obtenirContenuPanier() {

	return contenuPanier_;
}

int Panier::obtenirNombreContenu() {

	return nombreContenu_;
}

double Panier::obtenirTotalApayer() {

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
void Panier::afficher() {


}