#include <stdio.h>
#include <stdlib.h>

#include "ELTPRIM.H"
#include "LSTPRIM.H"

NOEUD noeudCreer(ELEMENT e)
{
NOEUD n;

n =(NOEUD)malloc(sizeof(structNoeud));
if(!n)
printf ("\n there's a problem ... ");
else
{
elementAffecter(&n->info, e);
n->suivant = NULL;
n->precedent = NULL;
}
return n;
}

LISTE listeCreer(void)
{
    LISTE L;
    L=(LISTE)malloc(sizeof(laStruct));
    if (!L) printf("\n there's a problem in the memory ");
    else {
    L->lg = 0;
    L->tete = NULL;
        }
    return(L);
}

 void noeudDetruire(NOEUD n)
{
   elementDetruire(n->info);
   free(n);
}

int inserer (LISTE L, ELEMENT e, int pos){

int succee=1;
int i;

NOEUD n, p, q;
if (estSaturee(L))
{
printf ("\n the list is full  ");
succee=0;}
else{

if ((pos < 1) || (pos > L->lg + 1))
{
printf ("\n wrong position ");
succee=0;
}
else
{
n=noeudCreer (e);
if (L->lg == 0) /* la liste est vide */
{
L->tete = n;
L->queue = n;
}
else
{
if (pos == 1) /*insertion en tête de liste*/
{
L->tete->precedent = n;
n->suivant=L->tete;
L->tete = n;
}
else
{
if (pos == (L->lg +1)) /* ajout à la fin */

{
L->queue->suivant = n;
n->precedent = L->queue;
L->queue = n;
}else
{
q= L->tete;
for (i=1; i<pos; i++)
{
p = q;
q = q->suivant;
}
/* q désigne l’élément de rang pos et p son prédécesseur*/

p->suivant=n;
n->precedent =p;
n->suivant=q;
q->precedent =n;
}
}
}
(L->lg)++;
}
}
return succee;
}
int supprimer (LISTE L, int pos ){

int i;
int succee=1;
NOEUD p, q;

if (estVide(L))
{
printf ("\n empty list  ");
succee=0;}
else{

if ((pos < 1) || (pos > L->lg))
{
printf ("\n wrong position ");
succee=0;
}
else
{
if (L->lg ==1) /* un seul element donc pos == 1*/
{
q=L->tete;
L->tete = NULL;
L->queue = NULL;
}
else
{
if (pos == 1) /*suppression en tête de liste*/
{
q=L->tete;
L->tete=L->tete->suivant;
L->tete->precedent = NULL;
}
else
{
if (pos == L->lg)
{
q=L->queue;
L->queue = L->queue->precedent;
L->queue->suivant = NULL;
}
else
{
q= L->tete;
for (i=1; i<pos; i++)
{ p = q; q = q->suivant; }


q->suivant->precedent = p;
p->suivant=q->suivant;
}
}
}
noeudDetruire(q);
(L->lg)--;
}
}
return succee;
}
ELEMENT recuperer(LISTE L, int pos) {
/* s'il ya une erreur on affiche un message et on
retourne un element vide */
ELEMENT elt= elementCreer();
int i;
NOEUD p;
if (estVide(L))
printf ("\n the list is empty ");
else {
if ((pos < 1) || (pos > L->lg))
printf ("\nwrong position ");

else {

p= L->tete;
for (i=1; i<pos; i++)
p = p->suivant;

elementAffecter(&elt,p->info);
}

}
return(elt);
}

void listeAfficher(LISTE L){
int i=1;
NOEUD p;
p= L->tete;

for(i = 1;i <= L->lg; i++) {
elementAfficher(p->info);
p= p->suivant;
}
}
LISTE listeCopier(LISTE L){
LISTE LR = listeCreer();
int i;
ELEMENT elt;
for(i = 1;i <= L->lg; i++) {
elt=elementCreer();
elementCopier(&elt, recuperer(L,i));
inserer(LR,elt, i);
}
return LR;
}
int listeComparer (LISTE L1,LISTE L2 )
{
int test= 1;
int i=1;
if (listeTaille(L1) != listeTaille(L2)) test= 0;
while ((i<=listeTaille(L1)) && (test)) {
if(elementComparer(recuperer(L1,i),recuperer(L2,i))!=0)
test=0;
i++;
}
return test;
}

void listeDetruire(LISTE L){
int i;
NOEUD p, q;
q= L->tete;
for(i = 1;i <= L->lg; i++)
{
p=q;
q=q->suivant;
noeudDetruire(p);
}
free(L);
}
int listeTaille(LISTE L) {
return (L->lg);
}
int estSaturee(LISTE L) {
NOEUD temp;
int saturee = 1; /* on suppose mémoire saturée */
temp = (NOEUD) malloc ( sizeof ( structNoeud ) );
if(temp != NULL) {
saturee = 0; /* mémoire non saturée */
free(temp);
}
return saturee;
}
int estVide(LISTE L) {
return (L->lg == 0);
}

