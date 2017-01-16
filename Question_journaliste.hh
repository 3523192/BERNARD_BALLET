#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Evenement.hh"

class Question_journaliste: public Evenement{

    	protected:
        	std::vector<std::string> _reponses;
		unsigned int _indice_bonne_reponse;

	public:
			// Constructeurs, destructeur & accesseur
	    	Question_journaliste(std::string, std::vector<std::string>,int);
	    	~Question_journaliste();    
	    	int get_indice_reponse();
	    	void set_reponses(std::vector<std::string>,int);
	    	
			std::string resultat(Parti*,unsigned int,bool*);
			
			//get_descriptif de Question_journaliste() revoie aussi les reponses.
			std::string get_descriptif();

};
