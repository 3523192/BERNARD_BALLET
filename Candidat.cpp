#include"Candidat.hh"
#include<string>
#define TAUX 500
using namespace std;

Candidat::Candidat():_nom("undefined"), _parti(NULL),_position(0){}
Candidat::Candidat(std::string nom,Parti* parti):_nom(nom), _parti(parti),_position(0) {}

Candidat::~Candidat(){}

string Candidat::get_nom(){ return _nom; }
string Candidat::get_nom() const{ return _nom; }
Parti* Candidat::get_parti(){ return _parti; }
unsigned int Candidat::get_position(){return _position;}

void Candidat::set_nom(string nom){ _nom = nom; }
void Candidat::set_parti(Parti* parti){ _parti = parti; }
void Candidat::set_position(int pos){ _position = pos; }

string Candidat::acheter_popularite(int valeur){
    string ret;
    int fond = (_parti->get_fond());
    if ((valeur*TAUX) > fond)
        ret = "erreur acheter_popularite : fond insuffisant \n";
    else{
        _parti->add_fond(-valeur*TAUX);
	_parti->add_popularite(valeur);
        ret = " Vous avez achetez "+ to_string((int)valeur) + " point de popularité pour " + to_string(valeur*TAUX)+"de fond " + "\n";
    }
    
    return ret;
}
Candidat& Candidat::operator=(Candidat arg)
{
    _nom = arg._nom;
    _parti = arg._parti;
    return *this;
}
bool Candidat::operator<(const Candidat& p) const
{
    return (*(this->_parti) < *(p._parti));
}
string Candidat::to_String(){
    string ret = "Nom :" + get_nom() + "\n" + _parti->to_String() + "\n";
    return ret;
}
