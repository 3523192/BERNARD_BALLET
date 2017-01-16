#include"Question_journaliste.hh"

using namespace std;

Question_journaliste::Question_journaliste(std::string descriptif, vector<string> reponses,int indice_bonne_reponse):Evenement(descriptif){
this->set_reponses(reponses,indice_bonne_reponse);
}

string Question_journaliste::get_descriptif(){
    string ret;
    ret = _descriptif + "\n" ;
    for(unsigned int i = 0 ; i<_reponses.size() ; i++)
        ret += _reponses[i] + "\n";
    return ret;
}


int Question_journaliste::get_indice_reponse(){
return _indice_bonne_reponse;
}
void Question_journaliste::set_reponses(vector<string> reponses,int indice_bonne_rep){
    for(unsigned int i=0;i<reponses.size();i++)
        _reponses.push_back(reponses[i]);

    _indice_bonne_reponse = indice_bonne_rep;
}
Question_journaliste::~Question_journaliste(){}

std::string Question_journaliste::resultat(Parti* _parti,unsigned int reponse, bool* valide){
    string res;
    int pop = 0;
    int pop_de_depart = (_parti->get_popularite());
    pop = rand()%3*5+1;
	if(reponse <1 || reponse >_reponses.size()){
		*valide = false;
		res = "Nous n'avons pas compris votre réponse\n";
	}else{
		*valide = true;
		if(reponse == _indice_bonne_reponse){
			_parti->set_popularite(pop_de_depart + pop);
			res = "Bravo! Vous avez gagne " + std::to_string(pop) +" de popularite durant cette seance d'interview\n";
			return res;
		}

		_parti->set_popularite(pop_de_depart - pop);
		res = "Mauvaise reponse... Vous avez perdu " + std::to_string(pop) +" de popularite durant cette séance d'interview\n";
	}
	return res; 
}
