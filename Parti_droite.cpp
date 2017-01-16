#include "Parti_droite.hh"

using namespace std;

Parti_droite::Parti_droite(): Parti(),_lobbyistes(0){}
Parti_droite::Parti_droite(string nom,int fond,int popularite,int lobby): Parti(nom,fond,popularite), _lobbyistes(lobby){}
Parti_droite::~Parti_droite(){}
id_parti Parti_droite::get_id() { return bleu; }



string Parti_droite::appliquer_soutien(){
	string ret;
	_fond += _lobbyistes*100; 
	ret = "vos lobbyistes vous offrent " + to_string(_lobbyistes*100) + " de fonds supplémentaires !\n" ;
	return ret;
}

string Parti_droite::to_String(){
    string ret = Parti::to_String() + "Nombre de lobbyistes : " + std::to_string(_lobbyistes) + "\n";
    return ret;
}


string Parti_droite::soutien() {
 this->_lobbyistes ++;
    string ret = "Un nouveau lobbyiste vous soutient ! \n";
    return ret;
}
