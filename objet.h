#ifndef __objet_h_
#define __objet_h_
#include <stdlib.h>
#include <stdio.h>
#include "global.h"
#include "inventaire.h"

#define TAILLE_INVENTAIRE 50
#define NOMBRE_DE_CARTES 10

//coffre
enum tresor {
	OR,
	BONUS,
};

enum bonus {
    BONUS1,
    BONUS2,
    BONUS3,
};

typedef struct {
	Bool ouvert;
	enum tresor t;
	int po;
	enum bonus B;
}str_coffre,*coffre;
//fin coffre




//debut hero
typedef struct {
    int HP;
    char * nom;
		int x;
		int y;
    inventaire invHero;
} *hero, strHero;
//fin hero


//debut monstre
typedef struct {
	int HP;
	char *nom; 
	inventaire invMobs;
} *monstre, strMonstre;
//fin monstre

#endif
