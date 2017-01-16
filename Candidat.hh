#pragma once
#include<iostream>
#include<string>
#include"Parti.hh"
class Candidat{
	protected:
		std::string _nom;
		Parti* _parti;
		unsigned int _position;

	public:
		// Constructeurs, destructeur & accesseurs
	    	Candidat();
	    	Candidat(std::string,Parti*);
	    	~Candidat();
	    	std::string get_nom();
	    	std::string get_nom() const;
	    	Parti* get_parti();
	    	unsigned int get_position();
		void set_nom(std::string);
	    	void set_parti(Parti*);
	    	void set_position(int);

		// Desc : Permet de convertir les fonds du parti en popularité.		
		// Retour : string décrivant les actions produites.
		std::string acheter_popularite(int);
		std::string to_String();

		Candidat& operator=(Candidat arg);

		bool operator<(const Candidat &arg) const; 
		bool friend operator>(Candidat &c1,Candidat &c2){ return c2 < c1;}

};
