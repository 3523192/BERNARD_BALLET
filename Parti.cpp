
#include"Parti.hh"
#include<string>
#include<iostream>
#include<sstream>

using namespace std;

Parti::Parti():_nom("undefined"),_fond(0),_popularite(0){}
Parti::Parti(string nom,int fond,int popularite):_nom(nom),_fond(fond),_popularite(popularite){}

//Parti::~Parti(){}

string Parti::get_nom(){ return _nom; }
int Parti::get_fond(){ return _fond; }
int Parti::get_popularite(){ return _popularite;}

void Parti::set_nom(string nom){ _nom = nom; }
void Parti::set_fond(int fond){ 
_fond = fond; 
if(fond<0)
	fond=0;
}
void Parti::add_fond(int fond){
set_fond(_fond+fond);
}
void Parti::set_popularite(int popularite){ 
_popularite = popularite;
if(popularite>POP_MAX )
	_popularite=POP_MAX;
if(popularite<0)
	_popularite=0;
 }
void Parti::add_popularite(int popularite){
set_popularite(popularite+_popularite);
}
string Parti::to_String(){
    string ret;

    ret = "Parti :" + get_nom() + "\n Fond : " +to_string(_fond) +"\n Popularite : " + to_string(_popularite) + "\n";
    return ret;
}
bool Parti::operator<(Parti &p)
{
    return this->_popularite < p._popularite;
}
