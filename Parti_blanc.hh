 #pragma once
#include"Parti_gauche.hh"
#include"Parti_droite.hh"

class Parti_blanc : public Parti_gauche,public Parti_droite{

	public:
			Parti_blanc();
			Parti_blanc(std::string,int,int,int,int);
			~Parti_blanc();
			id_parti get_id(); // retourne blanc
        	std::string soutien();
			std::string appliquer_soutien();
        	std::string to_String();
};
