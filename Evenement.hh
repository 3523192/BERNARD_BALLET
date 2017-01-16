#pragma once
#include<iostream>
#include<string>
#include"Parti.hh"


class Evenement{
	protected:
		std::string _descriptif; // descriptif de l'evenement

	public:
		// Constructeurs & accesseurs
	    Evenement(std::string);
	    virtual ~Evenement(){};
	    virtual std::string get_descriptif(); 
	    void set_descriptif(std::string);
	    
	    // Desc : Applique le resultat (+- fonds, +- populartié) de l'evenement au parti passer en argument
		// Param : pointeur sur le parti conserné, entier correspondant à la reponse, pointeur sur booleen 		
		// Retour : string décrivant les actions produitent, modifira le booléen (vraie si l'entier reponse est valide, faux sinon)
	    virtual std::string resultat(Parti*,unsigned int,bool*)= 0; 
};
