#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

typedef struct Date Date; // On définit un nouveau type date
   struct Date
    {
	 int jour;
	 int mois;
	 int an;
    };

typedef struct
 {
  Date DATE;
  int caspos;
  int deces;
  int gueris;
  int nbrevacc;
 }structure,*ELEMENT;
typedef struct structNoeud
  {
   ELEMENT info;
   struct structNoeud * precedent;
   struct structNoeud * suivant;
  }structNoeud,*NOEUD;

 typedef struct
  {
   NOEUD tete;
   NOEUD queue;
   int lg;
  }laStruct,*LISTE;
#endif // STRUCTURES_H_INCLUDED
