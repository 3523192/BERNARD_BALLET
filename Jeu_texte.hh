#include "Jeu.hh"
#include <unistd.h>
class Jeu_texte{
    protected:
        Jeu _jeu;

	public:
        Jeu_texte();
        ~Jeu_texte(){};
        void jouer();
	 
	 private:
		int lancer_de();
		void achat_pop();
};
