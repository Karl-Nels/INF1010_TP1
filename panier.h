
//  panier.cpp
//  Created by Martine Bellaiche on 18-01-22.
//  Copyright © 2018 Martine Bellaiche. All rights reserved.
//	Edited by Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)

#include <string>
#include "Produit.h"

#ifndef PANIER_H
#define PANIER_H
class Panier
{
public:
	//Constructeurs 
	Panier();
    Panier (int capacite);

	// Destructeur
	~Panier();
    // methodes d'accès
    Produit **  obtenirContenuPanier() const;
    int obtenirNombreContenu()  const;
    double obtenirTotalApayer() const;
    
    // méthodes de modification
    
    // autres méthodes
    void ajouter ( Produit * prod);
    void livrer();
    void afficher() const;

private:
    
    Produit ** contenuPanier_;
    int  nombreContenu_;
    int capaciteContenu_;
    double totalAPayer_;
};

#endif

