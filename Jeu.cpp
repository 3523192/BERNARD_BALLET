#include "Jeu.hh"
#include <set>

using namespace std;
bool Jeu::test_victoire(){
	for(int i = 0; i<3; i++ ){
		if( (((_candidats[i]).get_parti())->get_popularite()) >= POP_MAX){
			return true;
		}
	}
    return false;
}
bool Jeu::test_defaite(){
	
	if( (((_candidats[0]).get_parti())->get_popularite()) <= 0){
			return true;
		
	}
	return false;
}

list<Evenement*> Jeu::get_evenements(){ return _evenements; }
Candidat* Jeu::get_candidats(){ return _candidats; }

Jeu::Jeu(){}

Jeu::Jeu(string nom, int indice_parti){

//////////////////////////      Créer les partis & les candidats    ///////////////////////////////////////////////////

	
	Parti* parti_droite = new Parti_droite("Les Bleus",FOND_INIT,POP_INIT,0);
	Parti* parti_gauche = new Parti_gauche("Les Rouges",FOND_INIT,POP_INIT,0);
	Parti* parti_blanc = new Parti_blanc("Les Blancs",FOND_INIT,POP_INIT,0,0);

    switch (indice_parti){
            case 1 : 
					 _candidats[0] = Candidat(nom,parti_droite);
					 _candidats[1] = Candidat("Sanders",parti_blanc);
					 _candidats[2] = Candidat("Hillary",parti_gauche);
                     break;
                     
            case 2 : 
					 _candidats[0] = Candidat(nom,parti_gauche);
					 _candidats[1] = Candidat("Sanders",parti_blanc);
					 _candidats[2] = Candidat("The Donald",parti_droite);
                     break;
                     
            case 3 : 
					 _candidats[0] = Candidat(nom,parti_blanc);
					 _candidats[1] = Candidat("The Donald",parti_droite);
					 _candidats[2] = Candidat("Hillary",parti_gauche);
                     break;
            default :

                     break;
        }

///////////////////////////////      Créer les evenements     ///////////////////////////////////////////////////////////////

Meeting* case_0=new Meeting("case_depart", (_candidats[0].get_parti())->get_id());
Meeting* case_1=new Meeting("Interview france 3", bleu);
Meeting* case_2=new Meeting("Interview  France 4",  rouge);
Meeting* case_3=new Meeting("Les nuits debouts",  blanc);
Meeting* case_4=new Meeting("Manif pour tous",  bleu);
Meeting* case_5=new Meeting("Rally pour la légalisation du cannabis",  rouge);

vector<string> _reponses_case6;
_reponses_case6.push_back("1) 0 fois ");
_reponses_case6.push_back("2) 1 fois ");
_reponses_case6.push_back("3) 3 fois ");
_reponses_case6.push_back("4) 8 fois ");
Question_journaliste* case_6=new Question_journaliste("La boulette CDD de Myriam El Khomri! Un CDD peut etre reconduit combien de fois ? ",_reponses_case6,3);

vector<string> _reponses_case7;
_reponses_case7.push_back("1) Babelio");
_reponses_case7.push_back("2) belio ");
_reponses_case7.push_back("3) Balio ");
_reponses_case7.push_back("4) Babeo ");
Question_journaliste* case_7=new Question_journaliste("vous avez dit Prix Nobel ?Aidez  La Ministre de la Culture et de la Communication, Fleur Pellerin a citer un roman de l'ecrivain français Patrick Modiano avec lequel elle a dejeune ce midi? vite!! vite!!",_reponses_case7,1);


vector<string> _reponses_case8;
_reponses_case8.push_back("1) 76 ");
_reponses_case8.push_back("2) 14 ");
_reponses_case8.push_back("3) 18 ");
_reponses_case8.push_back("4) 63 ");
Question_journaliste* case_8=new Question_journaliste("Didier Migaud : Il faut savoir compter Donc 9 fois 7 ça fait combien ?",_reponses_case8,1);


vector<string> _reponses_case9;
_reponses_case9.push_back("1) Son style vestimentaire ");
_reponses_case9.push_back("2) Sa coupe de cheveux ");
_reponses_case9.push_back("3) Son ex-companon Francois Hollande ");
_reponses_case9.push_back("4) La reponse 3");
Question_journaliste* case_9=new Question_journaliste("Selon Arnaud Montebourg, quel est le seul defaut de Segolene Royal ?",_reponses_case9,4);

vector<string> _reponses_case10;
_reponses_case10.push_back("1) 1.8¤ ");
_reponses_case10.push_back("2) 2¤ ");
_reponses_case10.push_back("3) 4¤ ");
_reponses_case10.push_back("4) Le prix d'un ticket!");

Question_journaliste* case_10=new Question_journaliste("NKM decide de changer le prix du ticket de metro! Quel est son nouveau prix?",_reponses_case10,3);

vector<string> _reponses_case11;
_reponses_case11.push_back("1) L'Ingenu ");
_reponses_case11.push_back("2) Henriade");
_reponses_case11.push_back("3) Zaire ");
_reponses_case11.push_back("4) Zadig et Voltaire");
Question_journaliste* case_11=new Question_journaliste("Dans quel ouvrage de voltaire se plonge regulierement Frédéric Lefébvre ? ",_reponses_case11,4);

vector<string> _reponses_case12;
_reponses_case12.push_back("1) 1772 ");
_reponses_case12.push_back("2) 1913");
_reponses_case12.push_back("3) 1914 ");
_reponses_case12.push_back("4) 1918");
Question_journaliste* case_12=new Question_journaliste("Selon Bush, la reine Elisabeth serait nee en quelle annee? ",_reponses_case12,1);

vector<string> _reponses_case13;
_reponses_case13.push_back("1) Franc suisse ");
_reponses_case13.push_back("2) Franc CFA");
_reponses_case13.push_back("3) Euro");
_reponses_case13.push_back("4) Dinar soviétique");
Question_journaliste* case_13=new Question_journaliste("Quelle serait la devise irakienne selon Bush?  ",_reponses_case13,4);

vector<string> _reponses_case14;
_reponses_case14.push_back("1) euh..non");
_reponses_case14.push_back("2) Narendra Modi");
_reponses_case14.push_back("3) Rahul Gandhi");
Question_journaliste* case_14=new Question_journaliste("George Bush, qui est le premier ministre indien?  ",_reponses_case14,1);

vector<string> _reponses_case15;
_reponses_case15.push_back("1) Il y a 6000 ans il vivait avec les hommes");
_reponses_case15.push_back("2) 800 ans");
_reponses_case15.push_back("3) 1000 ans");
_reponses_case15.push_back("4) 87745 ans");
Question_journaliste* case_15=new Question_journaliste("Cours d'histoire de Sarah Palin a quel epoque vivait les dinosaure? ",_reponses_case15,1);

vector<string> _reponses_case16;
_reponses_case16.push_back("1) Des francais");
_reponses_case16.push_back("2) Des francais guadeloupeen");
_reponses_case16.push_back("3) Des guadeloupeen");
_reponses_case16.push_back("4) Des expatriés");
Question_journaliste* case_16=new Question_journaliste("Selon Macron, comment appelle t-on les francais de Guadeloupe?  ",_reponses_case16,4);

vector<string> _reponses_case17;
_reponses_case17.push_back("1) La reponse 1");
_reponses_case17.push_back("2) Le tunnel sous la Manche");
_reponses_case17.push_back("3) La vache folle");
_reponses_case17.push_back("4) Le brexit");
Question_journaliste* case_17=new Question_journaliste("Selon chirac quelle la seule chose que les anglais aient fait pour les européens?  ",_reponses_case17,3);

_evenements.push_back(case_0);
_evenements.push_back(case_1);
_evenements.push_back(case_2);
_evenements.push_back(case_3);
_evenements.push_back(case_4);
_evenements.push_back(case_5);
_evenements.push_back(case_6);
_evenements.push_back(case_7);
_evenements.push_back(case_8);
_evenements.push_back(case_9);
_evenements.push_back(case_10);
_evenements.push_back(case_11);
_evenements.push_back(case_12);
_evenements.push_back(case_13);
_evenements.push_back(case_14);
_evenements.push_back(case_15);
_evenements.push_back(case_16);
_evenements.push_back(case_17);
}

/*Jeu::~Jeu(){ 

	list<Evenement*>::iterator it = _evenements.begin();
	while(it != _evenements.end()){
		delete *it;
		it++;
	}
	for(unsigned int i=0 ; i< 3 ; i++)
		delete (_candidats[i].get_parti());

}*/


string Jeu::tour_joueur(int de){
	string retour;

	Parti* parti_candidat;
	parti_candidat = _candidats[0].get_parti();
	retour = "valeur de:"+ to_string(de) + " \n Nouveau tour ! " + parti_candidat->appliquer_soutien() + "\n";

	list<Evenement*>::iterator it =  _evenements.begin(); 
	unsigned int position_actuelle = (_candidats[0].get_position() + de)%(_evenements.size());
	_candidats[0].set_position(position_actuelle);
	retour += "Position : case " + to_string(position_actuelle) + "\n";
	retour += (*next(it,position_actuelle))->get_descriptif();
	return retour;
}

string Jeu::tour_AI(){
	string retour;
	int de = rand()%5+1;
	Parti* parti_robot1 = _candidats[1].get_parti();
	Parti* parti_robot2 = _candidats[2].get_parti();
	int i;
	//cout<<"*****************"+(_candidats[1].get_parti())->get_id();
	unsigned int position_robot1 = (_candidats[1].get_position() + de)%(_evenements.size());
	de = rand()%5+1;
	unsigned int position_robot2 = (_candidats[2].get_position() + de)%(_evenements.size());
	_candidats[1].set_position(position_robot1);
	_candidats[2].set_position(position_robot2);
	retour += "Position robot 1: case " + to_string(position_robot1) + "\n";
	retour += "Position robot 2: case " + to_string(position_robot2) + "\n";
	
	
	parti_robot1->add_popularite( ((rand()%30)-15));			// les robots gagnent aléatoirement de la popularité
	parti_robot2->add_popularite( ((rand()%30)-15));			//
	parti_robot1->add_fond( ((rand()%100)-50));
	parti_robot2->add_fond( ((rand()%100)-50));
	for(i=1;i<3;i++){
	if((rand()%10)<5)
	((_candidats[i].get_parti())->soutien());
	}
	return retour;
}

string Jeu::print(){
   string ret;

   for (int i = 0; i < 3 ; i++)
	   ret += _candidats[i].to_String();
   return ret;
}

string Jeu::classement(){
	string ret;
	int i;
	set<Candidat> s;
	set<Candidat>::iterator it;
	
	for(int i=0; i<3 ;i++)
		s.insert(_candidats[i]);
	it=s.end();
	it--;
	if(test_defaite())
	ret= "votre popularité est au plus bas, vous avez perdu \n";
	if(test_victoire())	
	ret+= (it->get_nom())+" est le President!!!"+"\n";
	ret += "Classement : \n";
	i = 1;
	
	while (!s.empty()) {
		ret += to_string((4-i)) +":\t" + ((s.begin())->get_nom()) + "\n";
		s.erase(s.begin());
		i++;
	}
	return ret;
}
