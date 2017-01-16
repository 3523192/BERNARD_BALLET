all:test1
test1 : Candidat.o Evenement.o Meeting.o Parti.o Parti_blanc.o Parti_droite.o Parti_gauche.o Jeu.o Jeu_texte.o Question_journaliste.o
	g++  main.cc Candidat.o Evenement.o Meeting.o Parti.o Parti_blanc.o Parti_droite.o Parti_gauche.o Jeu.o Jeu_texte.o Question_journaliste.o -o test1 -std=c++11 -g

Candidat.o :  
	g++ -Wall -c Candidat.cpp -std=c++11 -g	
Evenement.o : 				
	g++ -Wall -c Evenement.cpp  -std=c++11 -g

Meeting.o :				
	g++ -Wall -c Meeting.cpp  -std=c++11 -g

Parti.o : 				
	g++ -Wall -c Parti.cpp  -std=c++11 -g

Parti_blanc.o : 				
	g++ -Wall -c Parti_blanc.cpp  -std=c++11 -g

Parti_droite.o : 				
	g++ -Wall -c Parti_droite.cpp  -std=c++11 -g

Parti_gauche.o : 				
	g++ -Wall -c Parti_gauche.cpp  -std=c++11 -g

Jeu.o : 				
	g++ -Wall -c Jeu.cpp  -std=c++11 -g	
Jeu_texte.o : 				
	g++ -Wall -c Jeu_texte.cpp  -std=c++11 -g

Question_journaliste.o : 
	g++ -Wall -c Question_journaliste.cpp  -std=c++11 -g
	
clean : 
	rm -f *.o *~ test1
test : 
	./test1

