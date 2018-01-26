#include <iostream>
#include "Produit.h"

using namespace std;

Produit::Produit() {
	reference_ = 0;
	prix_ = 0.0;
	nom_ = "outil";
}
Produit::Produit(string nom, int reference, double prix):nom_(nom),reference_(reference),prix_(prix) {
}
string Produit::obtenirNom() {
	return nom_;
}
double Produit::obtenirPrix() {
	return prix_;
}
int Produit::obtenirReference() {
	return reference_;
}
void Produit::modifierNom(string nom) {
	nom_ = nom;
}
void Produit::modifierReference(int reference) {
	reference_ = reference;
}
void Produit::modifierPrix(double prix) {
	prix_=prix;
}
void Produit::afficher() {
	cout << "Nom: " << nom_ << "\n" << "Reference: " << reference_ << "\n" << "Prix: " << prix_ << endl;
}