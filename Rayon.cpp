#include <iostream>
#include "Rayon.h"

using namespace std;

Rayon::Rayon():categorie_("inconnue"),tousProduits_(nullptr),capaciteProduits_(0),nombreProduits_(0){

}
Rayon::Rayon(string cat) : categorie_(cat), tousProduits_(nullptr), capaciteProduits_(0), nombreProduits_(0) {

}
string Rayon::obtenirCategorie() {
	return categorie_;
}
Produit ** Rayon::obtenirTousProduits() {

	return this->tousProduits_;
}
int Rayon::obtenirCapaciteProduits() {
	return capaciteProduits_;
}
int Rayon::obtenirNombreProduits(){
	return nombreProduits_;
}
void Rayon::modifierCategorie(string cat) {
	categorie_ = cat;
}
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
void Rayon::afficher() {
	cout << "Categorie: " << categorie_ << "\n" << "Capacite: " << capaciteProduits_ << "\n" << "Nombre de produits: " << nombreProduits_ << endl;
	for (unsigned i = 0; i < nombreProduits_; i++) {
		tousProduits_[i]->afficher();
	}
}
