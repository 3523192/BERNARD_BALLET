#include "Parti_gauche.hh"

using namespace std;

Parti_gauche::Parti_gauche(): Parti(),_assos(0){}
Parti_gauche::Parti_gauche(string nom,int fond,int popularite,int asso): Parti(nom,fond,popularite),_assos(asso){}
Parti_gauche::~Parti_gauche(){}
id_parti Parti_gauche::get_id() { return rouge; }


string Parti_gauche::to_String(){
    string ret = Parti::to_String() + "Nombre d'associations : " + std::to_string(_assos) + "\n";
    return ret;
}

string Parti_gauche::appliquer_soutien(){
	string ret;
	_popularite += _assos*5; 
	ret = "vos associations vous permettent de gagner " + to_string(_assos*5) + " de popularite !\n" ;
	return ret;
}

string Parti_gauche::soutien() {
 this->_assos++;
    string ret = "Une nouvelle association vous soutient ! \n";
    return ret;
}
