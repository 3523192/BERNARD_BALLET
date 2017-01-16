#pragma once
#include<iostream>
#include<string>
#include"Evenement.hh"
#include"Candidat.hh"
#include"cstdlib"


class Meeting : public  Evenement{
    	private :
        	id_parti _parti_compatible;
	public:
		// Constructeurs, destructeur & accesseur
	    	Meeting(std::string,id_parti);
	    	~Meeting();
		std::string get_descriptif();
		std::string resultat(Parti*,unsigned int,bool*);
};
