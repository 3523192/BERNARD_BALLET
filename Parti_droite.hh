#pragma once
#include"Parti.hh"

class Parti_droite: virtual public Parti{
    	protected:
	// Les partis de droite possèdent un attribut qui représente le nombre de lobbyistes gagné jusqu'à maitenant (certains evenements permettent de gagner des lobbyistes)
	// Les lobbyistes permettent de gagner des fonds à chaque tours.
        	int _lobbyistes; 
	// Cette fonction sert à augmenter _lobbyistes de 1, et renvoie un string décrivant ce gain.
        	

	public:
		// Constructeurs, destructeur & accesseurs
	    	Parti_droite();
	    	Parti_droite(std::string,int,int,int);
	    	~Parti_droite();
		id_parti get_id(); // retourne bleu

		// Desc : Renvoie les informations sur le parti.
		std::string to_String();

		// Desc : Applique les dons de fonds des lobbyistes.		
		// Retour : string décrivant l'action produite.
		std::string appliquer_soutien();


		std::string soutien();
};
