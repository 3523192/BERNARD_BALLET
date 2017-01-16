#pragma once
#include<iostream>
#include<sstream>
#include<string>
#define POP_MAX 100

// Ce type énuméré nous permet de reconnaitre facilement les partis (certains evenements son spécifique à un parti) .
// Nous n'avons pas d'attributs id_parti dans la classe parti car nous n'en avons pas besoin, nous redéfinissons seulement get_id()
enum id_parti{
    bleu,
    blanc,
    rouge
};

class Parti{
	protected:
			std::string _nom;
			int _fond;
			int _popularite;

	public:
		// Constructeurs, destructeur & accesseurs
	    	Parti();
			Parti(std::string, int, int);
			~Parti(){};
			std::string get_nom();
			int get_fond();
        	int get_popularite();
			void set_nom(std::string);
			void set_fond(int);
			void set_popularite(const int);
			void add_popularite(int);
			void add_fond(int);
        	virtual id_parti get_id()= 0;

		// Ces fonctions sont spécifique aux classes filles de Parti
        	virtual std::string soutien() = 0;
			virtual std::string appliquer_soutien() = 0;

		// Desc : Renvoie les informations sur le parti.		
        	virtual std::string to_String();

		// Desc : Cet opérateur nous sert à comparer les partis selon leur populartié
        	bool operator< (Parti &p);
        	bool friend operator>(Parti &p1,Parti &p2){ return p2 < p1;}

};
