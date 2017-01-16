#include "Parti_blanc.hh"

using namespace std;

Parti_blanc::Parti_blanc(): Parti(),Parti_gauche(),Parti_droite(){}

Parti_blanc::Parti_blanc(string nom,int fond,int popularite,int lobby,int asso): Parti(nom,fond,popularite),Parti_gauche(nom,fond,popularite,asso),Parti_droite(nom,fond,popularite,lobby){}// les appels a Parti() depuis parti bleu ou rouge seront ignorés.

id_parti Parti_blanc::get_id() { return blanc; }


string Parti_blanc::soutien() {
    string ret =Parti_droite::soutien()+ Parti_gauche::soutien();
    return ret;
}

string Parti_blanc::appliquer_soutien(){
	string ret = Parti_droite::appliquer_soutien() + Parti_gauche::appliquer_soutien();
	return ret;
}

string Parti_blanc::to_String(){
    string ret = Parti::to_String() + "Nombre d'associations : " + std::to_string(_assos) +'\n'+ "Nombre de lobbyistes : "+ std::to_string(_lobbyistes)+ "\n";
    return ret;
}


