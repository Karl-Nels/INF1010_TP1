/*****************************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
* Editeurs : Fenjiro Mohamed(1901744) & Karl Nelson SOMO(1859229)
******************************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "client.h"
#include "panier.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	//C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments

	//1-  Creez 15 objets du classe produit
	Produit Produit1, Produit2, Produit3, Produit4, Produit5, Produit6, Produit7, Produit8, Produit9,
		Produit10, Produit11, Produit12, Produit13, Produit14, Produit15;
    
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit
	
	Produit3.modifierNom("Steamboard2.0");
	Produit3.modifierReference(81111612);
	Produit3.modifierPrix(38.95);
	Produit3.afficher();
	
	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon Rayon1;

	//4-  Modifiez la catégorie  du rayon   
	Rayon1.modifierCategorie("Electronique");

    // 5- Ajouter 6 produits de  votre choix dans le rayon créé
	Rayon1.ajouterProduit(&Produit3);
	Rayon1.ajouterProduit(&Produit2);
	Rayon1.ajouterProduit(&Produit3);
	Rayon1.ajouterProduit(&Produit4);
	Rayon1.ajouterProduit(&Produit5);
	Rayon1.ajouterProduit(&Produit3);

    // 6- afficher le contenu du rayon
	Rayon1.afficher();
  
	//7-  Creez un objet de classe client à l'aide du constructeur
   
	Client client1("SOMO OSSOAL", "Karl Nelson", 1859229, "H3X 2L6", 199607);

	//8-  afficher l'etat des attributs du client

	client1.afficherPanier();

	//9-   Le client achete 9 produits
	
	client1.acheter(&Produit3);
	client1.acheter(&Produit3);
	client1.acheter(&Produit3);
	client1.acheter(&Produit3);
	client1.acheter(&Produit3);
	client1.acheter(&Produit3);
	client1.acheter(&Produit3);
	client1.acheter(&Produit3);
	client1.acheter(&Produit9);

	//10- Afficher le contenu du panier du client
	client1.afficherPanier();

     //11- livrer le panier du client

	client1.livrerPanier();
    
	//12- afficher le contenu du panier du client
	client1.afficherPanier();
    
	//13-  terminer le programme correctement
    
    return 0;
}
