#include"Evenement.hh"

using namespace std;


Evenement::Evenement(std::string descriptif):_descriptif(descriptif){}


string Evenement::get_descriptif(){ return _descriptif; }

void Evenement::set_descriptif(string descriptif){ _descriptif = descriptif; }


