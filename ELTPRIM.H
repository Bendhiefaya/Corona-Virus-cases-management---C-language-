#ifndef ELTPRIM_H_INCLUDED
#define ELTPRIM_H_INCLUDED
#include"ELTSDD.H"
ELEMENT elementCreer(void);
void elementLire(ELEMENT*);
void elementDetruire(ELEMENT);
void elementAfficher(ELEMENT);
void elementAffecter(ELEMENT*,ELEMENT);
void elementCopier(ELEMENT *,ELEMENT);
int elementcomparer1(ELEMENT,ELEMENT);
int elementComparer(ELEMENT,ELEMENT);

#endif // ELTPRIM_H_INCLUDED
