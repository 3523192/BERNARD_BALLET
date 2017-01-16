#pragma once
#include"Parti.hh"

class Parti_gauche: virtual public Parti{

    	protected :
	// Les partis de gauche possèdent un attribut qui représente le nombre d'associations les soutenants(certains evenements permettent de gagner des assos)
	// Les assos permettent de gagner de la populartié à chaque tours.
        	int _assos;
	// Cette fonction sert à augmenter _assos de 1, et renvoie un string décrivant ce gain.
        	

	public:
		// Constructeurs, destructeur & accesseurs
	    	Parti_gauche();
	    	Parti_gauche(std::string,int,int,int);
	    	~Parti_gauche();
		id_parti get_id(); // retourne rouge

		// Desc : Renvoie les informations sur le parti.
        	std::string to_String();

		// Desc : Applique le gain de fonds popularité donné par les assos.		
		// Retour : string décrivant l'action produite.
		std::string appliquer_soutien();

        	std::string soutien();

};
