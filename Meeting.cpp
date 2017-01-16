#include"Meeting.hh"

using namespace std;

Meeting::Meeting(std::string descriptif,id_parti id):Evenement(descriptif), _parti_compatible(id) {}

Meeting::~Meeting(){}

string Meeting::get_descriptif(){ return _descriptif + " Voulez-vous participez a ce meeting?\n 1/Oui \t 0/non\n"; }

std::string Meeting::resultat(Parti* _parti,unsigned int decision,bool* valide){
	string res;
	if(decision<0 || decision > 1){
			*valide = false;
			res = "Nous n'avons pas compris votre réponse\n"; 
	}
	else{
		*valide = true;
		if(decision == 1){
			id_parti i_parti = _parti->get_id();

			if(i_parti == _parti_compatible){
				res = "Votre presence est aprecie ! " + _parti->soutien();
				return res;
			}
			res = "Ce meeting n'est pas accord avec les idees de votre parti, on vous jette dehors ! Votre popularite baisse...\n";
			_parti->set_popularite((_parti->get_popularite()) - 10);
		}
		else{
			res = "Vous ne participez pas au meeting, c'est peut-etre mieux ...\n";
		}
	}
	return res;
}
