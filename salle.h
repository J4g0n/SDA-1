#ifndef __salle_h_
#define __salle_h_
#include "objet.h"
#include "graphics.h" 

#define MIN_TAILLE 5      // Taille minimal des salles
#define MAX_TAILLE 15      //Taille maximal des salles
#define MIN_COFFRE 0      // Nombre minimal de coffres
#define MAX_COFFRE 2       // Nombre maximal de coffres
#define MIN_MONSTRE 1      // Nombre minimal de monstres
#define MAX_MONSTRE 3      // Nombre maximal de monstres
#define NBR_MONSTRE_JEU 10      // Nombre de monstres different dans le jeu

//debut zone
enum terrain {
	MUR,
	SOL
};

enum objet {
	HERO,
	MONSTRE,
	COFFRE,
	NEUTRE         // Sinon toutes les cases sont forcement soit des monstres soit des heros soit des coffres
};

typedef struct {
	enum terrain ter;
	enum objet obj;
	hero H;
	monstre mobs;
	coffre C;
} zone;
//fin zone

typedef struct salle {
	int numero;
	zone **z;
	int taille;      // vu que c'est creer aleatoirement mieux vos stocker la taille de la salle dans la str
} *salle, strSalle;

int randIntervalle(int a,int b);
salle creerSalle();
salle remplirSalle(salle s/* monstre* tableau_des_monstre*/);                          
void detruireSalle(salle s);
void afficheSalle(salle s);
monstre deplacement(hero h,salle s,int entree);
#endif
