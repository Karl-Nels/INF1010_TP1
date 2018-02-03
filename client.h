
//  client.h
//  Created by Martine Bellaiche on 18-01-22.
//  Copyright © 2018 Martine Bellaiche. All rights reserved.
//	Edited by Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)

#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include "panier.h"
using namespace std;
class Client
{
public:
	//Client::Client();
	Client(string  nom, string prenom, int identifiant, string codePostal, long date);
    // methodes d'acces
    
    string obtenirNom() ;
    string obtenirPrenom() ;
    int obtenirIdentifiant() ;
    string obtenirCodePostal() ;
    long obtenirDateNaissance() ;
    
    // methodes de modification
    void modifierNom(string nom) ;
    void modifierPrenom(string prenom) ;
    void modifierIdentifiant(int identifiant) ;
    void modifierCodePostal(string codePostal);
    void modifierDateNaissance(long date);
    
    // autres méthodes
    void acheter (Produit * prod);
    void afficherPanier();
    void livrerPanier();
    
    
private:
    
    string nom_;
    string prenom_;
    int identifiant_;
    string codePostal_;
    long dateNaissance_;
    Panier *  monPanier_;
};
#endif /* client_h */
