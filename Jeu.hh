#pragma once
#include<iostream>
#include<string>
#include "Evenement.hh"
#include "Meeting.hh"
#include "Parti_gauche.hh"
#include "Parti_droite.hh"
#include "Parti_blanc.hh"
#include "Candidat.hh"
#include "Question_journaliste.hh"
#include"Parti.hh"
#include <list>

#define FOND_INIT 10000
#define POP_INIT 33

class Jeu{
    protected:
		std::list<Evenement*> _evenements; // Liste des evenements, représente le plateau de jeux.
        	Candidat _candidats[3]; // Tableau contenant le joueur dans la case 0, et les AIs dans les autres(pour cette version, nous n'avons que 2 AIs) 

	public:
		// Constructeurs, destructeur & accesseurs
			Jeu();
        	Jeu(std::string, int);
        	//~Jeu();
        	std::list<Evenement*> get_evenements();
        	Candidat* get_candidats();


		// Desc : tour_joueur permet de déclencher les soutiens des lobbyistes et/ou associations, de déplacer le jour sur le plateau et de lancer un evenement,
		//				 sans déclencher le resultat de cet evenement.
		// Param : entier correspondant à un lancer de dé VALIDE		
		// Retour : string décrivant les actions produitent
        	std::string tour_joueur(int de);


		// Desc : tour_AI fait jouer de manière simplifier les AIs.		
		// Retour : string décrivant les actions produites
        	std::string tour_AI(); 

		// Desc : Teste si un des candidats à gagner.		
        	bool test_victoire();

		// Desc : Teste si le joueur à gagner.	
        	bool test_defaite();

		// Desc : Affiche le classement.		
        	std::string classement();

		// Desc : Affiche les informations du jeu.
        	std::string print();
};
