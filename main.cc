#include <iostream>
#include "Jeu_texte.hh"
#include "time.h"
using namespace std;


int main()
{
	srand(time(NULL));//pour d'avoir un vrai random()
	Jeu_texte a;
	a.jouer();
	return 0;
  
}
