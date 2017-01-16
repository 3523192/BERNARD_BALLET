#include "Jeu_texte.hh"

 using namespace std;
 
 
Jeu_texte::Jeu_texte(){
	bool valide = true;
	int indice = 0;
    string nom;
	system("clear");
    cout << "Comment vous appelez vous?" << endl;
    cin >> nom;
	do{
		valide = true;
        cout << "A quel parti pretez vous allegance? (entrez l'indice du parti)" << endl;
        cout << "1/ Les Bleus" << endl << "2/ Les Rouges" <<endl<< "3/ Les Blancs"<<endl;
        cin >> indice;
		if(indice <1 || indice >3){
			cout << "Erreur, reessayer"<<endl;
			valide = false;
        }
        
    }while(!valide);
	
	_jeu = Jeu(nom,indice);
	system("clear");
}



void Jeu_texte::jouer(){
	
	int reponse;
	list<Evenement*> evts = _jeu.get_evenements();
	list<Evenement*>::iterator it =  evts.begin(); 
	Evenement* evt_courant;
	
	cout<< "Votre but est de grimper en popularite et d'atteindre les 100" << endl;
	sleep(4);
	cout<< "Pour atteindre cet objectif vous devrez participer a des meetings en rapport avec votre parti et repondre a des questions..." << endl;
	sleep(4);
	cout<< "Mais attention..." << endl;	
	sleep(1);
	cout<< "Les reponses a ces questions peuvent parraitre... "<< endl ;
	sleep(2);
	cout<< "etrange" << endl;	
	sleep(3);
	while(!(_jeu.test_defaite() || _jeu.test_victoire())){
		system("clear");
		cout << _jeu.print();
		achat_pop();
		cout << _jeu.tour_joueur(lancer_de());

		int position_courante = (_jeu.get_candidats())[0].get_position();

		evt_courant = (*next(it,position_courante));

		bool valide = false;
		while(!valide){
			
			cout<< "Entrez votre réponse : " << endl;
			cin >> reponse;
			cout<< (evt_courant)->resultat((_jeu.get_candidats())[0].get_parti(),reponse,&valide) << endl;
		}
		sleep(3);
		cout << _jeu.tour_AI() << endl;
	
	}
	cout << "Fin! \n";
	cout << _jeu.classement();
}

int Jeu_texte::lancer_de(){
	int indice;
	bool valide = false;
	
	do{
        cout << "Appuyez sur 0 pour relancer le de" << endl;
        cin >> indice;

        switch (indice){
            case 0  : 
					valide = true;
					break;
            default :
                     cout << "Erreur, reessayer."<<endl;
                     break;
        }
    }while(!valide);
    
    return 	rand()%5+1;
}

void Jeu_texte::achat_pop(){
	int indice,indice2;
	bool valide = false;
	
	do{
        cout << "Voulez-vous acheter de la popularité? 0 : non \t 1 :oui \n" << endl;
        cin >> indice;

        switch (indice){
            case 0  : 
					valide = true;
					break;
					
			case 1 : 
					valide = true;
					cout << "Pour combien? (1 point de popularite = 500 de fond" << endl;
					cin >> indice2;
					cout << (_jeu.get_candidats())->acheter_popularite(indice2);
					break;
            default :
                     cout << "Erreur, reessayer."<<endl;
                     break;
        }
    }while(!valide);
    
}
