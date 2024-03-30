#ifndef LSTPRIM_H_INCLUDED
#define LSTPRIM_H_INCLUDED
#include "LSTSDD.H"
#include "ELTPRIM.H"

LISTE listeCreer(void);
void listeDetruire(LISTE);
int estVide(LISTE);
int estSaturee(LISTE);
int listeTaille(LISTE);
ELEMENT recuperer(LISTE, int);
int inserer(LISTE, ELEMENT,int);
int supprimer(LISTE,int);
void listeAfficher(LISTE);
LISTE listeCopier(LISTE);
int listeComparer(LISTE,LISTE);
NOEUD noeudCreer(ELEMENT);
void noeudDetruire(NOEUD);;


#endif // LSTPRIM_H_INCLUDED

