#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"LSTPRIM.C"
#include"ELTPRIM.C"
#include<windows.h>
#include<conio.h>
#include<MMsystem.h>
int main()
{
int ordre;
LISTE TAB[24];
int choix,choi,cho,i,choice,gouver,pos=2;
for(i=0;i<=24;i++)
    {TAB[i]=listeCreer();}
int champ,option,x,w,nv,ng,nd;
ELEMENT e;
interfac();
//1 - informations related to ariana :
ELEMENT e1=elementCreer();
e1->DATE.jour=1;
e1->DATE.mois=2;
e1->DATE.an=2021;
e1->caspos=40;
e1->deces=5;
e1->gueris=5;
e1->nbrevacc=0;
inserer(TAB[1],e1,1);
ELEMENT e2=elementCreer();
e2->DATE.jour=2;
e2->DATE.mois=2;
e2->DATE.an=2021;
e2->caspos=200;
e2->deces=1;
e2->gueris=0;
e2->nbrevacc=0;
inserer(TAB[1],e2,2);
ELEMENT e3=elementCreer();
e3->DATE.jour=3;
e3->DATE.mois=3;
e3->DATE.an=2021;
e3->caspos=80;
e3->deces=25;
e3->gueris=45;
e3->nbrevacc=2;
inserer(TAB[1],e3,3);
ELEMENT e4=elementCreer();
e4->DATE.jour=4;
e4->DATE.mois=3;
e4->DATE.an=2021;
e4->caspos=8;
e4->deces=25;
e4->gueris=5;
e4->nbrevacc=21;
inserer(TAB[1],e4,4);
ELEMENT e5=elementCreer();
e5->DATE.jour=5;
e5->DATE.mois=3;
e5->DATE.an=2021;
e5->caspos=80;
e5->deces=25;
e5->gueris=5;
e5->nbrevacc=0;
inserer(TAB[1],e5,5);
ELEMENT e6=elementCreer();
e6->DATE.jour=6;
e6->DATE.mois=3;
e6->DATE.an=2021;
e6->caspos=10;
e6->deces=5;
e6->gueris=5;
e6->nbrevacc=40;
inserer(TAB[1],e6,6);
ELEMENT e7=elementCreer();
e7->DATE.jour=7;
e7->DATE.mois=3;
e7->DATE.an=2021;
e7->caspos=60;
e7->deces=25;
e7->gueris=4;
e7->nbrevacc=7;
inserer(TAB[1],e7,7);
ELEMENT e8=elementCreer();
e8->DATE.jour=8;
e8->DATE.mois=3;
e8->DATE.an=2021;
e8->caspos=80;
e8->deces=25;
e8->gueris=45;
e8->nbrevacc=200;
inserer(TAB[1],e8,8);
ELEMENT e9=elementCreer();
e9->DATE.jour=9;
e9->DATE.mois=3;
e9->DATE.an=2021;
e9->caspos=80;
e9->deces=25;
e9->gueris=45;
e9->nbrevacc=2;
inserer(TAB[1],e9,9);
ELEMENT e10=elementCreer();
e10->DATE.jour=10;
e10->DATE.mois=3;
e10->DATE.an=2020;
e10->caspos=80;
e10->deces=25;
e10->gueris=45;
e10->nbrevacc=200;
inserer(TAB[1],e10,10);
ELEMENT e11=elementCreer();
e11->DATE.jour=11;
e11->DATE.mois=3;
e11->DATE.an=2021;
e11->caspos=80;
e11->deces=25;
e11->gueris=45;
e11->nbrevacc=200;
inserer(TAB[1],e11,11);
ELEMENT e12=elementCreer();
e12->DATE.jour=12;
e12->DATE.mois=3;
e12->DATE.an=2021;
e12->caspos=80;
e12->deces=25;
e12->gueris=45;
e12->nbrevacc=200;
inserer(TAB[1],e12,12);
ELEMENT e13=elementCreer();
e13->DATE.jour=13;
e13->DATE.mois=3;
e13->DATE.an=2021;
e13->caspos=80;
e13->deces=25;
e13->gueris=45;
e13->nbrevacc=0;
inserer(TAB[1],e13,13);
ELEMENT e14=elementCreer();
e14->DATE.jour=14;
e14->DATE.mois=3;
e14->DATE.an=2021;
e14->caspos=7;
e14->deces=15;
e14->gueris=15;
e14->nbrevacc=21;
inserer(TAB[1],e14,14);
ELEMENT e15=elementCreer();
e15->DATE.jour=15;
e15->DATE.mois=3;
e15->DATE.an=2021;
e15->caspos=80;
e15->deces=25;
e15->gueris=45;
e15->nbrevacc=0;
inserer(TAB[1],e15,15);
ELEMENT e16=elementCreer();
e16->DATE.jour=16;
e16->DATE.mois=3;
e16->DATE.an=2021;
e16->caspos=4;
e16->deces=12;
e16->gueris=45;
e16->nbrevacc=0;
inserer(TAB[1],e16,16);
ELEMENT e17=elementCreer();
e17->DATE.jour=17;
e17->DATE.mois=3;
e17->DATE.an=2021;
e17->caspos=80;
e17->deces=25;
e17->gueris=25;
e17->nbrevacc=10;
inserer(TAB[1],e17,17);
ELEMENT e18=elementCreer();
e18->DATE.jour=18;
e18->DATE.mois=3;
e18->DATE.an=2021;
e18->caspos=14;
e18->deces=15;
e18->gueris=5;
e18->nbrevacc=2;
inserer(TAB[1],e18,18);
ELEMENT e19=elementCreer();
e19->DATE.jour=19;
e19->DATE.mois=3;
e19->DATE.an=2021;
e19->caspos=10;
e19->deces=25;
e19->gueris=4;
e19->nbrevacc=0;
inserer(TAB[1],e19,19);
ELEMENT e20=elementCreer();
e20->DATE.jour=20;
e20->DATE.mois=3;
e20->DATE.an=2021;
e20->caspos=14;
e20->deces=25;
e20->gueris=45;
e20->nbrevacc=24;
inserer(TAB[1],e20,20);
//2 - informations related to BEJA :
ELEMENT e21=elementCreer();
e21->DATE.jour=1;
e21->DATE.mois=2;
e21->DATE.an=2021;
e21->caspos=4;
e21->deces=5;
e21->gueris=5;
e21->nbrevacc=0;
inserer(TAB[2],e21,1);
ELEMENT e22=elementCreer();
e22->DATE.jour=2;
e22->DATE.mois=2;
e22->DATE.an=2021;
e22->caspos=200;
e22->deces=1;
e22->gueris=0;
e22->nbrevacc=0;
inserer(TAB[2],e22,2);
ELEMENT e23=elementCreer();
e23->DATE.jour=3;
e23->DATE.mois=2;
e23->DATE.an=2021;
e23->caspos=80;
e23->deces=25;
e23->gueris=45;
e23->nbrevacc=2;
inserer(TAB[2],e23,3);
ELEMENT e24=elementCreer();
e24->DATE.jour=4;
e24->DATE.mois=2;
e24->DATE.an=2021;
e24->caspos=8;
e24->deces=25;
e24->gueris=5;
e24->nbrevacc=21;
inserer(TAB[2],e24,4);
ELEMENT e25=elementCreer();
e25->DATE.jour=5;
e25->DATE.mois=2;
e25->DATE.an=2021;
e25->caspos=80;
e25->deces=25;
e25->gueris=5;
e5->nbrevacc=0;
inserer(TAB[2],e25,5);
ELEMENT e26=elementCreer();
e26->DATE.jour=6;
e26->DATE.mois=2;
e26->DATE.an=2021;
e26->caspos=10;
e26->deces=5;
e26->gueris=5;
e26->nbrevacc=40;
inserer(TAB[2],e26,6);
ELEMENT e27=elementCreer();
e27->DATE.jour=7;
e27->DATE.mois=2;
e27->DATE.an=2021;
e27->caspos=60;
e27->deces=25;
e27->gueris=4;
e27->nbrevacc=7;
inserer(TAB[2],e27,7);
ELEMENT e28=elementCreer();
e28->DATE.jour=8;
e28->DATE.mois=2;
e28->DATE.an=2021;
e28->caspos=80;
e28->deces=25;
e28->gueris=45;
e28->nbrevacc=200;
inserer(TAB[2],e28,8);
ELEMENT e29=elementCreer();
e29->DATE.jour=9;
e29->DATE.mois=2;
e29->DATE.an=2021;
e29->caspos=80;
e29->deces=25;
e29->gueris=45;
e29->nbrevacc=2;
inserer(TAB[2],e29,9);
ELEMENT e30=elementCreer();
e30->DATE.jour=10;
e30->DATE.mois=2;
e30->DATE.an=2020;
e30->caspos=80;
e30->deces=25;
e30->gueris=45;
e30->nbrevacc=200;
inserer(TAB[2],e30,10);
ELEMENT e31=elementCreer();
e31->DATE.jour=11;
e31->DATE.mois=2;
e31->DATE.an=2021;
e31->caspos=80;
e31->deces=25;
e31->gueris=45;
e31->nbrevacc=200;
inserer(TAB[2],e31,11);
ELEMENT e32=elementCreer();
e32->DATE.jour=12;
e32->DATE.mois=2;
e32->DATE.an=2021;
e32->caspos=80;
e32->deces=25;
e32->gueris=45;
e32->nbrevacc=200;
inserer(TAB[2],e32,12);
ELEMENT e33=elementCreer();
e33->DATE.jour=13;
e33->DATE.mois=2;
e33->DATE.an=2021;
e33->caspos=80;
e33->deces=25;
e33->gueris=45;
e33->nbrevacc=0;
inserer(TAB[2],e33,13);
ELEMENT e34=elementCreer();
e34->DATE.jour=14;
e34->DATE.mois=3;
e34->DATE.an=2021;
e34->caspos=7;
e34->deces=15;
e34->gueris=15;
e34->nbrevacc=21;
inserer(TAB[2],e34,14);
ELEMENT e35=elementCreer();
e35->DATE.jour=15;
e35->DATE.mois=2;
e35->DATE.an=2021;
e35->caspos=80;
e35->deces=25;
e35->gueris=45;
e15->nbrevacc=0;
inserer(TAB[2],e35,15);
ELEMENT e36=elementCreer();
e36->DATE.jour=16;
e36->DATE.mois=2;
e36->DATE.an=2021;
e36->caspos=4;
e36->deces=12;
e36->gueris=45;
e36->nbrevacc=0;
inserer(TAB[2],e36,16);
ELEMENT e37=elementCreer();
e37->DATE.jour=17;
e37->DATE.mois=2;
e37->DATE.an=2021;
e37->caspos=80;
e37->deces=25;
e37->gueris=25;
e37->nbrevacc=10;
inserer(TAB[2],e37,17);
ELEMENT e38=elementCreer();
e38->DATE.jour=18;
e38->DATE.mois=2;
e38->DATE.an=2021;
e38->caspos=14;
e38->deces=15;
e38->gueris=5;
e38->nbrevacc=2;
inserer(TAB[2],e38,18);
ELEMENT e39=elementCreer();
e39->DATE.jour=19;
e39->DATE.mois=2;
e39->DATE.an=2021;
e39->caspos=10;
e39->deces=25;
e39->gueris=4;
e39->nbrevacc=0;
inserer(TAB[2],e39,19);
ELEMENT e40=elementCreer();
e40->DATE.jour=20;
e40->DATE.mois=2;
e40->DATE.an=2021;
e40->caspos=14;
e40->deces=25;
e40->gueris=45;
e40->nbrevacc=24;
inserer(TAB[2],e40,20);
//3 - informations related to BEN AROUS :
ELEMENT e41=elementCreer();
e41->DATE.jour=1;
e41->DATE.mois=2;
e41->DATE.an=2021;
e41->caspos=4;
e41->deces=5;
e41->gueris=5;
e41->nbrevacc=0;
inserer(TAB[3],e41,1);
ELEMENT e42=elementCreer();
e42->DATE.jour=2;
e42->DATE.mois=2;
e42->DATE.an=2021;
e42->caspos=200;
e42->deces=1;
e42->gueris=0;
e42->nbrevacc=0;
inserer(TAB[3],e42,2);
ELEMENT e43=elementCreer();
e43->DATE.jour=3;
e43->DATE.mois=2;
e43->DATE.an=2021;
e43->caspos=80;
e43->deces=25;
e43->gueris=45;
e43->nbrevacc=2;
inserer(TAB[3],e43,3);
ELEMENT e44=elementCreer();
e44->DATE.jour=4;
e44->DATE.mois=2;
e44->DATE.an=2021;
e44->caspos=8;
e44->deces=25;
e44->gueris=5;
e44->nbrevacc=21;
inserer(TAB[3],e44,4);
ELEMENT e45=elementCreer();
e45->DATE.jour=5;
e45->DATE.mois=2;
e45->DATE.an=2021;
e45->caspos=80;
e45->deces=25;
e45->gueris=5;
e45->nbrevacc=0;
inserer(TAB[3],e45,5);
ELEMENT e46=elementCreer();
e46->DATE.jour=6;
e46->DATE.mois=2;
e46->DATE.an=2021;
e46->caspos=10;
e46->deces=5;
e46->gueris=5;
e46->nbrevacc=40;
inserer(TAB[3],e46,6);
ELEMENT e47=elementCreer();
e47->DATE.jour=7;
e47->DATE.mois=2;
e47->DATE.an=2021;
e47->caspos=60;
e47->deces=25;
e47->gueris=4;
e47->nbrevacc=7;
inserer(TAB[3],e47,7);
ELEMENT e48=elementCreer();
e48->DATE.jour=8;
e48->DATE.mois=2;
e48->DATE.an=2021;
e48->caspos=80;
e48->deces=25;
e48->gueris=45;
e48->nbrevacc=200;
inserer(TAB[3],e48,8);
ELEMENT e49=elementCreer();
e49->DATE.jour=9;
e49->DATE.mois=2;
e49->DATE.an=2021;
e49->caspos=80;
e49->deces=25;
e49->gueris=45;
e49->nbrevacc=2;
inserer(TAB[3],e49,9);
ELEMENT e50=elementCreer();
e50->DATE.jour=10;
e50->DATE.mois=2;
e50->DATE.an=2020;
e50->caspos=80;
e50->deces=25;
e50->gueris=45;
e50->nbrevacc=200;
inserer(TAB[3],e50,10);
ELEMENT e51=elementCreer();
e51->DATE.jour=11;
e51->DATE.mois=2;
e51->DATE.an=2021;
e51->caspos=80;
e51->deces=25;
e51->gueris=45;
e51->nbrevacc=200;
inserer(TAB[3],e51,11);
ELEMENT e52=elementCreer();
e52->DATE.jour=12;
e52->DATE.mois=2;
e52->DATE.an=2021;
e52->caspos=80;
e52->deces=25;
e52->gueris=45;
e52->nbrevacc=200;
inserer(TAB[3],e52,12);
ELEMENT e53=elementCreer();
e53->DATE.jour=13;
e53->DATE.mois=2;
e53->DATE.an=2021;
e53->caspos=80;
e53->deces=25;
e53->gueris=45;
e53->nbrevacc=0;
inserer(TAB[3],e53,13);
ELEMENT e54=elementCreer();
e54->DATE.jour=14;
e54->DATE.mois=3;
e54->DATE.an=2021;
e54->caspos=7;
e54->deces=15;
e54->gueris=15;
e54->nbrevacc=21;
inserer(TAB[3],e54,14);
ELEMENT e55=elementCreer();
e55->DATE.jour=15;
e55->DATE.mois=2;
e55->DATE.an=2021;
e55->caspos=80;
e55->deces=25;
e55->gueris=45;
e55->nbrevacc=0;
inserer(TAB[3],e55,15);
ELEMENT e56=elementCreer();
e56->DATE.jour=16;
e56->DATE.mois=2;
e56->DATE.an=2021;
e56->caspos=4;
e56->deces=12;
e56->gueris=45;
e56->nbrevacc=0;
inserer(TAB[3],e56,16);
ELEMENT e57=elementCreer();
e57->DATE.jour=17;
e57->DATE.mois=2;
e57->DATE.an=2021;
e57->caspos=80;
e57->deces=25;
e57->gueris=25;
e57->nbrevacc=10;
inserer(TAB[5],e57,17);
ELEMENT e58=elementCreer();
e58->DATE.jour=18;
e58->DATE.mois=2;
e58->DATE.an=2021;
e58->caspos=14;
e58->deces=15;
e58->gueris=5;
e58->nbrevacc=2;
inserer(TAB[3],e58,18);
ELEMENT e59=elementCreer();
e59->DATE.jour=19;
e59->DATE.mois=2;
e59->DATE.an=2021;
e59->caspos=10;
e59->deces=25;
e59->gueris=4;
e59->nbrevacc=0;
inserer(TAB[3],e59,19);
ELEMENT e60=elementCreer();
e60->DATE.jour=20;
e60->DATE.mois=2;
e60->DATE.an=2021;
e60->caspos=14;
e60->deces=25;
e60->gueris=45;
e60->nbrevacc=24;
inserer(TAB[3],e60,20);
// 4 - informations related to BIZERTE :
ELEMENT e61=elementCreer();
e61->DATE.jour=1;
e61->DATE.mois=2;
e61->DATE.an=2021;
e61->caspos=50;
e61->deces=5;
e61->gueris=5;
e61->nbrevacc=0;
inserer(TAB[4],e61,1);
ELEMENT e62=elementCreer();
e62->DATE.jour=2;
e62->DATE.mois=2;
e62->DATE.an=2021;
e62->caspos=200;
e62->deces=1;
e62->gueris=0;
e62->nbrevacc=0;
inserer(TAB[4],e62,2);
ELEMENT e63=elementCreer();
e63->DATE.jour=3;
e63->DATE.mois=2;
e63->DATE.an=2021;
e63->caspos=80;
e63->deces=25;
e63->gueris=45;
e63->nbrevacc=2;
inserer(TAB[4],e63,3);
ELEMENT e64=elementCreer();
e64->DATE.jour=4;
e64->DATE.mois=2;
e64->DATE.an=2021;
e64->caspos=8;
e64->deces=25;
e64->gueris=5;
e64->nbrevacc=21;
inserer(TAB[4],e64,4);
ELEMENT e65=elementCreer();
e65->DATE.jour=5;
e65->DATE.mois=2;
e65->DATE.an=2021;
e65->caspos=80;
e65->deces=25;
e65->gueris=5;
e65->nbrevacc=0;
inserer(TAB[4],e65,5);
ELEMENT e66=elementCreer();
e66->DATE.jour=6;
e66->DATE.mois=2;
e66->DATE.an=2021;
e66->caspos=10;
e66->deces=5;
e66->gueris=5;
e66->nbrevacc=40;
inserer(TAB[4],e66,6);
ELEMENT e67=elementCreer();
e67->DATE.jour=7;
e67->DATE.mois=2;
e67->DATE.an=2021;
e67->caspos=60;
e67->deces=25;
e67->gueris=4;
e67->nbrevacc=7;
inserer(TAB[4],e47,7);
ELEMENT e68=elementCreer();
e68->DATE.jour=8;
e68->DATE.mois=2;
e68->DATE.an=2021;
e68->caspos=80;
e68->deces=25;
e68->gueris=45;
e68->nbrevacc=200;
inserer(TAB[4],e68,8);
ELEMENT e69=elementCreer();
e69->DATE.jour=9;
e69->DATE.mois=2;
e69->DATE.an=2021;
e69->caspos=80;
e69->deces=25;
e69->gueris=45;
e69->nbrevacc=2;
inserer(TAB[4],e69,9);
ELEMENT e70=elementCreer();
e70->DATE.jour=10;
e70->DATE.mois=2;
e70->DATE.an=2020;
e70->caspos=80;
e70->deces=25;
e70->gueris=45;
e70->nbrevacc=200;
inserer(TAB[4],e70,10);
ELEMENT e71=elementCreer();
e71->DATE.jour=11;
e71->DATE.mois=2;
e71->DATE.an=2021;
e71->caspos=80;
e71->deces=25;
e71->gueris=45;
e71->nbrevacc=200;
inserer(TAB[4],e71,11);
ELEMENT e72=elementCreer();
e72->DATE.jour=12;
e72->DATE.mois=2;
e72->DATE.an=2021;
e72->caspos=80;
e72->deces=25;
e72->gueris=45;
e72->nbrevacc=10;
inserer(TAB[4],e72,12);
ELEMENT e73=elementCreer();
e73->DATE.jour=13;
e73->DATE.mois=2;
e73->DATE.an=2021;
e73->caspos=80;
e73->deces=25;
e73->gueris=45;
e73->nbrevacc=0;
inserer(TAB[4],e73,13);
ELEMENT e74=elementCreer();
e74->DATE.jour=14;
e74->DATE.mois=3;
e74->DATE.an=2021;
e74->caspos=7;
e74->deces=15;
e74->gueris=15;
e74->nbrevacc=21;
inserer(TAB[4],e74,14);
ELEMENT e75=elementCreer();
e75->DATE.jour=15;
e75->DATE.mois=2;
e75->DATE.an=2021;
e75->caspos=80;
e75->deces=25;
e75->gueris=45;
e75->nbrevacc=0;
inserer(TAB[4],e75,15);
ELEMENT e76=elementCreer();
e76->DATE.jour=16;
e76->DATE.mois=2;
e76->DATE.an=2021;
e76->caspos=4;
e76->deces=12;
e76->gueris=45;
e76->nbrevacc=0;
inserer(TAB[4],e76,16);
ELEMENT e77=elementCreer();
e77->DATE.jour=17;
e77->DATE.mois=2;
e77->DATE.an=2021;
e77->caspos=80;
e77->deces=25;
e77->gueris=25;
e77->nbrevacc=10;
inserer(TAB[4],e77,17);
ELEMENT e78=elementCreer();
e78->DATE.jour=18;
e78->DATE.mois=2;
e78->DATE.an=2021;
e78->caspos=14;
e78->deces=15;
e78->gueris=5;
e78->nbrevacc=2;
inserer(TAB[4],e78,18);
ELEMENT e79=elementCreer();
e79->DATE.jour=19;
e79->DATE.mois=2;
e79->DATE.an=2021;
e79->caspos=10;
e79->deces=25;
e79->gueris=4;
e79->nbrevacc=0;
inserer(TAB[4],e79,19);
ELEMENT e80=elementCreer();
e80->DATE.jour=20;
e80->DATE.mois=2;
e80->DATE.an=2021;
e80->caspos=14;
e80->deces=25;
e80->gueris=45;
e80->nbrevacc=24;
inserer(TAB[4],e80,20);
//5 - informations related to Gabes :
ELEMENT a1=elementCreer();
a1->DATE.jour=1;
a1->DATE.mois=3;
a1->DATE.an=2021;
a1->caspos=4;
a1->deces=5;
a1->gueris=5;
a1->nbrevacc=0;
inserer(TAB[5],a1,1);
ELEMENT a2=elementCreer();
a2->DATE.jour=2;
a2->DATE.mois=3;
a2->DATE.an=2021;
a2->caspos=200;
a2->deces=1;
a2->gueris=0;
a2->nbrevacc=0;
inserer(TAB[5],a2,2);
ELEMENT a3=elementCreer();
a3->DATE.jour=3;
a3->DATE.mois=3;
a3->DATE.an=2021;
a3->caspos=80;
a3->deces=25;
a3->gueris=45;
a3->nbrevacc=2;
inserer(TAB[5],a3,3);
ELEMENT a4=elementCreer();
a4->DATE.jour=4;
a4->DATE.mois=3;
a4->DATE.an=2021;
a4->caspos=8;
a4->deces=25;
a4->gueris=5;
a4->nbrevacc=21;
inserer(TAB[5],a4,4);
ELEMENT a5=elementCreer();
a5->DATE.jour=5;
a5->DATE.mois=3;
a5->DATE.an=2021;
a5->caspos=80;
a5->deces=25;
a5->gueris=5;
a5->nbrevacc=0;
inserer(TAB[5],a5,5);
ELEMENT a6=elementCreer();
a6->DATE.jour=6;
a6->DATE.mois=3;
a6->DATE.an=2021;
a6->caspos=10;
a6->deces=5;
a6->gueris=5;
a6->nbrevacc=40;
inserer(TAB[5],a6,6);
ELEMENT a7=elementCreer();
a7->DATE.jour=7;
a7->DATE.mois=3;
a7->DATE.an=2021;
a7->caspos=60;
a7->deces=25;
a7->gueris=4;
a7->nbrevacc=7;
inserer(TAB[5],a7,7);
ELEMENT a8=elementCreer();
a8->DATE.jour=8;
a8->DATE.mois=3;
a8->DATE.an=2021;
a8->caspos=80;
a8->deces=25;
a8->gueris=45;
a8->nbrevacc=40;
inserer(TAB[5],a8,8);
ELEMENT a9=elementCreer();
a9->DATE.jour=9;
a9->DATE.mois=3;
a9->DATE.an=2021;
a9->caspos=80;
a9->deces=25;
a9->gueris=45;
a9->nbrevacc=2;
inserer(TAB[5],a9,9);
ELEMENT a10=elementCreer();
a10->DATE.jour=10;
a10->DATE.mois=3;
a10->DATE.an=2020;
a10->caspos=80;
a10->deces=25;
a10->gueris=45;
a10->nbrevacc=200;
inserer(TAB[5],a10,10);
ELEMENT a11=elementCreer();
a11->DATE.jour=11;
a11->DATE.mois=3;
a11->DATE.an=2021;
a11->caspos=80;
a11->deces=25;
a11->gueris=45;
a11->nbrevacc=200;
inserer(TAB[5],a11,11);
ELEMENT a12=elementCreer();
a12->DATE.jour=12;
a12->DATE.mois=3;
a12->DATE.an=2021;
a12->caspos=80;
a12->deces=25;
a12->gueris=45;
a12->nbrevacc=200;
inserer(TAB[5],a12,12);
ELEMENT a13=elementCreer();
a13->DATE.jour=13;
a13->DATE.mois=3;
a13->DATE.an=2021;
a13->caspos=80;
a13->deces=25;
a13->gueris=45;
a13->nbrevacc=0;
inserer(TAB[5],a13,13);
ELEMENT a14=elementCreer();
a14->DATE.jour=14;
a14->DATE.mois=3;
a14->DATE.an=2021;
a14->caspos=7;
a14->deces=15;
a14->gueris=15;
a14->nbrevacc=21;
inserer(TAB[5],a14,14);
ELEMENT a15=elementCreer();
a15->DATE.jour=15;
a15->DATE.mois=3;
a15->DATE.an=2021;
a15->caspos=80;
a15->deces=25;
a15->gueris=45;
a15->nbrevacc=0;
inserer(TAB[5],e15,15);
ELEMENT a16=elementCreer();
a16->DATE.jour=16;
a16->DATE.mois=3;
a16->DATE.an=2021;
a16->caspos=4;
a16->deces=12;
a16->gueris=45;
a16->nbrevacc=0;
inserer(TAB[5],a16,16);
ELEMENT a17=elementCreer();
a17->DATE.jour=17;
a17->DATE.mois=3;
a17->DATE.an=2021;
a17->caspos=80;
a17->deces=25;
a17->gueris=25;
a17->nbrevacc=10;
inserer(TAB[5],a17,17);
ELEMENT a18=elementCreer();
a18->DATE.jour=18;
a18->DATE.mois=3;
a18->DATE.an=2021;
a18->caspos=14;
a18->deces=15;
a18->gueris=5;
a18->nbrevacc=2;
inserer(TAB[5],a18,18);
ELEMENT a19=elementCreer();
a19->DATE.jour=19;
a19->DATE.mois=3;
a19->DATE.an=2021;
a19->caspos=10;
a19->deces=25;
a19->gueris=4;
a19->nbrevacc=0;
inserer(TAB[5],a19,19);
ELEMENT a20=elementCreer();
a20->DATE.jour=20;
a20->DATE.mois=3;
a20->DATE.an=2021;
a20->caspos=14;
a20->deces=25;
a20->gueris=45;
a20->nbrevacc=24;
inserer(TAB[5],a20,20);
//6- informations related to gafsa :
ELEMENT a21=elementCreer();
a21->DATE.jour=1;
a21->DATE.mois=2;
a21->DATE.an=2021;
a21->caspos=4;
a21->deces=5;
a21->gueris=5;
a21->nbrevacc=0;
inserer(TAB[6],a21,1);
ELEMENT a22=elementCreer();
a22->DATE.jour=2;
a22->DATE.mois=2;
a22->DATE.an=2021;
a22->caspos=200;
a22->deces=1;
a22->gueris=0;
a22->nbrevacc=0;
inserer(TAB[6],a22,2);
ELEMENT a23=elementCreer();
a23->DATE.jour=3;
a23->DATE.mois=2;
a23->DATE.an=2021;
a23->caspos=80;
a23->deces=25;
a23->gueris=45;
a23->nbrevacc=2;
inserer(TAB[6],a23,3);
ELEMENT a24=elementCreer();
a24->DATE.jour=4;
a24->DATE.mois=2;
a24->DATE.an=2021;
a24->caspos=8;
a24->deces=25;
a24->gueris=5;
a24->nbrevacc=21;
inserer(TAB[6],a24,4);
ELEMENT a25=elementCreer();
a25->DATE.jour=5;
a25->DATE.mois=2;
a25->DATE.an=2021;
a25->caspos=80;
a25->deces=25;
a25->gueris=5;
a25->nbrevacc=0;
inserer(TAB[6],a25,5);
ELEMENT a26=elementCreer();
a26->DATE.jour=6;
a26->DATE.mois=2;
a26->DATE.an=2021;
a26->caspos=10;
a26->deces=5;
a26->gueris=5;
a26->nbrevacc=40;
inserer(TAB[6],a26,6);
ELEMENT a27=elementCreer();
a27->DATE.jour=7;
a27->DATE.mois=2;
a27->DATE.an=2021;
a27->caspos=60;
a27->deces=25;
a27->gueris=4;
a27->nbrevacc=7;
inserer(TAB[6],a27,7);
ELEMENT a28=elementCreer();
a28->DATE.jour=8;
a28->DATE.mois=2;
a28->DATE.an=2021;
a28->caspos=80;
a28->deces=25;
a28->gueris=45;
a28->nbrevacc=200;
inserer(TAB[6],a28,8);
ELEMENT a29=elementCreer();
a29->DATE.jour=9;
a29->DATE.mois=2;
a29->DATE.an=2021;
a29->caspos=80;
a29->deces=25;
a29->gueris=45;
a29->nbrevacc=2;
inserer(TAB[6],a29,9);
ELEMENT a30=elementCreer();
a30->DATE.jour=10;
a30->DATE.mois=2;
a30->DATE.an=2020;
a30->caspos=80;
a30->deces=25;
a30->gueris=45;
a30->nbrevacc=200;
inserer(TAB[6],a30,10);
ELEMENT a31=elementCreer();
a31->DATE.jour=11;
a31->DATE.mois=2;
a31->DATE.an=2021;
a31->caspos=80;
a31->deces=25;
a31->gueris=45;
a31->nbrevacc=200;
inserer(TAB[6],a31,11);
ELEMENT a32=elementCreer();
a32->DATE.jour=12;
a32->DATE.mois=2;
a32->DATE.an=2021;
a32->caspos=80;
a32->deces=25;
a32->gueris=45;
a32->nbrevacc=200;
inserer(TAB[6],a32,12);
ELEMENT a33=elementCreer();
a33->DATE.jour=13;
a33->DATE.mois=2;
a33->DATE.an=2021;
a33->caspos=80;
a33->deces=25;
a33->gueris=45;
a33->nbrevacc=0;
inserer(TAB[6],a33,13);
ELEMENT a34=elementCreer();
a34->DATE.jour=14;
a34->DATE.mois=3;
a34->DATE.an=2021;
a34->caspos=7;
a34->deces=15;
a34->gueris=15;
a34->nbrevacc=21;
inserer(TAB[6],a34,14);
ELEMENT a35=elementCreer();
a35->DATE.jour=15;
a35->DATE.mois=2;
a35->DATE.an=2021;
a35->caspos=80;
a35->deces=25;
a35->gueris=45;
a15->nbrevacc=0;
inserer(TAB[6],a35,15);
ELEMENT a36=elementCreer();
a36->DATE.jour=16;
a36->DATE.mois=2;
a36->DATE.an=2021;
a36->caspos=4;
a36->deces=12;
a36->gueris=45;
a36->nbrevacc=0;
inserer(TAB[6],a36,16);
ELEMENT a37=elementCreer();
a37->DATE.jour=17;
a37->DATE.mois=2;
a37->DATE.an=2021;
a37->caspos=80;
a37->deces=25;
a37->gueris=25;
a37->nbrevacc=10;
inserer(TAB[6],a37,17);
ELEMENT a38=elementCreer();
a38->DATE.jour=18;
a38->DATE.mois=2;
a38->DATE.an=2021;
a38->caspos=14;
a38->deces=15;
a38->gueris=5;
a38->nbrevacc=2;
inserer(TAB[6],a38,18);
ELEMENT a39=elementCreer();
a39->DATE.jour=19;
a39->DATE.mois=2;
a39->DATE.an=2021;
a39->caspos=10;
a39->deces=25;
a39->gueris=4;
a39->nbrevacc=0;
inserer(TAB[6],a39,19);
ELEMENT a40=elementCreer();
a40->DATE.jour=20;
a40->DATE.mois=2;
a40->DATE.an=2021;
a40->caspos=14;
a40->deces=25;
a40->gueris=45;
a40->nbrevacc=24;
inserer(TAB[6],a40,20);
//7 - informations related to JENDOUBA :
ELEMENT a41=elementCreer();
a41->DATE.jour=1;
a41->DATE.mois=2;
a41->DATE.an=2021;
a41->caspos=4;
a41->deces=5;
a41->gueris=5;
a41->nbrevacc=0;
inserer(TAB[7],a41,1);
ELEMENT a42=elementCreer();
a42->DATE.jour=2;
a42->DATE.mois=2;
a42->DATE.an=2021;
a42->caspos=200;
a42->deces=1;
a42->gueris=0;
a42->nbrevacc=0;
inserer(TAB[7],a42,2);
ELEMENT a43=elementCreer();
a43->DATE.jour=3;
a43->DATE.mois=2;
a43->DATE.an=2021;
a43->caspos=80;
a43->deces=25;
a43->gueris=45;
a43->nbrevacc=2;
inserer(TAB[7],a43,3);
ELEMENT a44=elementCreer();
a44->DATE.jour=4;
a44->DATE.mois=2;
a44->DATE.an=2021;
a44->caspos=8;
a44->deces=25;
a44->gueris=5;
a44->nbrevacc=21;
inserer(TAB[7],a44,4);
ELEMENT a45=elementCreer();
a45->DATE.jour=5;
a45->DATE.mois=2;
a45->DATE.an=2021;
a45->caspos=80;
a45->deces=25;
a45->gueris=5;
a45->nbrevacc=0;
inserer(TAB[7],a45,5);
ELEMENT a46=elementCreer();
a46->DATE.jour=6;
a46->DATE.mois=2;
a46->DATE.an=2021;
a46->caspos=10;
a46->deces=5;
a46->gueris=5;
a46->nbrevacc=40;
inserer(TAB[7],a46,6);
ELEMENT a47=elementCreer();
a47->DATE.jour=7;
a47->DATE.mois=2;
a47->DATE.an=2021;
a47->caspos=60;
a47->deces=25;
a47->gueris=4;
a47->nbrevacc=7;
inserer(TAB[7],a47,7);
ELEMENT a48=elementCreer();
a48->DATE.jour=8;
a48->DATE.mois=2;
a48->DATE.an=2021;
a48->caspos=80;
a48->deces=25;
a48->gueris=45;
a48->nbrevacc=200;
inserer(TAB[7],a48,8);
ELEMENT a49=elementCreer();
a49->DATE.jour=9;
a49->DATE.mois=2;
a49->DATE.an=2021;
a49->caspos=80;
a49->deces=25;
a49->gueris=45;
a49->nbrevacc=2;
inserer(TAB[7],a49,9);
ELEMENT a50=elementCreer();
a50->DATE.jour=10;
a50->DATE.mois=2;
a50->DATE.an=2020;
a50->caspos=80;
a50->deces=25;
a50->gueris=45;
a50->nbrevacc=200;
inserer(TAB[7],a50,10);
ELEMENT a51=elementCreer();
a51->DATE.jour=11;
a51->DATE.mois=2;
a51->DATE.an=2021;
a51->caspos=80;
a51->deces=25;
a51->gueris=45;
a51->nbrevacc=200;
inserer(TAB[7],a51,11);
ELEMENT a52=elementCreer();
a52->DATE.jour=12;
a52->DATE.mois=2;
a52->DATE.an=2021;
a52->caspos=80;
a52->deces=25;
a52->gueris=45;
a52->nbrevacc=200;
inserer(TAB[7],a52,12);
ELEMENT a53=elementCreer();
a53->DATE.jour=13;
a53->DATE.mois=2;
a53->DATE.an=2021;
a53->caspos=80;
a53->deces=25;
a53->gueris=45;
a53->nbrevacc=0;
inserer(TAB[7],a53,13);
ELEMENT a54=elementCreer();
a54->DATE.jour=14;
a54->DATE.mois=3;
a54->DATE.an=2021;
a54->caspos=7;
a54->deces=15;
a54->gueris=15;
a54->nbrevacc=21;
inserer(TAB[7],a54,14);
ELEMENT a55=elementCreer();
a55->DATE.jour=15;
a55->DATE.mois=2;
a55->DATE.an=2021;
a55->caspos=80;
a55->deces=25;
a55->gueris=45;
a55->nbrevacc=0;
inserer(TAB[7],a55,15);
ELEMENT a56=elementCreer();
a56->DATE.jour=16;
a56->DATE.mois=2;
a56->DATE.an=2021;
a56->caspos=4;
a56->deces=12;
a56->gueris=45;
a56->nbrevacc=0;
inserer(TAB[7],a56,16);
ELEMENT a57=elementCreer();
a57->DATE.jour=17;
a57->DATE.mois=2;
a57->DATE.an=2021;
a57->caspos=80;
a57->deces=25;
a57->gueris=25;
a57->nbrevacc=10;
inserer(TAB[7],a57,17);
ELEMENT a58=elementCreer();
a58->DATE.jour=18;
a58->DATE.mois=2;
a58->DATE.an=2021;
a58->caspos=14;
a58->deces=15;
a58->gueris=5;
a58->nbrevacc=2;
inserer(TAB[7],a58,18);
ELEMENT a59=elementCreer();
a59->DATE.jour=19;
a59->DATE.mois=2;
a59->DATE.an=2021;
a59->caspos=10;
a59->deces=25;
a59->gueris=4;
a59->nbrevacc=0;
inserer(TAB[7],a59,19);
ELEMENT a60=elementCreer();
a60->DATE.jour=20;
a60->DATE.mois=2;
a60->DATE.an=2021;
a60->caspos=14;
a60->deces=25;
a60->gueris=45;
a60->nbrevacc=24;
inserer(TAB[7],a60,20);
//10 - informations related to KEBILI :
ELEMENT b1=elementCreer();
b1->DATE.jour=1;
b1->DATE.mois=3;
b1->DATE.an=2021;
b1->caspos=4;
b1->deces=5;
b1->gueris=5;
b1->nbrevacc=0;
inserer(TAB[10],b1,1);
ELEMENT b2=elementCreer();
b2->DATE.jour=2;
b2->DATE.mois=3;
b2->DATE.an=2021;
b2->caspos=200;
b2->deces=1;
b2->gueris=0;
b2->nbrevacc=0;
inserer(TAB[10],b2,2);
ELEMENT b3=elementCreer();
b3->DATE.jour=3;
b3->DATE.mois=3;
b3->DATE.an=2021;
b3->caspos=80;
b3->deces=25;
b3->gueris=45;
b3->nbrevacc=2;
inserer(TAB[10],b3,3);
ELEMENT b4=elementCreer();
b4->DATE.jour=4;
b4->DATE.mois=3;
b4->DATE.an=2021;
b4->caspos=8;
b4->deces=25;
b4->gueris=5;
b4->nbrevacc=21;
inserer(TAB[10],b4,4);
ELEMENT b5=elementCreer();
b5->DATE.jour=5;
b5->DATE.mois=3;
b5->DATE.an=2021;
b5->caspos=80;
b5->deces=25;
b5->gueris=5;
b5->nbrevacc=0;
inserer(TAB[10],b5,5);
ELEMENT b6=elementCreer();
b6->DATE.jour=6;
b6->DATE.mois=3;
b6->DATE.an=2021;
b6->caspos=10;
b6->deces=5;
b6->gueris=5;
b6->nbrevacc=40;
inserer(TAB[10],b6,6);
ELEMENT b7=elementCreer();
b7->DATE.jour=7;
b7->DATE.mois=3;
b7->DATE.an=2021;
b7->caspos=60;
b7->deces=25;
b7->gueris=4;
b7->nbrevacc=7;
inserer(TAB[10],b7,7);
ELEMENT b8=elementCreer();
b8->DATE.jour=8;
b8->DATE.mois=3;
b8->DATE.an=2021;
b8->caspos=80;
b8->deces=25;
b8->gueris=45;
b8->nbrevacc=40;
inserer(TAB[10],b8,8);
ELEMENT b9=elementCreer();
b9->DATE.jour=9;
b9->DATE.mois=3;
b9->DATE.an=2021;
b9->caspos=80;
b9->deces=25;
b9->gueris=45;
b9->nbrevacc=2;
inserer(TAB[10],b9,9);
ELEMENT b10=elementCreer();
b10->DATE.jour=10;
b10->DATE.mois=3;
b10->DATE.an=2020;
b10->caspos=80;
b10->deces=25;
b10->gueris=45;
b10->nbrevacc=200;
inserer(TAB[10],b10,10);
ELEMENT b11=elementCreer();
b11->DATE.jour=11;
b11->DATE.mois=3;
b11->DATE.an=2021;
b11->caspos=80;
b11->deces=25;
b11->gueris=45;
b11->nbrevacc=200;
inserer(TAB[10],b11,11);
ELEMENT b12=elementCreer();
b12->DATE.jour=12;
b12->DATE.mois=3;
b12->DATE.an=2021;
b12->caspos=80;
b12->deces=25;
b12->gueris=45;
b12->nbrevacc=200;
inserer(TAB[10],b12,12);
ELEMENT b13=elementCreer();
b13->DATE.jour=13;
b13->DATE.mois=3;
b13->DATE.an=2021;
b13->caspos=80;
b13->deces=25;
b13->gueris=45;
b13->nbrevacc=0;
inserer(TAB[10],b13,13);
ELEMENT b14=elementCreer();
b14->DATE.jour=14;
b14->DATE.mois=3;
b14->DATE.an=2021;
b14->caspos=7;
b14->deces=15;
b14->gueris=15;
b14->nbrevacc=21;
inserer(TAB[10],b14,14);
ELEMENT b15=elementCreer();
b15->DATE.jour=15;
b15->DATE.mois=3;
b15->DATE.an=2021;
b15->caspos=80;
b15->deces=25;
b15->gueris=45;
b15->nbrevacc=0;
inserer(TAB[10],b15,15);
ELEMENT b16=elementCreer();
b16->DATE.jour=16;
b16->DATE.mois=3;
b16->DATE.an=2021;
b16->caspos=4;
b16->deces=12;
b16->gueris=45;
b16->nbrevacc=0;
inserer(TAB[10],b16,16);
ELEMENT b17=elementCreer();
b17->DATE.jour=17;
b17->DATE.mois=3;
b17->DATE.an=2021;
b17->caspos=80;
b17->deces=25;
b17->gueris=25;
b17->nbrevacc=10;
inserer(TAB[10],b17,17);
ELEMENT b18=elementCreer();
b18->DATE.jour=18;
b18->DATE.mois=3;
b18->DATE.an=2021;
b18->caspos=14;
b18->deces=15;
b18->gueris=5;
b18->nbrevacc=2;
inserer(TAB[10],b18,18);
ELEMENT b19=elementCreer();
b19->DATE.jour=19;
b19->DATE.mois=3;
b19->DATE.an=2021;
b19->caspos=10;
b19->deces=25;
b19->gueris=4;
b19->nbrevacc=0;
inserer(TAB[10],b19,19);
ELEMENT b20=elementCreer();
b20->DATE.jour=20;
b20->DATE.mois=3;
b20->DATE.an=2021;
b20->caspos=14;
b20->deces=25;
b20->gueris=45;
b20->nbrevacc=24;
inserer(TAB[10],b20,20);
//11 - informations related to LA MANOUBA :
ELEMENT b21=elementCreer();
b21->DATE.jour=1;
b21->DATE.mois=2;
b21->DATE.an=2021;
b21->caspos=4;
b21->deces=5;
b21->gueris=5;
b21->nbrevacc=0;
inserer(TAB[11],b21,1);
ELEMENT b22=elementCreer();
b22->DATE.jour=2;
b22->DATE.mois=2;
b22->DATE.an=2021;
b22->caspos=200;
b22->deces=1;
b22->gueris=0;
b22->nbrevacc=0;
inserer(TAB[11],b22,2);
ELEMENT b23=elementCreer();
b23->DATE.jour=3;
b23->DATE.mois=2;
b23->DATE.an=2021;
b23->caspos=80;
b23->deces=25;
b23->gueris=45;
b23->nbrevacc=2;
inserer(TAB[11],b23,3);
ELEMENT b24=elementCreer();
b24->DATE.jour=4;
b24->DATE.mois=2;
b24->DATE.an=2021;
b24->caspos=8;
b24->deces=25;
b24->gueris=5;
b24->nbrevacc=21;
inserer(TAB[11],b24,4);
ELEMENT b25=elementCreer();
b25->DATE.jour=5;
b25->DATE.mois=2;
b25->DATE.an=2021;
b25->caspos=80;
b25->deces=25;
b25->gueris=5;
b25->nbrevacc=0;
inserer(TAB[11],b25,5);
ELEMENT b26=elementCreer();
b26->DATE.jour=6;
b26->DATE.mois=2;
b26->DATE.an=2021;
b26->caspos=10;
b26->deces=5;
b26->gueris=5;
b26->nbrevacc=40;
inserer(TAB[11],b26,6);
ELEMENT b27=elementCreer();
b27->DATE.jour=7;
b27->DATE.mois=2;
b27->DATE.an=2021;
b27->caspos=60;
b27->deces=25;
b27->gueris=4;
b27->nbrevacc=7;
inserer(TAB[11],b27,7);
ELEMENT b28=elementCreer();
b28->DATE.jour=8;
b28->DATE.mois=2;
b28->DATE.an=2021;
b28->caspos=80;
b28->deces=25;
b28->gueris=45;
b28->nbrevacc=200;
inserer(TAB[11],b28,8);
ELEMENT b29=elementCreer();
b29->DATE.jour=9;
b29->DATE.mois=2;
b29->DATE.an=2021;
b29->caspos=80;
b29->deces=25;
b29->gueris=45;
b29->nbrevacc=2;
inserer(TAB[11],b29,9);
ELEMENT b30=elementCreer();
b30->DATE.jour=10;
b30->DATE.mois=2;
b30->DATE.an=2020;
b30->caspos=80;
b30->deces=25;
b30->gueris=45;
b30->nbrevacc=200;
inserer(TAB[11],b30,10);
ELEMENT b31=elementCreer();
b31->DATE.jour=11;
b31->DATE.mois=2;
b31->DATE.an=2021;
b31->caspos=80;
b31->deces=25;
b31->gueris=45;
b31->nbrevacc=200;
inserer(TAB[11],b31,11);
ELEMENT b32=elementCreer();
b32->DATE.jour=12;
b32->DATE.mois=2;
b32->DATE.an=2021;
b32->caspos=80;
b32->deces=25;
b32->gueris=45;
b32->nbrevacc=200;
inserer(TAB[11],b32,12);
ELEMENT b33=elementCreer();
b33->DATE.jour=13;
b33->DATE.mois=2;
b33->DATE.an=2021;
b33->caspos=80;
b33->deces=25;
b33->gueris=45;
b33->nbrevacc=0;
inserer(TAB[11],b33,13);
ELEMENT b34=elementCreer();
b34->DATE.jour=14;
b34->DATE.mois=3;
b34->DATE.an=2021;
b34->caspos=7;
b34->deces=15;
b34->gueris=15;
b34->nbrevacc=21;
inserer(TAB[11],b34,14);
ELEMENT b35=elementCreer();
b35->DATE.jour=15;
b35->DATE.mois=2;
b35->DATE.an=2021;
b35->caspos=80;
b35->deces=25;
b35->gueris=45;
b15->nbrevacc=0;
inserer(TAB[11],b35,15);
ELEMENT b36=elementCreer();
b36->DATE.jour=16;
b36->DATE.mois=2;
b36->DATE.an=2021;
b36->caspos=4;
b36->deces=12;
b36->gueris=45;
b36->nbrevacc=0;
inserer(TAB[11],b36,16);
ELEMENT b37=elementCreer();
b37->DATE.jour=17;
b37->DATE.mois=2;
b37->DATE.an=2021;
b37->caspos=80;
b37->deces=25;
b37->gueris=25;
b37->nbrevacc=10;
inserer(TAB[11],b37,17);
ELEMENT b38=elementCreer();
b38->DATE.jour=18;
b38->DATE.mois=2;
b38->DATE.an=2021;
b38->caspos=14;
b38->deces=15;
b38->gueris=5;
b38->nbrevacc=2;
inserer(TAB[11],b38,18);
ELEMENT b39=elementCreer();
b39->DATE.jour=19;
b39->DATE.mois=2;
b39->DATE.an=2021;
b39->caspos=10;
b39->deces=25;
b39->gueris=4;
b39->nbrevacc=0;
inserer(TAB[11],b39,19);
ELEMENT b40=elementCreer();
b40->DATE.jour=20;
b40->DATE.mois=2;
b40->DATE.an=2021;
b40->caspos=14;
b40->deces=25;
b40->gueris=45;
b40->nbrevacc=24;
inserer(TAB[11],b40,20);
//13 - informations related to MAHDIA :
ELEMENT f1=elementCreer();
f1->DATE.jour=1;
f1->DATE.mois=3;
f1->DATE.an=2021;
f1->caspos=4;
f1->deces=5;
f1->gueris=5;
f1->nbrevacc=0;
inserer(TAB[13],f1,1);
ELEMENT f2=elementCreer();
f2->DATE.jour=2;
f2->DATE.mois=3;
f2->DATE.an=2021;
f2->caspos=200;
f2->deces=1;
f2->gueris=0;
f2->nbrevacc=0;
inserer(TAB[13],f2,2);
ELEMENT f3=elementCreer();
f3->DATE.jour=3;
f3->DATE.mois=3;
f3->DATE.an=2021;
f3->caspos=80;
f3->deces=25;
f3->gueris=45;
f3->nbrevacc=2;
inserer(TAB[13],f3,3);
ELEMENT f4=elementCreer();
f4->DATE.jour=4;
f4->DATE.mois=3;
f4->DATE.an=2021;
f4->caspos=8;
f4->deces=25;
f4->gueris=5;
f4->nbrevacc=21;
inserer(TAB[13],f4,4);
ELEMENT f5=elementCreer();
f5->DATE.jour=5;
f5->DATE.mois=3;
f5->DATE.an=2021;
f5->caspos=80;
f5->deces=25;
f5->gueris=5;
f5->nbrevacc=0;
inserer(TAB[13],f5,5);
ELEMENT f6=elementCreer();
f6->DATE.jour=6;
f6->DATE.mois=3;
f6->DATE.an=2021;
f6->caspos=10;
f6->deces=5;
f6->gueris=5;
f6->nbrevacc=40;
inserer(TAB[13],f6,6);
ELEMENT f7=elementCreer();
f7->DATE.jour=7;
f7->DATE.mois=3;
f7->DATE.an=2021;
f7->caspos=60;
f7->deces=25;
f7->gueris=4;
f7->nbrevacc=7;
inserer(TAB[13],f7,7);
ELEMENT f8=elementCreer();
f8->DATE.jour=8;
f8->DATE.mois=3;
f8->DATE.an=2021;
f8->caspos=80;
f8->deces=25;
f8->gueris=45;
f8->nbrevacc=40;
inserer(TAB[13],f8,8);
ELEMENT f9=elementCreer();
f9->DATE.jour=9;
f9->DATE.mois=3;
f9->DATE.an=2021;
f9->caspos=80;
f9->deces=25;
f9->gueris=45;
f9->nbrevacc=2;
inserer(TAB[13],f9,9);
ELEMENT f10=elementCreer();
f10->DATE.jour=10;
f10->DATE.mois=3;
f10->DATE.an=2020;
f10->caspos=80;
f10->deces=25;
f10->gueris=45;
f10->nbrevacc=200;
inserer(TAB[13],f10,10);
ELEMENT f11=elementCreer();
f11->DATE.jour=11;
f11->DATE.mois=3;
f11->DATE.an=2021;
f11->caspos=80;
f11->deces=25;
f11->gueris=45;
f11->nbrevacc=200;
inserer(TAB[13],f11,11);
ELEMENT f12=elementCreer();
f12->DATE.jour=12;
f12->DATE.mois=3;
f12->DATE.an=2021;
f12->caspos=80;
f12->deces=25;
f12->gueris=45;
f12->nbrevacc=200;
inserer(TAB[13],f12,12);
ELEMENT f13=elementCreer();
f13->DATE.jour=13;
f13->DATE.mois=3;
f13->DATE.an=2021;
f13->caspos=80;
f13->deces=25;
f13->gueris=45;
f13->nbrevacc=0;
inserer(TAB[13],f13,13);
ELEMENT f14=elementCreer();
f14->DATE.jour=14;
f14->DATE.mois=3;
f14->DATE.an=2021;
f14->caspos=7;
f14->deces=15;
f14->gueris=15;
f14->nbrevacc=21;
inserer(TAB[13],f14,14);
ELEMENT f15=elementCreer();
f15->DATE.jour=15;
f15->DATE.mois=3;
f15->DATE.an=2021;
f15->caspos=80;
f15->deces=25;
f15->gueris=45;
f15->nbrevacc=0;
inserer(TAB[13],f15,15);
ELEMENT f16=elementCreer();
f16->DATE.jour=16;
f16->DATE.mois=3;
f16->DATE.an=2021;
f16->caspos=4;
f16->deces=12;
f16->gueris=45;
f16->nbrevacc=0;
inserer(TAB[13],f16,16);
ELEMENT f17=elementCreer();
f17->DATE.jour=17;
f17->DATE.mois=3;
f17->DATE.an=2021;
f17->caspos=80;
f17->deces=25;
f17->gueris=25;
f17->nbrevacc=10;
inserer(TAB[13],f17,17);
ELEMENT f18=elementCreer();
f18->DATE.jour=18;
f18->DATE.mois=3;
f18->DATE.an=2021;
f18->caspos=14;
f18->deces=15;
f18->gueris=5;
f18->nbrevacc=2;
inserer(TAB[13],f18,18);
ELEMENT f19=elementCreer();
f19->DATE.jour=19;
f19->DATE.mois=3;
f19->DATE.an=2021;
f19->caspos=10;
f19->deces=25;
f19->gueris=4;
f19->nbrevacc=0;
inserer(TAB[13],f19,19);
ELEMENT f20=elementCreer();
f20->DATE.jour=20;
f20->DATE.mois=3;
f20->DATE.an=2021;
f20->caspos=14;
f20->deces=25;
f20->gueris=45;
f20->nbrevacc=24;
inserer(TAB[13],f20,20);
//14 - informations related to MEDENINE:
ELEMENT f21=elementCreer();
f21->DATE.jour=1;
f21->DATE.mois=2;
f21->DATE.an=2021;
f21->caspos=4;
f21->deces=5;
f21->gueris=5;
f21->nbrevacc=0;
inserer(TAB[14],f21,1);
ELEMENT f22=elementCreer();
f22->DATE.jour=2;
f22->DATE.mois=2;
f22->DATE.an=2021;
f22->caspos=200;
f22->deces=1;
f22->gueris=0;
f22->nbrevacc=0;
inserer(TAB[14],f22,2);
ELEMENT f23=elementCreer();
f23->DATE.jour=3;
f23->DATE.mois=2;
f23->DATE.an=2021;
f23->caspos=80;
f23->deces=25;
f23->gueris=45;
f23->nbrevacc=2;
inserer(TAB[14],f23,3);
ELEMENT f24=elementCreer();
f24->DATE.jour=4;
f24->DATE.mois=2;
f24->DATE.an=2021;
f24->caspos=8;
f24->deces=25;
f24->gueris=5;
f24->nbrevacc=21;
inserer(TAB[14],f24,4);
ELEMENT f25=elementCreer();
f25->DATE.jour=5;
f25->DATE.mois=2;
f25->DATE.an=2021;
f25->caspos=80;
f25->deces=25;
f25->gueris=5;
f25->nbrevacc=0;
inserer(TAB[14],f25,5);
ELEMENT f26=elementCreer();
f26->DATE.jour=6;
f26->DATE.mois=2;
f26->DATE.an=2021;
f26->caspos=10;
f26->deces=5;
f26->gueris=5;
f26->nbrevacc=40;
inserer(TAB[14],f26,6);
ELEMENT f27=elementCreer();
f27->DATE.jour=7;
f27->DATE.mois=2;
f27->DATE.an=2021;
f27->caspos=60;
f27->deces=25;
f27->gueris=4;
f27->nbrevacc=7;
inserer(TAB[14],f27,7);
ELEMENT f28=elementCreer();
f28->DATE.jour=8;
f28->DATE.mois=2;
f28->DATE.an=2021;
f28->caspos=80;
f28->deces=25;
f28->gueris=45;
f28->nbrevacc=200;
inserer(TAB[14],f28,8);
ELEMENT f29=elementCreer();
f29->DATE.jour=9;
f29->DATE.mois=2;
f29->DATE.an=2021;
f29->caspos=80;
f29->deces=25;
f29->gueris=45;
f29->nbrevacc=2;
inserer(TAB[14],f29,9);
ELEMENT f30=elementCreer();
f30->DATE.jour=10;
f30->DATE.mois=2;
f30->DATE.an=2020;
f30->caspos=80;
f30->deces=25;
f30->gueris=45;
f30->nbrevacc=200;
inserer(TAB[14],f30,10);
ELEMENT f31=elementCreer();
f31->DATE.jour=11;
f31->DATE.mois=2;
f31->DATE.an=2021;
f31->caspos=80;
f31->deces=25;
f31->gueris=45;
f31->nbrevacc=200;
inserer(TAB[14],f31,11);
ELEMENT f32=elementCreer();
f32->DATE.jour=12;
f32->DATE.mois=2;
f32->DATE.an=2021;
f32->caspos=80;
f32->deces=25;
f32->gueris=45;
f32->nbrevacc=200;
inserer(TAB[14],f32,12);
ELEMENT f33=elementCreer();
f33->DATE.jour=13;
f33->DATE.mois=2;
f33->DATE.an=2021;
f33->caspos=80;
f33->deces=25;
f33->gueris=45;
f33->nbrevacc=0;
inserer(TAB[14],f33,13);
ELEMENT f34=elementCreer();
f34->DATE.jour=14;
f34->DATE.mois=3;
f34->DATE.an=2021;
f34->caspos=7;
f34->deces=15;
f34->gueris=15;
f34->nbrevacc=21;
inserer(TAB[14],f34,14);
ELEMENT f35=elementCreer();
f35->DATE.jour=15;
f35->DATE.mois=2;
f35->DATE.an=2021;
f35->caspos=80;
f35->deces=25;
f35->gueris=45;
f35->nbrevacc=0;
inserer(TAB[14],f35,15);
ELEMENT f36=elementCreer();
f36->DATE.jour=16;
f36->DATE.mois=2;
f36->DATE.an=2021;
f36->caspos=4;
f36->deces=12;
f36->gueris=45;
f36->nbrevacc=0;
inserer(TAB[14],f36,16);
ELEMENT f37=elementCreer();
f37->DATE.jour=17;
f37->DATE.mois=2;
f37->DATE.an=2021;
f37->caspos=80;
f37->deces=25;
f37->gueris=25;
f37->nbrevacc=10;
inserer(TAB[14],f37,17);
ELEMENT f38=elementCreer();
f38->DATE.jour=18;
f38->DATE.mois=2;
f38->DATE.an=2021;
f38->caspos=14;
f38->deces=15;
f38->gueris=5;
f38->nbrevacc=2;
inserer(TAB[14],f38,18);
ELEMENT f39=elementCreer();
f39->DATE.jour=19;
f39->DATE.mois=2;
f39->DATE.an=2021;
f39->caspos=10;
f39->deces=25;
f39->gueris=4;
f39->nbrevacc=0;
inserer(TAB[14],f39,19);
ELEMENT f40=elementCreer();
f40->DATE.jour=20;
f40->DATE.mois=2;
f40->DATE.an=2021;
f40->caspos=14;
f40->deces=25;
f40->gueris=45;
f40->nbrevacc=24;
inserer(TAB[14],f40,20);
//16 - informations related to NABEUL :
ELEMENT h1=elementCreer();
h1->DATE.jour=1;
h1->DATE.mois=3;
h1->DATE.an=2021;
h1->caspos=4;
h1->deces=5;
h1->gueris=5;
h1->nbrevacc=0;
inserer(TAB[16],h1,1);
ELEMENT h2=elementCreer();
h2->DATE.jour=2;
h2->DATE.mois=3;
h2->DATE.an=2021;
h2->caspos=200;
h2->deces=1;
h2->gueris=0;
h2->nbrevacc=0;
inserer(TAB[16],h2,2);
ELEMENT h3=elementCreer();
h3->DATE.jour=3;
h3->DATE.mois=3;
h3->DATE.an=2021;
h3->caspos=80;
h3->deces=25;
h3->gueris=45;
h3->nbrevacc=2;
inserer(TAB[16],h3,3);
ELEMENT h4=elementCreer();
h4->DATE.jour=4;
h4->DATE.mois=3;
h4->DATE.an=2021;
h4->caspos=8;
h4->deces=25;
h4->gueris=5;
h4->nbrevacc=21;
inserer(TAB[16],h4,4);
ELEMENT h5=elementCreer();
h5->DATE.jour=5;
h5->DATE.mois=3;
h5->DATE.an=2021;
h5->caspos=80;
h5->deces=25;
h5->gueris=5;
h5->nbrevacc=0;
inserer(TAB[16],h5,5);
ELEMENT h6=elementCreer();
h6->DATE.jour=6;
h6->DATE.mois=3;
h6->DATE.an=2021;
h6->caspos=10;
h6->deces=5;
h6->gueris=5;
h6->nbrevacc=40;
inserer(TAB[16],h6,6);
ELEMENT h7=elementCreer();
h7->DATE.jour=7;
h7->DATE.mois=3;
h7->DATE.an=2021;
h7->caspos=60;
h7->deces=25;
h7->gueris=4;
h7->nbrevacc=7;
inserer(TAB[16],h7,7);
ELEMENT h8=elementCreer();
h8->DATE.jour=8;
h8->DATE.mois=3;
h8->DATE.an=2021;
h8->caspos=80;
h8->deces=25;
h8->gueris=45;
h8->nbrevacc=40;
inserer(TAB[16],h8,8);
ELEMENT h9=elementCreer();
h9->DATE.jour=9;
h9->DATE.mois=3;
h9->DATE.an=2021;
h9->caspos=80;
h9->deces=25;
h9->gueris=45;
h9->nbrevacc=2;
inserer(TAB[16],h9,9);
ELEMENT h10=elementCreer();
h10->DATE.jour=10;
h10->DATE.mois=3;
h10->DATE.an=2020;
h10->caspos=80;
h10->deces=25;
h10->gueris=45;
h10->nbrevacc=200;
inserer(TAB[16],h10,10);
ELEMENT h11=elementCreer();
h11->DATE.jour=11;
h11->DATE.mois=3;
h11->DATE.an=2021;
h11->caspos=80;
h11->deces=25;
h11->gueris=45;
h11->nbrevacc=200;
inserer(TAB[16],h11,11);
ELEMENT h12=elementCreer();
h12->DATE.jour=12;
h12->DATE.mois=3;
h12->DATE.an=2021;
h12->caspos=80;
h12->deces=25;
h12->gueris=45;
h12->nbrevacc=200;
inserer(TAB[16],h12,12);
ELEMENT h13=elementCreer();
h13->DATE.jour=13;
h13->DATE.mois=3;
h13->DATE.an=2021;
h13->caspos=80;
h13->deces=25;
h13->gueris=45;
h13->nbrevacc=0;
inserer(TAB[16],h13,13);
ELEMENT h14=elementCreer();
h14->DATE.jour=14;
h14->DATE.mois=3;
h14->DATE.an=2021;
h14->caspos=7;
h14->deces=15;
h14->gueris=15;
h14->nbrevacc=21;
inserer(TAB[16],h14,14);
ELEMENT h15=elementCreer();
h15->DATE.jour=15;
h15->DATE.mois=3;
h15->DATE.an=2021;
h15->caspos=80;
h15->deces=25;
h15->gueris=45;
h15->nbrevacc=0;
inserer(TAB[16],h15,15);
ELEMENT h16=elementCreer();
h16->DATE.jour=16;
h16->DATE.mois=3;
h16->DATE.an=2021;
h16->caspos=4;
h16->deces=12;
h16->gueris=45;
h16->nbrevacc=0;
inserer(TAB[16],h16,16);
ELEMENT h17=elementCreer();
h17->DATE.jour=17;
h17->DATE.mois=3;
h17->DATE.an=2021;
h17->caspos=80;
h17->deces=25;
h17->gueris=25;
h17->nbrevacc=10;
inserer(TAB[16],h17,17);
ELEMENT h18=elementCreer();
h18->DATE.jour=18;
h18->DATE.mois=3;
h18->DATE.an=2021;
h18->caspos=14;
h18->deces=15;
h18->gueris=5;
h18->nbrevacc=2;
inserer(TAB[16],h18,18);
ELEMENT h19=elementCreer();
h19->DATE.jour=19;
h19->DATE.mois=3;
h19->DATE.an=2021;
h19->caspos=10;
h19->deces=25;
h19->gueris=4;
h19->nbrevacc=0;
inserer(TAB[16],h19,19);
ELEMENT h20=elementCreer();
h20->DATE.jour=20;
h20->DATE.mois=3;
h20->DATE.an=2021;
h20->caspos=14;
h20->deces=25;
h20->gueris=45;
h20->nbrevacc=24;
inserer(TAB[16],h20,20);
//17 - informations related to sfax :
ELEMENT h21=elementCreer();
h21->DATE.jour=1;
h21->DATE.mois=2;
h21->DATE.an=2021;
h21->caspos=4;
h21->deces=5;
h21->gueris=5;
h21->nbrevacc=0;
inserer(TAB[17],h21,1);
ELEMENT h22=elementCreer();
h22->DATE.jour=2;
h22->DATE.mois=2;
h22->DATE.an=2021;
h22->caspos=200;
h22->deces=1;
h22->gueris=0;
h22->nbrevacc=0;
inserer(TAB[17],h22,2);
ELEMENT h23=elementCreer();
h23->DATE.jour=3;
h23->DATE.mois=2;
h23->DATE.an=2021;
h23->caspos=80;
h23->deces=25;
h23->gueris=45;
h23->nbrevacc=2;
inserer(TAB[17],h23,3);
ELEMENT h24=elementCreer();
h24->DATE.jour=4;
h24->DATE.mois=2;
h24->DATE.an=2021;
h24->caspos=8;
h24->deces=25;
h24->gueris=5;
h24->nbrevacc=21;
inserer(TAB[17],h24,4);
ELEMENT h25=elementCreer();
h25->DATE.jour=5;
h25->DATE.mois=2;
h25->DATE.an=2021;
h25->caspos=80;
h25->deces=25;
h25->gueris=5;
h25->nbrevacc=0;
inserer(TAB[17],h25,5);
ELEMENT h26=elementCreer();
h26->DATE.jour=6;
h26->DATE.mois=2;
h26->DATE.an=2021;
h26->caspos=10;
h26->deces=5;
h26->gueris=5;
h26->nbrevacc=40;
inserer(TAB[17],h26,6);
ELEMENT h27=elementCreer();
h27->DATE.jour=7;
h27->DATE.mois=2;
h27->DATE.an=2021;
h27->caspos=60;
h27->deces=25;
h27->gueris=4;
h27->nbrevacc=7;
inserer(TAB[17],h27,7);
ELEMENT h28=elementCreer();
h28->DATE.jour=8;
h28->DATE.mois=2;
h28->DATE.an=2021;
h28->caspos=80;
h28->deces=25;
h28->gueris=45;
h28->nbrevacc=200;
inserer(TAB[17],h28,8);
ELEMENT h29=elementCreer();
h29->DATE.jour=9;
h29->DATE.mois=2;
h29->DATE.an=2021;
h29->caspos=80;
h29->deces=25;
h29->gueris=45;
h29->nbrevacc=2;
inserer(TAB[17],h29,9);
ELEMENT h30=elementCreer();
h30->DATE.jour=10;
h30->DATE.mois=2;
h30->DATE.an=2020;
h30->caspos=80;
h30->deces=25;
h30->gueris=45;
h30->nbrevacc=200;
inserer(TAB[17],h30,10);
ELEMENT h31=elementCreer();
h31->DATE.jour=11;
h31->DATE.mois=2;
h31->DATE.an=2021;
h31->caspos=80;
h31->deces=25;
h31->gueris=45;
h31->nbrevacc=200;
inserer(TAB[17],h31,11);
ELEMENT h32=elementCreer();
h32->DATE.jour=12;
h32->DATE.mois=2;
h32->DATE.an=2021;
h32->caspos=80;
h32->deces=25;
h32->gueris=45;
h32->nbrevacc=200;
inserer(TAB[17],h32,12);
ELEMENT h33=elementCreer();
h33->DATE.jour=13;
h33->DATE.mois=2;
h33->DATE.an=2021;
h33->caspos=80;
h33->deces=25;
h33->gueris=45;
h33->nbrevacc=0;
inserer(TAB[17],h33,13);
ELEMENT h34=elementCreer();
h34->DATE.jour=14;
h34->DATE.mois=3;
h34->DATE.an=2021;
h34->caspos=7;
h34->deces=15;
h34->gueris=15;
h34->nbrevacc=21;
inserer(TAB[17],h34,14);
ELEMENT h35=elementCreer();
h35->DATE.jour=15;
h35->DATE.mois=2;
h35->DATE.an=2021;
h35->caspos=80;
h35->deces=25;
h35->gueris=45;
h35->nbrevacc=0;
inserer(TAB[17],h35,15);
ELEMENT h36=elementCreer();
h36->DATE.jour=16;
h36->DATE.mois=2;
h36->DATE.an=2021;
h36->caspos=4;
h36->deces=12;
h36->gueris=45;
h36->nbrevacc=0;
inserer(TAB[17],h36,16);
ELEMENT h37=elementCreer();
h37->DATE.jour=17;
h37->DATE.mois=2;
h37->DATE.an=2021;
h37->caspos=80;
h37->deces=25;
h37->gueris=25;
h37->nbrevacc=10;
inserer(TAB[17],h37,17);
ELEMENT h38=elementCreer();
h38->DATE.jour=18;
h38->DATE.mois=2;
h38->DATE.an=2021;
h38->caspos=14;
h38->deces=15;
h38->gueris=5;
h38->nbrevacc=2;
inserer(TAB[17],h38,18);
ELEMENT h39=elementCreer();
h39->DATE.jour=19;
h39->DATE.mois=2;
h39->DATE.an=2021;
h39->caspos=10;
h39->deces=25;
h39->gueris=4;
h39->nbrevacc=0;
inserer(TAB[17],h39,19);
ELEMENT h40=elementCreer();
h40->DATE.jour=20;
h40->DATE.mois=2;
h40->DATE.an=2021;
h40->caspos=14;
h40->deces=25;
h40->gueris=45;
h40->nbrevacc=24;
inserer(TAB[17],h40,20);
//18 - informations related to SIDI BOUZID :
ELEMENT p1=elementCreer();
p1->DATE.jour=1;
p1->DATE.mois=3;
p1->DATE.an=2021;
p1->caspos=4;
p1->deces=5;
p1->gueris=5;
p1->nbrevacc=0;
inserer(TAB[18],p1,1);
ELEMENT p2=elementCreer();
p2->DATE.jour=2;
p2->DATE.mois=3;
p2->DATE.an=2021;
p2->caspos=200;
p2->deces=1;
p2->gueris=0;
p2->nbrevacc=0;
inserer(TAB[18],p2,2);
ELEMENT p3=elementCreer();
p3->DATE.jour=3;
p3->DATE.mois=3;
p3->DATE.an=2021;
p3->caspos=80;
p3->deces=25;
p3->gueris=45;
p3->nbrevacc=2;
inserer(TAB[18],p3,3);
ELEMENT p4=elementCreer();
p4->DATE.jour=4;
p4->DATE.mois=3;
p4->DATE.an=2021;
p4->caspos=8;
p4->deces=25;
p4->gueris=5;
p4->nbrevacc=21;
inserer(TAB[18],p4,4);
ELEMENT p5=elementCreer();
p5->DATE.jour=5;
p5->DATE.mois=3;
p5->DATE.an=2021;
p5->caspos=80;
p5->deces=25;
p5->gueris=5;
p5->nbrevacc=0;
inserer(TAB[18],p5,5);
ELEMENT p6=elementCreer();
p6->DATE.jour=6;
p6->DATE.mois=3;
p6->DATE.an=2021;
p6->caspos=10;
p6->deces=5;
p6->gueris=5;
p6->nbrevacc=40;
inserer(TAB[18],p6,6);
ELEMENT p7=elementCreer();
p7->DATE.jour=7;
p7->DATE.mois=3;
p7->DATE.an=2021;
p7->caspos=60;
p7->deces=25;
p7->gueris=4;
p7->nbrevacc=7;
inserer(TAB[18],p7,7);
ELEMENT p8=elementCreer();
p8->DATE.jour=8;
p8->DATE.mois=3;
p8->DATE.an=2021;
p8->caspos=80;
p8->deces=25;
p8->gueris=45;
p8->nbrevacc=40;
inserer(TAB[18],p8,8);
ELEMENT p9=elementCreer();
p9->DATE.jour=9;
p9->DATE.mois=3;
p9->DATE.an=2021;
p9->caspos=80;
p9->deces=25;
p9->gueris=45;
p9->nbrevacc=2;
inserer(TAB[18],p9,9);
ELEMENT p10=elementCreer();
p10->DATE.jour=10;
p10->DATE.mois=3;
p10->DATE.an=2020;
p10->caspos=80;
p10->deces=25;
p10->gueris=45;
p10->nbrevacc=200;
inserer(TAB[18],p10,10);
ELEMENT p11=elementCreer();
p11->DATE.jour=11;
p11->DATE.mois=3;
p11->DATE.an=2021;
p11->caspos=80;
p11->deces=25;
p11->gueris=45;
p11->nbrevacc=200;
inserer(TAB[18],p11,11);
ELEMENT p12=elementCreer();
p12->DATE.jour=12;
p12->DATE.mois=3;
p12->DATE.an=2021;
p12->caspos=80;
p12->deces=25;
p12->gueris=45;
p12->nbrevacc=200;
inserer(TAB[18],p12,12);
ELEMENT p13=elementCreer();
p13->DATE.jour=13;
p13->DATE.mois=3;
p13->DATE.an=2021;
p13->caspos=80;
p13->deces=25;
p13->gueris=45;
p13->nbrevacc=0;
inserer(TAB[18],p13,13);
ELEMENT p14=elementCreer();
p14->DATE.jour=14;
p14->DATE.mois=3;
p14->DATE.an=2021;
p14->caspos=7;
p14->deces=15;
p14->gueris=15;
p14->nbrevacc=21;
inserer(TAB[18],p14,14);
ELEMENT p15=elementCreer();
p15->DATE.jour=15;
p15->DATE.mois=3;
p15->DATE.an=2021;
p15->caspos=80;
p15->deces=25;
p15->gueris=45;
p15->nbrevacc=0;
inserer(TAB[18],p15,15);
ELEMENT p16=elementCreer();
p16->DATE.jour=16;
p16->DATE.mois=3;
p16->DATE.an=2021;
p16->caspos=4;
p16->deces=12;
p16->gueris=45;
p16->nbrevacc=0;
inserer(TAB[18],p16,16);
ELEMENT p17=elementCreer();
p17->DATE.jour=17;
p17->DATE.mois=3;
p17->DATE.an=2021;
p17->caspos=80;
p17->deces=25;
p17->gueris=25;
p17->nbrevacc=10;
inserer(TAB[18],p17,17);
ELEMENT p18=elementCreer();
p18->DATE.jour=18;
p18->DATE.mois=3;
p18->DATE.an=2021;
p18->caspos=14;
p18->deces=15;
p18->gueris=5;
p18->nbrevacc=2;
inserer(TAB[18],p18,18);
ELEMENT p19=elementCreer();
p19->DATE.jour=19;
p19->DATE.mois=3;
p19->DATE.an=2021;
p19->caspos=10;
p19->deces=25;
p19->gueris=4;
p19->nbrevacc=0;
inserer(TAB[18],p19,19);
ELEMENT p20=elementCreer();
p20->DATE.jour=20;
p20->DATE.mois=3;
p20->DATE.an=2021;
p20->caspos=14;
p20->deces=25;
p20->gueris=45;
p20->nbrevacc=24;
inserer(TAB[18],p20,20);
//19 - informations related to SILIANA :
ELEMENT p21=elementCreer();
p21->DATE.jour=1;
p21->DATE.mois=2;
p21->DATE.an=2021;
p21->caspos=4;
p21->deces=5;
p21->gueris=5;
p21->nbrevacc=0;
inserer(TAB[19],p21,1);
ELEMENT p22=elementCreer();
p22->DATE.jour=2;
p22->DATE.mois=2;
p22->DATE.an=2021;
p22->caspos=200;
p22->deces=1;
p22->gueris=0;
p22->nbrevacc=0;
inserer(TAB[19],p22,2);
ELEMENT p23=elementCreer();
p23->DATE.jour=3;
p23->DATE.mois=2;
p23->DATE.an=2021;
p23->caspos=80;
p23->deces=25;
p23->gueris=45;
p23->nbrevacc=2;
inserer(TAB[19],p23,3);
ELEMENT p24=elementCreer();
p24->DATE.jour=4;
p24->DATE.mois=2;
p24->DATE.an=2021;
p24->caspos=8;
p24->deces=25;
p24->gueris=5;
p24->nbrevacc=21;
inserer(TAB[19],p24,4);
ELEMENT p25=elementCreer();
p25->DATE.jour=5;
p25->DATE.mois=2;
p25->DATE.an=2021;
p25->caspos=80;
p25->deces=25;
p25->gueris=5;
p25->nbrevacc=0;
inserer(TAB[19],p25,5);
ELEMENT p26=elementCreer();
p26->DATE.jour=6;
p26->DATE.mois=2;
p26->DATE.an=2021;
p26->caspos=10;
p26->deces=5;
p26->gueris=5;
p26->nbrevacc=40;
inserer(TAB[19],p26,6);
ELEMENT p27=elementCreer();
p27->DATE.jour=7;
p27->DATE.mois=2;
p27->DATE.an=2021;
p27->caspos=60;
p27->deces=25;
p27->gueris=4;
p27->nbrevacc=7;
inserer(TAB[19],p27,7);
ELEMENT p28=elementCreer();
p28->DATE.jour=8;
p28->DATE.mois=2;
p28->DATE.an=2021;
p28->caspos=80;
p28->deces=25;
p28->gueris=45;
p28->nbrevacc=200;
inserer(TAB[19],p28,8);
ELEMENT p29=elementCreer();
p29->DATE.jour=9;
p29->DATE.mois=2;
p29->DATE.an=2021;
p29->caspos=80;
p29->deces=25;
p29->gueris=45;
p29->nbrevacc=2;
inserer(TAB[19],p29,9);
ELEMENT p30=elementCreer();
p30->DATE.jour=10;
p30->DATE.mois=2;
p30->DATE.an=2020;
p30->caspos=80;
p30->deces=25;
p30->gueris=45;
p30->nbrevacc=200;
inserer(TAB[19],p30,10);
ELEMENT p31=elementCreer();
p31->DATE.jour=11;
p31->DATE.mois=2;
p31->DATE.an=2021;
p31->caspos=80;
p31->deces=25;
p31->gueris=45;
p31->nbrevacc=200;
inserer(TAB[19],p31,11);
ELEMENT p32=elementCreer();
p32->DATE.jour=12;
p32->DATE.mois=2;
p32->DATE.an=2021;
p32->caspos=80;
p32->deces=25;
p32->gueris=45;
p32->nbrevacc=200;
inserer(TAB[19],p32,12);
ELEMENT p33=elementCreer();
p33->DATE.jour=13;
p33->DATE.mois=2;
p33->DATE.an=2021;
p33->caspos=80;
p33->deces=25;
p33->gueris=45;
p33->nbrevacc=0;
inserer(TAB[19],p33,13);
ELEMENT p34=elementCreer();
p34->DATE.jour=14;
p34->DATE.mois=3;
p34->DATE.an=2021;
p34->caspos=7;
p34->deces=15;
p34->gueris=15;
p34->nbrevacc=21;
inserer(TAB[19],p34,14);
ELEMENT p35=elementCreer();
p35->DATE.jour=15;
p35->DATE.mois=2;
p35->DATE.an=2021;
p35->caspos=80;
p35->deces=25;
p35->gueris=45;
p35->nbrevacc=0;
inserer(TAB[19],p35,15);
ELEMENT p36=elementCreer();
p36->DATE.jour=16;
p36->DATE.mois=2;
p36->DATE.an=2021;
p36->caspos=4;
p36->deces=12;
p36->gueris=45;
p36->nbrevacc=0;
inserer(TAB[19],p36,16);
ELEMENT p37=elementCreer();
p37->DATE.jour=17;
p37->DATE.mois=2;
p37->DATE.an=2021;
p37->caspos=80;
p37->deces=25;
p37->gueris=25;
p37->nbrevacc=10;
inserer(TAB[19],p37,17);
ELEMENT p38=elementCreer();
p38->DATE.jour=18;
p38->DATE.mois=2;
p38->DATE.an=2021;
p38->caspos=14;
p38->deces=15;
p38->gueris=5;
p38->nbrevacc=2;
inserer(TAB[19],p38,18);
ELEMENT p39=elementCreer();
p39->DATE.jour=19;
p39->DATE.mois=2;
p39->DATE.an=2021;
p39->caspos=10;
p39->deces=25;
p39->gueris=4;
p39->nbrevacc=0;
inserer(TAB[19],p39,19);
ELEMENT p40=elementCreer();
p40->DATE.jour=20;
p40->DATE.mois=2;
p40->DATE.an=2021;
p40->caspos=14;
p40->deces=25;
p40->gueris=45;
p40->nbrevacc=24;
inserer(TAB[19],p40,20);
//20 - informations related to SOUSSE :
ELEMENT j1=elementCreer();
j1->DATE.jour=1;
j1->DATE.mois=3;
j1->DATE.an=2021;
j1->caspos=4;
j1->deces=5;
j1->gueris=5;
j1->nbrevacc=0;
inserer(TAB[20],j1,1);
ELEMENT j2=elementCreer();
j2->DATE.jour=2;
j2->DATE.mois=3;
j2->DATE.an=2021;
j2->caspos=200;
j2->deces=1;
j2->gueris=0;
j2->nbrevacc=0;
inserer(TAB[20],j2,2);
ELEMENT j3=elementCreer();
j3->DATE.jour=3;
j3->DATE.mois=3;
j3->DATE.an=2021;
j3->caspos=80;
j3->deces=25;
j3->gueris=45;
j3->nbrevacc=2;
inserer(TAB[20],j3,3);
ELEMENT j4=elementCreer();
j4->DATE.jour=4;
j4->DATE.mois=3;
j4->DATE.an=2021;
j4->caspos=8;
j4->deces=25;
j4->gueris=5;
j4->nbrevacc=21;
inserer(TAB[20],j4,4);
ELEMENT j5=elementCreer();
j5->DATE.jour=5;
j5->DATE.mois=3;
j5->DATE.an=2021;
j5->caspos=80;
j5->deces=25;
j5->gueris=5;
j5->nbrevacc=0;
inserer(TAB[20],j5,5);
ELEMENT j6=elementCreer();
j6->DATE.jour=6;
j6->DATE.mois=3;
j6->DATE.an=2021;
j6->caspos=10;
j6->deces=5;
j6->gueris=5;
j6->nbrevacc=40;
inserer(TAB[20],j6,6);
ELEMENT j7=elementCreer();
j7->DATE.jour=7;
j7->DATE.mois=3;
j7->DATE.an=2021;
j7->caspos=60;
j7->deces=25;
j7->gueris=4;
j7->nbrevacc=7;
inserer(TAB[20],j7,7);
ELEMENT j8=elementCreer();
j8->DATE.jour=8;
j8->DATE.mois=3;
j8->DATE.an=2021;
j8->caspos=80;
j8->deces=25;
j8->gueris=45;
j8->nbrevacc=40;
inserer(TAB[20],j8,8);
ELEMENT j9=elementCreer();
j9->DATE.jour=9;
j9->DATE.mois=3;
j9->DATE.an=2021;
j9->caspos=80;
j9->deces=25;
j9->gueris=45;
j9->nbrevacc=2;
inserer(TAB[20],j9,9);
ELEMENT j10=elementCreer();
j10->DATE.jour=10;
j10->DATE.mois=3;
j10->DATE.an=2020;
j10->caspos=80;
j10->deces=25;
j10->gueris=45;
j10->nbrevacc=200;
inserer(TAB[20],j10,10);
ELEMENT j11=elementCreer();
j11->DATE.jour=11;
j11->DATE.mois=3;
j11->DATE.an=2021;
j11->caspos=80;
j11->deces=25;
j11->gueris=45;
j11->nbrevacc=200;
inserer(TAB[20],j11,11);
ELEMENT j12=elementCreer();
j12->DATE.jour=12;
j12->DATE.mois=3;
j12->DATE.an=2021;
j12->caspos=80;
j12->deces=25;
j12->gueris=45;
j12->nbrevacc=200;
inserer(TAB[20],j12,12);
ELEMENT j13=elementCreer();
j13->DATE.jour=13;
j13->DATE.mois=3;
j13->DATE.an=2021;
j13->caspos=80;
j13->deces=25;
j13->gueris=45;
j13->nbrevacc=0;
inserer(TAB[20],j13,13);
ELEMENT j14=elementCreer();
j14->DATE.jour=14;
j14->DATE.mois=3;
j14->DATE.an=2021;
j14->caspos=7;
j14->deces=15;
j14->gueris=15;
j14->nbrevacc=21;
inserer(TAB[20],j14,14);
ELEMENT j15=elementCreer();
j15->DATE.jour=15;
j15->DATE.mois=3;
j15->DATE.an=2021;
j15->caspos=80;
j15->deces=25;
j15->gueris=45;
j15->nbrevacc=0;
inserer(TAB[20],j15,15);
ELEMENT j16=elementCreer();
j16->DATE.jour=16;
j16->DATE.mois=3;
j16->DATE.an=2021;
j16->caspos=4;
j16->deces=12;
j16->gueris=45;
j16->nbrevacc=0;
inserer(TAB[20],j16,16);
ELEMENT j17=elementCreer();
j17->DATE.jour=17;
j17->DATE.mois=3;
j17->DATE.an=2021;
j17->caspos=80;
j17->deces=25;
j17->gueris=25;
j17->nbrevacc=10;
inserer(TAB[20],j17,17);
ELEMENT j18=elementCreer();
j18->DATE.jour=18;
j18->DATE.mois=3;
j18->DATE.an=2021;
j18->caspos=14;
j18->deces=15;
j18->gueris=5;
j18->nbrevacc=2;
inserer(TAB[20],j18,18);
ELEMENT j19=elementCreer();
j19->DATE.jour=19;
j19->DATE.mois=3;
j19->DATE.an=2021;
j19->caspos=10;
j19->deces=25;
j19->gueris=4;
j19->nbrevacc=0;
inserer(TAB[20],j19,19);
ELEMENT j20=elementCreer();
j20->DATE.jour=20;
j20->DATE.mois=3;
j20->DATE.an=2021;
j20->caspos=14;
j20->deces=25;
j20->gueris=45;
j20->nbrevacc=24;
inserer(TAB[20],j20,20);
//21 - informations related to TATAOUINE :
ELEMENT j21=elementCreer();
j21->DATE.jour=1;
j21->DATE.mois=2;
j21->DATE.an=2021;
j21->caspos=47;
j21->deces=50;
j21->gueris=5;
j21->nbrevacc=0;
inserer(TAB[21],j21,1);
ELEMENT j22=elementCreer();
j22->DATE.jour=2;
j22->DATE.mois=2;
j22->DATE.an=2021;
j22->caspos=200;
j22->deces=1;
j22->gueris=0;
j22->nbrevacc=0;
inserer(TAB[21],j22,2);
ELEMENT j23=elementCreer();
j23->DATE.jour=3;
j23->DATE.mois=2;
j23->DATE.an=2021;
j23->caspos=80;
j23->deces=25;
j23->gueris=45;
j23->nbrevacc=2;
inserer(TAB[21],j23,3);
ELEMENT j24=elementCreer();
j24->DATE.jour=4;
j24->DATE.mois=2;
j24->DATE.an=2021;
j24->caspos=8;
j24->deces=25;
j24->gueris=5;
j24->nbrevacc=21;
inserer(TAB[21],j24,4);
ELEMENT j25=elementCreer();
j25->DATE.jour=5;
j25->DATE.mois=2;
j25->DATE.an=2021;
j25->caspos=80;
j25->deces=25;
j25->gueris=5;
j25->nbrevacc=0;
inserer(TAB[21],j25,5);
ELEMENT j26=elementCreer();
j26->DATE.jour=6;
j26->DATE.mois=2;
j26->DATE.an=2021;
j26->caspos=10;
j26->deces=5;
j26->gueris=5;
j26->nbrevacc=40;
inserer(TAB[21],j26,6);
ELEMENT j27=elementCreer();
j27->DATE.jour=7;
j27->DATE.mois=2;
j27->DATE.an=2021;
j27->caspos=60;
j27->deces=25;
j27->gueris=4;
j27->nbrevacc=7;
inserer(TAB[21],j27,7);
ELEMENT j28=elementCreer();
j28->DATE.jour=8;
j28->DATE.mois=2;
j28->DATE.an=2021;
j28->caspos=80;
j28->deces=25;
j28->gueris=45;
j28->nbrevacc=200;
inserer(TAB[21],j28,8);
ELEMENT j29=elementCreer();
j29->DATE.jour=9;
j29->DATE.mois=2;
j29->DATE.an=2021;
j29->caspos=80;
j29->deces=25;
j29->gueris=45;
j29->nbrevacc=2;
inserer(TAB[21],j29,9);
ELEMENT j30=elementCreer();
j30->DATE.jour=10;
j30->DATE.mois=2;
j30->DATE.an=2020;
j30->caspos=80;
j30->deces=25;
j30->gueris=45;
j30->nbrevacc=200;
inserer(TAB[21],j30,10);
ELEMENT j31=elementCreer();
j31->DATE.jour=11;
j31->DATE.mois=2;
j31->DATE.an=2021;
j31->caspos=80;
j31->deces=25;
j31->gueris=45;
j31->nbrevacc=200;
inserer(TAB[21],j31,11);
ELEMENT j32=elementCreer();
j32->DATE.jour=12;
j32->DATE.mois=2;
j32->DATE.an=2021;
j32->caspos=80;
j32->deces=25;
j32->gueris=45;
j32->nbrevacc=200;
inserer(TAB[21],j32,12);
ELEMENT j33=elementCreer();
j33->DATE.jour=13;
j33->DATE.mois=2;
j33->DATE.an=2021;
j33->caspos=80;
j33->deces=25;
j33->gueris=45;
j33->nbrevacc=0;
inserer(TAB[21],j33,13);
ELEMENT j34=elementCreer();
j34->DATE.jour=14;
j34->DATE.mois=3;
j34->DATE.an=2021;
j34->caspos=7;
j34->deces=15;
j34->gueris=15;
j34->nbrevacc=21;
inserer(TAB[21],j34,14);
ELEMENT j35=elementCreer();
j35->DATE.jour=15;
j35->DATE.mois=2;
j35->DATE.an=2021;
j35->caspos=80;
j35->deces=25;
j35->gueris=45;
j35->nbrevacc=0;
inserer(TAB[21],j35,15);
ELEMENT j36=elementCreer();
j36->DATE.jour=16;
j36->DATE.mois=2;
j36->DATE.an=2021;
j36->caspos=4;
j36->deces=12;
j36->gueris=45;
j36->nbrevacc=0;
inserer(TAB[21],j36,16);
ELEMENT j37=elementCreer();
j37->DATE.jour=17;
j37->DATE.mois=2;
j37->DATE.an=2021;
j37->caspos=80;
j37->deces=25;
j37->gueris=25;
j37->nbrevacc=10;
inserer(TAB[21],j37,17);
ELEMENT j38=elementCreer();
j38->DATE.jour=18;
j38->DATE.mois=2;
j38->DATE.an=2021;
j38->caspos=14;
j38->deces=15;
j38->gueris=5;
j38->nbrevacc=2;
inserer(TAB[21],j38,18);
ELEMENT j39=elementCreer();
j39->DATE.jour=19;
j39->DATE.mois=2;
j39->DATE.an=2021;
j39->caspos=10;
j39->deces=25;
j39->gueris=4;
j39->nbrevacc=0;
inserer(TAB[21],j39,19);
ELEMENT j40=elementCreer();
j40->DATE.jour=20;
j40->DATE.mois=2;
j40->DATE.an=2021;
j40->caspos=14;
j40->deces=25;
j40->gueris=45;
j40->nbrevacc=24;

inserer(TAB[21],j40,20);
//22 - informations related to touzeur  :
ELEMENT m21=elementCreer();
m21->DATE.jour=1;
m21->DATE.mois=5;
m21->DATE.an=2021;
m21->caspos=4;
m21->deces=5;
m21->gueris=5;
m21->nbrevacc=0;
inserer(TAB[22],m21,1);
ELEMENT m22=elementCreer();
m22->DATE.jour=2;
m22->DATE.mois=4;
m22->DATE.an=2021;
m22->caspos=20;
m22->deces=1;
m22->gueris=0;
m22->nbrevacc=0;
inserer(TAB[22],m22,2);
ELEMENT m23=elementCreer();
m23->DATE.jour=3;
m23->DATE.mois=2;
m23->DATE.an=2021;
m23->caspos=80;
m23->deces=25;
m23->gueris=45;
m23->nbrevacc=2;
inserer(TAB[22],m23,3);
ELEMENT m24=elementCreer();
m24->DATE.jour=4;
m24->DATE.mois=2;
m24->DATE.an=2021;
m24->caspos=8;
m24->deces=25;
m24->gueris=5;
m24->nbrevacc=21;
inserer(TAB[22],m24,4);
ELEMENT m25=elementCreer();
m25->DATE.jour=5;
m25->DATE.mois=2;
m25->DATE.an=2021;
m25->caspos=80;
m25->deces=25;
m25->gueris=5;
m25->nbrevacc=0;
inserer(TAB[22],m25,5);
ELEMENT m26=elementCreer();
m26->DATE.jour=6;
m26->DATE.mois=2;
m26->DATE.an=2021;
m26->caspos=10;
m26->deces=5;
m26->gueris=5;
m26->nbrevacc=40;
inserer(TAB[22],m26,6);
ELEMENT m27=elementCreer();
m27->DATE.jour=7;
m27->DATE.mois=2;
m27->DATE.an=2021;
m27->caspos=60;
m27->deces=25;
m27->gueris=4;
m27->nbrevacc=7;
inserer(TAB[22],m27,7);
ELEMENT m28=elementCreer();
m28->DATE.jour=8;
m28->DATE.mois=2;
m28->DATE.an=2021;
m28->caspos=80;
m28->deces=25;
m28->gueris=45;
m28->nbrevacc=200;
inserer(TAB[22],m28,8);
ELEMENT m29=elementCreer();
m29->DATE.jour=9;
m29->DATE.mois=2;
m29->DATE.an=2021;
m29->caspos=80;
m29->deces=25;
m29->gueris=45;
m29->nbrevacc=2;
inserer(TAB[22],m29,9);
ELEMENT m30=elementCreer();
m30->DATE.jour=10;
m30->DATE.mois=2;
m30->DATE.an=2020;
m30->caspos=80;
m30->deces=25;
m30->gueris=45;
m30->nbrevacc=200;
inserer(TAB[22],m30,10);
ELEMENT m31=elementCreer();
m31->DATE.jour=11;
m31->DATE.mois=2;
m31->DATE.an=2021;
m31->caspos=80;
m31->deces=25;
m31->gueris=45;
m31->nbrevacc=200;
inserer(TAB[22],m31,11);
ELEMENT m32=elementCreer();
m32->DATE.jour=12;
m32->DATE.mois=2;
m32->DATE.an=2021;
m32->caspos=80;
m32->deces=25;
m32->gueris=45;
m32->nbrevacc=200;
inserer(TAB[22],m32,12);
ELEMENT m33=elementCreer();
m33->DATE.jour=13;
m33->DATE.mois=2;
m33->DATE.an=2021;
m33->caspos=80;
m33->deces=25;
m33->gueris=45;
m33->nbrevacc=0;
inserer(TAB[22],m33,13);
ELEMENT m34=elementCreer();
m34->DATE.jour=14;
m34->DATE.mois=3;
m34->DATE.an=2021;
m34->caspos=7;
m34->deces=15;
m34->gueris=15;
m34->nbrevacc=21;
inserer(TAB[22],m34,14);
ELEMENT m35=elementCreer();
m35->DATE.jour=15;
m35->DATE.mois=2;
m35->DATE.an=2021;
m35->caspos=80;
m35->deces=25;
m35->gueris=45;
m35->nbrevacc=0;
inserer(TAB[22],m35,15);
ELEMENT m36=elementCreer();
m36->DATE.jour=16;
m36->DATE.mois=2;
m36->DATE.an=2021;
m36->caspos=4;
m36->deces=12;
m36->gueris=45;
m36->nbrevacc=0;
inserer(TAB[22],m36,16);
ELEMENT m37=elementCreer();
m37->DATE.jour=17;
m37->DATE.mois=2;
m37->DATE.an=2021;
m37->caspos=80;
m37->deces=25;
m37->gueris=2;
m37->nbrevacc=10;
inserer(TAB[22],m37,17);
ELEMENT m38=elementCreer();
m38->DATE.jour=18;
m38->DATE.mois=2;
m38->DATE.an=2021;
m38->caspos=14;
m38->deces=15;
m38->gueris=5;
m38->nbrevacc=2;
inserer(TAB[22],m38,18);
ELEMENT m39=elementCreer();
m39->DATE.jour=19;
m39->DATE.mois=2;
m39->DATE.an=2021;
m39->caspos=10;
m39->deces=25;
m39->gueris=4;
m39->nbrevacc=0;
inserer(TAB[22],m39,19);
ELEMENT m40=elementCreer();
m40->DATE.jour=20;
m40->DATE.mois=2;
m40->DATE.an=2021;
m40->caspos=14;
m40->deces=25;
m40->gueris=45;
m40->nbrevacc=24;
inserer(TAB[22],m40,20);
//12 - informations related to le kef     :
ELEMENT w21=elementCreer();
w21->DATE.jour=1;
w21->DATE.mois=2;
w21->DATE.an=2021;
w21->caspos=4;
w21->deces=5;
w21->gueris=5;
w21->nbrevacc=0;
inserer(TAB[12],w21,1);
ELEMENT w22=elementCreer();
w22->DATE.jour=2;
w22->DATE.mois=2;
w22->DATE.an=2021;
w22->caspos=200;
w22->deces=1;
w22->gueris=0;
w22->nbrevacc=0;
inserer(TAB[12],w22,2);
ELEMENT w23=elementCreer();
w23->DATE.jour=3;
w23->DATE.mois=2;
w23->DATE.an=2021;
w23->caspos=80;
w23->deces=25;
w23->gueris=45;
w23->nbrevacc=2;
inserer(TAB[12],w23,3);
ELEMENT w24=elementCreer();
w24->DATE.jour=4;
w24->DATE.mois=2;
w24->DATE.an=2021;
w24->caspos=8;
w24->deces=25;
w24->gueris=5;
w24->nbrevacc=21;
inserer(TAB[12],w24,4);
ELEMENT w25=elementCreer();
w25->DATE.jour=5;
w25->DATE.mois=2;
w25->DATE.an=2021;
w25->caspos=80;
w25->deces=25;
w25->gueris=5;
w25->nbrevacc=0;
inserer(TAB[12],w25,5);
ELEMENT w26=elementCreer();
w26->DATE.jour=6;
w26->DATE.mois=2;
w26->DATE.an=2021;
w26->caspos=10;
w26->deces=5;
w26->gueris=5;
w26->nbrevacc=40;
inserer(TAB[12],w26,6);
ELEMENT w27=elementCreer();
w27->DATE.jour=7;
w27->DATE.mois=2;
w27->DATE.an=2021;
w27->caspos=60;
w27->deces=25;
w27->gueris=4;
w27->nbrevacc=7;
inserer(TAB[12],w27,7);
ELEMENT w28=elementCreer();
w28->DATE.jour=8;
w28->DATE.mois=2;
w28->DATE.an=2021;
w28->caspos=80;
w28->deces=25;
w28->gueris=45;
w28->nbrevacc=200;
inserer(TAB[12],w28,8);
ELEMENT w29=elementCreer();
w29->DATE.jour=9;
w29->DATE.mois=2;
w29->DATE.an=2021;
w29->caspos=80;
w29->deces=25;
w29->gueris=45;
w29->nbrevacc=2;
inserer(TAB[12],w29,9);
ELEMENT w30=elementCreer();
w30->DATE.jour=10;
w30->DATE.mois=2;
w30->DATE.an=2020;
w30->caspos=80;
w30->deces=25;
w30->gueris=45;
w30->nbrevacc=200;
inserer(TAB[12],w30,10);
ELEMENT w31=elementCreer();
w31->DATE.jour=11;
w31->DATE.mois=2;
w31->DATE.an=2021;
w31->caspos=80;
w31->deces=25;
w31->gueris=45;
w31->nbrevacc=200;
inserer(TAB[12],w31,11);
ELEMENT w32=elementCreer();
w32->DATE.jour=12;
w32->DATE.mois=2;
w32->DATE.an=2021;
w32->caspos=80;
w32->deces=25;
w32->gueris=45;
w32->nbrevacc=200;
inserer(TAB[12],w32,12);
ELEMENT w33=elementCreer();
w33->DATE.jour=13;
w33->DATE.mois=2;
w33->DATE.an=2021;
w33->caspos=80;
w33->deces=25;
w33->gueris=45;
w33->nbrevacc=0;
inserer(TAB[12],w33,13);
ELEMENT w34=elementCreer();
w34->DATE.jour=14;
w34->DATE.mois=3;
w34->DATE.an=2021;
w34->caspos=7;
w34->deces=15;
w34->gueris=15;
w34->nbrevacc=21;
inserer(TAB[12],w34,14);
ELEMENT w35=elementCreer();
w35->DATE.jour=15;
w35->DATE.mois=2;
w35->DATE.an=2021;
w35->caspos=80;
w35->deces=25;
w35->gueris=45;
w35->nbrevacc=0;
inserer(TAB[12],w35,15);
ELEMENT w36=elementCreer();
w36->DATE.jour=16;
w36->DATE.mois=2;
w36->DATE.an=2021;
w36->caspos=4;
w36->deces=12;
w36->gueris=45;
w36->nbrevacc=0;
inserer(TAB[w],w36,16);
ELEMENT w37=elementCreer();
w37->DATE.jour=17;
w37->DATE.mois=2;
w37->DATE.an=2021;
w37->caspos=80;
w37->deces=25;
w37->gueris=2;
w37->nbrevacc=10;
inserer(TAB[12],w37,17);
ELEMENT w38=elementCreer();
w38->DATE.jour=18;
w38->DATE.mois=2;
w38->DATE.an=2021;
w38->caspos=14;
w38->deces=15;
w38->gueris=5;
w38->nbrevacc=2;
inserer(TAB[12],w38,18);
ELEMENT w39=elementCreer();
w39->DATE.jour=19;
w39->DATE.mois=2;
w39->DATE.an=2021;
w39->caspos=10;
w39->deces=25;
w39->gueris=4;
w39->nbrevacc=0;
inserer(TAB[12],w39,19);
ELEMENT w40=elementCreer();
w40->DATE.jour=20;
w40->DATE.mois=2;
w40->DATE.an=2021;
w40->caspos=14;
w40->deces=25;
w40->gueris=45;
w40->nbrevacc=24;
inserer(TAB[12],w40,20);
//8 - informations related to kairouan   :
ELEMENT n21=elementCreer();
n21->DATE.jour=1;
n21->DATE.mois=2;
n21->DATE.an=2021;
n21->caspos=50;
n21->deces=5;
n21->gueris=5;
n21->nbrevacc=0;
inserer(TAB[8],n21,1);
ELEMENT n22=elementCreer();
n22->DATE.jour=2;
n22->DATE.mois=2;
n22->DATE.an=2021;
n22->caspos=200;
n22->deces=1;
n22->gueris=0;
n22->nbrevacc=0;
inserer(TAB[8],n22,2);
ELEMENT n23=elementCreer();
n23->DATE.jour=3;
n23->DATE.mois=2;
n23->DATE.an=2021;
n23->caspos=80;
n23->deces=25;
n23->gueris=45;
n23->nbrevacc=2;
inserer(TAB[8],n23,3);
ELEMENT n24=elementCreer();
n24->DATE.jour=4;
n24->DATE.mois=2;
n24->DATE.an=2021;
n24->caspos=8;
n24->deces=25;
n24->gueris=5;
n24->nbrevacc=21;
inserer(TAB[8],n24,4);
ELEMENT n25=elementCreer();
n25->DATE.jour=5;
n25->DATE.mois=2;
n25->DATE.an=2021;
n25->caspos=80;
n25->deces=25;
n25->gueris=5;
n25->nbrevacc=0;
inserer(TAB[8],n25,5);
ELEMENT n26=elementCreer();
m26->DATE.jour=6;
n26->DATE.mois=2;
n26->DATE.an=2021;
n26->caspos=10;
n26->deces=5;
n26->gueris=5;
n26->nbrevacc=40;
inserer(TAB[8],m26,6);
ELEMENT n27=elementCreer();
n27->DATE.jour=7;
n27->DATE.mois=2;
n27->DATE.an=2021;
n27->caspos=60;
n27->deces=25;
n27->gueris=4;
n27->nbrevacc=7;
inserer(TAB[8],n27,7);
ELEMENT n28=elementCreer();
n28->DATE.jour=8;
n28->DATE.mois=2;
n28->DATE.an=2021;
n28->caspos=80;
n28->deces=25;
n28->gueris=45;
n28->nbrevacc=200;
inserer(TAB[8],n28,8);
ELEMENT n29=elementCreer();
n29->DATE.jour=9;
n29->DATE.mois=2;
n29->DATE.an=2021;
n29->caspos=80;
n29->deces=25;
n29->gueris=45;
n29->nbrevacc=2;
inserer(TAB[8],n29,9);
ELEMENT n30=elementCreer();
n30->DATE.jour=10;
n30->DATE.mois=2;
n30->DATE.an=2020;
n30->caspos=80;
n30->deces=25;
n30->gueris=45;
n30->nbrevacc=200;
inserer(TAB[8],n30,10);
ELEMENT n31=elementCreer();
n31->DATE.jour=11;
n31->DATE.mois=2;
n31->DATE.an=2021;
n31->caspos=80;
n31->deces=25;
n31->gueris=45;
n31->nbrevacc=200;
inserer(TAB[8],n31,11);
ELEMENT n32=elementCreer();
n32->DATE.jour=12;
n32->DATE.mois=2;
n32->DATE.an=2021;
n32->caspos=80;
n32->deces=25;
n32->gueris=45;
n32->nbrevacc=200;
inserer(TAB[8],n32,12);
ELEMENT n33=elementCreer();
n33->DATE.jour=13;
n33->DATE.mois=2;
n33->DATE.an=2021;
n33->caspos=80;
n33->deces=25;
n33->gueris=45;
n33->nbrevacc=0;
inserer(TAB[8],n33,13);
ELEMENT n34=elementCreer();
n34->DATE.jour=14;
n34->DATE.mois=3;
n34->DATE.an=2021;
n34->caspos=7;
n34->deces=15;
n34->gueris=15;
n34->nbrevacc=21;
inserer(TAB[8],n34,14);
ELEMENT n35=elementCreer();
n35->DATE.jour=15;
n35->DATE.mois=2;
n35->DATE.an=2021;
n35->caspos=80;
n35->deces=25;
n35->gueris=45;
n35->nbrevacc=0;
inserer(TAB[8],n35,15);
ELEMENT n36=elementCreer();
n36->DATE.jour=16;
n36->DATE.mois=2;
n36->DATE.an=2021;
n36->caspos=4;
n36->deces=12;
n36->gueris=45;
n36->nbrevacc=0;
inserer(TAB[8],n36,16);
ELEMENT n37=elementCreer();
n37->DATE.jour=17;
n37->DATE.mois=2;
n37->DATE.an=2021;
n37->caspos=80;
n37->deces=25;
n37->gueris=2;
n37->nbrevacc=10;
inserer(TAB[8],n37,17);
ELEMENT n38=elementCreer();
n38->DATE.jour=18;
n38->DATE.mois=2;
n38->DATE.an=2021;
n38->caspos=14;
n38->deces=15;
n38->gueris=5;
n38->nbrevacc=2;
inserer(TAB[8],n38,18);
ELEMENT n39=elementCreer();
n39->DATE.jour=19;
n39->DATE.mois=2;
n39->DATE.an=2021;
n39->caspos=10;
n39->deces=25;
n39->gueris=4;
n39->nbrevacc=0;
inserer(TAB[8],n39,19);
ELEMENT n40=elementCreer();
n40->DATE.jour=20;
n40->DATE.mois=2;
n40->DATE.an=2021;
n40->caspos=14;
n40->deces=25;
n40->gueris=45;
n40->nbrevacc=24;
inserer(TAB[8],n40,20);
//9 - informations related to kaserine    :
ELEMENT z21=elementCreer();
z21->DATE.jour=1;
z21->DATE.mois=2;
z21->DATE.an=2021;
z21->caspos=4;
z21->deces=5;
z21->gueris=5;
z21->nbrevacc=0;
inserer(TAB[9],z21,1);
ELEMENT z22=elementCreer();
z22->DATE.jour=2;
z22->DATE.mois=2;
z22->DATE.an=2021;
z22->caspos=200;
z22->deces=1;
z22->gueris=0;
z22->nbrevacc=0;
inserer(TAB[9],z22,2);
ELEMENT z23=elementCreer();
z23->DATE.jour=3;
z23->DATE.mois=2;
z23->DATE.an=2021;
z23->caspos=80;
z23->deces=25;
z23->gueris=45;
z23->nbrevacc=2;
inserer(TAB[9],z23,3);
ELEMENT z24=elementCreer();
z24->DATE.jour=4;
z24->DATE.mois=2;
z24->DATE.an=2021;
z24->caspos=8;
z24->deces=25;
z24->gueris=5;
z24->nbrevacc=21;
inserer(TAB[9],n24,4);
ELEMENT z25=elementCreer();
z25->DATE.jour=5;
z25->DATE.mois=2;
z25->DATE.an=2021;
z25->caspos=80;
z25->deces=25;
z25->gueris=5;
z25->nbrevacc=0;
inserer(TAB[9],n25,5);
ELEMENT z26=elementCreer();
z26->DATE.jour=6;
z26->DATE.mois=2;
z26->DATE.an=2021;
z26->caspos=10;
z26->deces=5;
z26->gueris=5;
z26->nbrevacc=40;
inserer(TAB[9],z26,6);
ELEMENT z27=elementCreer();
z27->DATE.jour=7;
z27->DATE.mois=2;
z27->DATE.an=2021;
z27->caspos=60;
z27->deces=25;
z27->gueris=4;
z27->nbrevacc=7;
inserer(TAB[9],z27,7);
ELEMENT z28=elementCreer();
z28->DATE.jour=8;
z28->DATE.mois=2;
z28->DATE.an=2021;
z28->caspos=80;
z28->deces=25;
z28->gueris=45;
z28->nbrevacc=200;
inserer(TAB[9],z28,8);
ELEMENT z29=elementCreer();
z29->DATE.jour=9;
z29->DATE.mois=2;
z29->DATE.an=2021;
z29->caspos=80;
z29->deces=25;
z29->gueris=45;
z29->nbrevacc=2;
inserer(TAB[9],z29,9);
ELEMENT z30=elementCreer();
z30->DATE.jour=10;
z30->DATE.mois=2;
z30->DATE.an=2020;
z30->caspos=80;
z30->deces=25;
z30->gueris=45;
z30->nbrevacc=200;
inserer(TAB[9],z30,10);
ELEMENT z31=elementCreer();
z31->DATE.jour=11;
z31->DATE.mois=2;
z31->DATE.an=2021;
z31->caspos=80;
z31->deces=25;
z31->gueris=45;
z31->nbrevacc=200;
inserer(TAB[9],z31,11);
ELEMENT z32=elementCreer();
z32->DATE.jour=12;
z32->DATE.mois=2;
z32->DATE.an=2021;
z32->caspos=80;
z32->deces=25;
z32->gueris=45;
z32->nbrevacc=200;
inserer(TAB[9],n32,12);
ELEMENT z33=elementCreer();
z33->DATE.jour=13;
z33->DATE.mois=2;
z33->DATE.an=2021;
z33->caspos=80;
z33->deces=25;
z33->gueris=45;
z33->nbrevacc=0;
inserer(TAB[9],n33,13);
ELEMENT z34=elementCreer();
z34->DATE.jour=14;
z34->DATE.mois=3;
z34->DATE.an=2021;
z34->caspos=7;
z34->deces=15;
z34->gueris=15;
z34->nbrevacc=21;
inserer(TAB[9],z34,14);
ELEMENT z35=elementCreer();
z35->DATE.jour=15;
z35->DATE.mois=2;
z35->DATE.an=2021;
z35->caspos=80;
z35->deces=25;
z35->gueris=45;
z35->nbrevacc=0;
inserer(TAB[9],z35,15);
ELEMENT z36=elementCreer();
z36->DATE.jour=16;
z36->DATE.mois=2;
z36->DATE.an=2021;
z36->caspos=4;
z36->deces=12;
z36->gueris=45;
z36->nbrevacc=0;
inserer(TAB[9],z36,16);
ELEMENT z37=elementCreer();
z37->DATE.jour=17;
z37->DATE.mois=2;
z37->DATE.an=2021;
z37->caspos=80;
z37->deces=25;
z37->gueris=2;
z37->nbrevacc=10;
inserer(TAB[9],z37,17);
ELEMENT z38=elementCreer();
z38->DATE.jour=18;
z38->DATE.mois=2;
z38->DATE.an=2021;
z38->caspos=14;
z38->deces=15;
z38->gueris=5;
z38->nbrevacc=2;
inserer(TAB[9],z38,18);
ELEMENT z39=elementCreer();
z39->DATE.jour=19;
z39->DATE.mois=2;
z39->DATE.an=2021;
z39->caspos=10;
z39->deces=25;
z39->gueris=4;
z39->nbrevacc=0;
inserer(TAB[9],z39,19);
ELEMENT z40=elementCreer();
z40->DATE.jour=20;
z40->DATE.mois=2;
z40->DATE.an=2021;
z40->caspos=14;
z40->deces=25;
z40->gueris=45;
z40->nbrevacc=24;
inserer(TAB[9],z40,20);
//14 - informations related to medenine    :
ELEMENT v21=elementCreer();
v21->DATE.jour=1;
v21->DATE.mois=2;
v21->DATE.an=2021;
v21->caspos=50;
v21->deces=10;
v21->gueris=5;
v21->nbrevacc=0;
inserer(TAB[14],v21,1);
ELEMENT v22=elementCreer();
v22->DATE.jour=2;
v22->DATE.mois=2;
v22->DATE.an=2021;
v22->caspos=200;
v22->deces=1;
v22->gueris=0;
v22->nbrevacc=0;
inserer(TAB[14],v22,2);
ELEMENT v23=elementCreer();
v23->DATE.jour=3;
v23->DATE.mois=2;
v23->DATE.an=2021;
v23->caspos=80;
v23->deces=25;
v23->gueris=45;
v23->nbrevacc=2;
inserer(TAB[14],v23,3);
ELEMENT v24=elementCreer();
v24->DATE.jour=4;
v24->DATE.mois=2;
v24->DATE.an=2021;
v24->caspos=8;
v24->deces=25;
v24->gueris=5;
v24->nbrevacc=21;
inserer(TAB[14],v24,4);
ELEMENT v25=elementCreer();
v25->DATE.jour=5;
v25->DATE.mois=2;
v25->DATE.an=2021;
v25->caspos=80;
v25->deces=25;
v25->gueris=5;
v25->nbrevacc=0;
inserer(TAB[14],v25,5);
ELEMENT v26=elementCreer();
v26->DATE.jour=6;
v26->DATE.mois=2;
v26->DATE.an=2021;
v26->caspos=10;
v26->deces=5;
v26->gueris=5;
v26->nbrevacc=40;
inserer(TAB[14],v26,6);
ELEMENT v27=elementCreer();
v27->DATE.jour=7;
v27->DATE.mois=2;
v27->DATE.an=2021;
v27->caspos=60;
v27->deces=25;
v27->gueris=4;
v27->nbrevacc=7;
inserer(TAB[14],v27,7);
ELEMENT v28=elementCreer();
v28->DATE.jour=8;
v28->DATE.mois=2;
v28->DATE.an=2021;
v28->caspos=80;
v28->deces=25;
v28->gueris=45;
v28->nbrevacc=200;
inserer(TAB[14],v28,8);
ELEMENT v29=elementCreer();
v29->DATE.jour=9;
v29->DATE.mois=2;
v29->DATE.an=2021;
v29->caspos=80;
v29->deces=25;
v29->gueris=45;
v29->nbrevacc=2;
inserer(TAB[14],v29,9);
ELEMENT v30=elementCreer();
v30->DATE.jour=10;
v30->DATE.mois=2;
v30->DATE.an=2020;
v30->caspos=80;
v30->deces=25;
v30->gueris=45;
v30->nbrevacc=200;
inserer(TAB[14],v30,10);
ELEMENT v31=elementCreer();
v31->DATE.jour=11;
v31->DATE.mois=2;
v31->DATE.an=2021;
v31->caspos=80;
v31->deces=25;
v31->gueris=45;
v31->nbrevacc=200;
inserer(TAB[14],v31,11);
ELEMENT v32=elementCreer();
v32->DATE.jour=12;
v32->DATE.mois=2;
v32->DATE.an=2021;
v32->caspos=80;
v32->deces=25;
v32->gueris=45;
v32->nbrevacc=200;
inserer(TAB[14],v32,12);
ELEMENT v33=elementCreer();
v33->DATE.jour=13;
v33->DATE.mois=2;
v33->DATE.an=2021;
v33->caspos=80;
v33->deces=25;
v33->gueris=45;
v33->nbrevacc=0;
inserer(TAB[14],v33,13);
ELEMENT v34=elementCreer();
v34->DATE.jour=14;
v34->DATE.mois=3;
v34->DATE.an=2021;
v34->caspos=7;
v34->deces=15;
v34->gueris=15;
v34->nbrevacc=21;
inserer(TAB[14],v34,14);
ELEMENT v35=elementCreer();
v35->DATE.jour=15;
v35->DATE.mois=2;
v35->DATE.an=2021;
v35->caspos=80;
v35->deces=25;
v35->gueris=45;
v35->nbrevacc=0;
inserer(TAB[14],v35,15);
ELEMENT v36=elementCreer();
v36->DATE.jour=16;
v36->DATE.mois=2;
v36->DATE.an=2021;
v36->caspos=4;
v36->deces=12;
v36->gueris=45;
v36->nbrevacc=0;
inserer(TAB[14],v36,16);
ELEMENT v37=elementCreer();
v37->DATE.jour=17;
v37->DATE.mois=2;
v37->DATE.an=2021;
v37->caspos=80;
v37->deces=25;
v37->gueris=2;
v37->nbrevacc=10;
inserer(TAB[14],v37,17);
ELEMENT v38=elementCreer();
v38->DATE.jour=18;
v38->DATE.mois=2;
v38->DATE.an=2021;
v38->caspos=14;
v38->deces=15;
v38->gueris=5;
v38->nbrevacc=2;
inserer(TAB[14],v38,18);
ELEMENT v39=elementCreer();
v39->DATE.jour=19;
v39->DATE.mois=2;
v39->DATE.an=2021;
v39->caspos=10;
v39->deces=25;
v39->gueris=4;
v39->nbrevacc=0;
inserer(TAB[14],v39,19);
ELEMENT v40=elementCreer();
v40->DATE.jour=20;
v40->DATE.mois=2;
v40->DATE.an=2021;
v40->caspos=14;
v40->deces=25;
v40->gueris=45;
v40->nbrevacc=24;
inserer(TAB[14],v40,20);
system("cls");
system("cls");
void tridr1324(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)>(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}

 void tridr1234(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)>(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tridr1243(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)>(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}

 void tridr1423(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)>(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}



 void tridr1432(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)>(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}

 void tridr1342(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)>(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tridr2134(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)>(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tridr2143(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)>(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tridr2413(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)>(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tridr2431(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)>(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}
 void tridr2341(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)>(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tridr2314(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)>(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);}




 void tridr3124(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)>(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}




 void tridr3142(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)>(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tridr3241(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)>(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tridr3214(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)>(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tridr3421(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)>(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}



 void tridr3412(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)>(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}
 void tridr4123(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)>(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}
 void tridr4132(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)>(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}




 void tridr4213(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)>(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}
 void tridr4231(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)>(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tridr4321(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)>(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->gueris)>(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}

 void tridr4312(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)>(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->nbrevacc)>(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->deces)>(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->caspos)>(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}
void tridecroissant(){
printf("********************************************************************************");
printf("\n************** ranking according to a declining sorting order***************\n");
printf(" (.)positive cases  |  (.)deaths  |  (.)healings   | (.) vaccinated poeple    ");
printf("\n*****enter the key of your sorting according to the form [....] *******\n") ;
scanf("%i",&ordre);
switch(ordre){
case 1234 :
tridr1234();
break;
case 1243 :
tridr1243();
break;
case 1324:
tridr1324();
break;
case 1423 :
tridr1423();
break ;
case 1432 :
tridr1432();
break;
case 1342 :
tridr1342();
break;
case 2134 :
tridr2134();
break;
case 2143 :
tridr2143();
break;
case 2413:
tridr2413();
break;
case 2431:
tridr2431();
break;
case 2341:
tridr2341();
break;
case 2314:
tridr2314();
break;
case 3124 :
tridr3124();
break;
case 3142 :
tridr3142();
break ;
case 3241 :
tridr3241();
break;
case 3214:
tridr3214();
break;
case 3421:
tridr3421();
break ;
case 3412 :
tridr3412();
break;
case 4123 :
tridr4123();
break;
case 4132:
tridr4132();
break ;
case 4213 :
tridr4213();
break;
case 4231 :
tridr4231();
break;
case 4321 :
tridr4321();
break;
case 4312 :
tridr4312();
break;
}}
void tricr1324(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)<(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}

 void tricr1234(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)<(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tricr1243(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)<(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}

 void tricr1423(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)<(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}



 void tricr1432(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)<(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}

 void tricr1342(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->caspos)<(n->caspos))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->caspos)==(n->caspos)){
        if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tricr2134(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)<(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tricr2143(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)<(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tricr2413(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)<(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tricr2431(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)<(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}
 void tricr2341(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)<(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tricr2314(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)<(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->caspos)==(n->caspos)){
            if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);}




 void tricr3124(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)<(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}




 void tricr3142(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)<(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tricr3241(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)<(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tricr3214(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)<(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tricr3421(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)<(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}



 void tricr3412(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)<(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->caspos)==(n->caspos)){

                  if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}
 void tricr4123(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)<(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}
 void tricr4132(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->deces)<(n->deces))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->deces)==(n->deces)){
        if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}




 void tricr4213(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)<(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->nbrevacc)==(n->nbrevacc)){

                  if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}
 void tricr4231(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)<(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->deces)==(n->deces)){
            if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->gueris)==(n->gueris)){

                  if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}


 void tricr4321(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->nbrevacc)<(n->nbrevacc))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->nbrevacc)==(n->nbrevacc)){
        if ((v->gueris)<(n->gueris)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->gueris)==(n->gueris)){
            if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}

 void tricr4312(){

LISTE temp =listeCreer();
ELEMENT d =elementCreer();
ELEMENT n=elementCreer();
ELEMENT v=elementCreer() ;
ELEMENT A=elementCreer();
int a;
int j ;
int posit=1;
date_test(d);
for(j=0;j<24;j++){
for (int i=1;i<=listeTaille(TAB[j]);i++){
           if (elementcomparer1(recuperer(TAB[j],i),d)==0){
            inserer(temp,recuperer(TAB[j],i),posit);
            posit++;
            a=1;
           }
           }if(a==1)printf("date not found please enter another one ");}

           for (i=1 ; i < listeTaille(temp); i++)
  {
    for (j=1 ; j < listeTaille(temp)-i-2; j++)
    {

        n=recuperer(temp,j);
        v=recuperer(temp,j+1);

     if((v->gueris)<(n->gueris))
      {
        elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
      }
      else if((v->gueris)==(n->gueris)){
        if ((v->nbrevacc)<(n->nbrevacc)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
        }
        else if((v->nbrevacc)==(n->nbrevacc)){
            if ((v->deces)<(n->deces)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 else if((v->deces)==(n->deces)){

                  if ((v->caspos)<(n->caspos)){
                 elementAffecter(&A,n);
                 supprimer(temp,j);
                 inserer(temp,v,j);
                 supprimer(temp,j+1);
                 inserer(temp,A,j+1);
                 }
                 }
        }

      }

    }
  }
                 listeAfficher(temp);

}
void tricroissant(){
printf("********************************************************************************");
printf("\n************** ranking according to an increasing sorting order  ***************\n");
printf(" (.)positive cases  |  (.)deaths  |  (.)healings   | (.) vaccinated poeple    ");
printf("\n       enter the key of your sorting according to the form [....] .\n") ;
scanf("%i",&ordre);
switch(ordre){
case 1234 :
tricr1234();
break;
case 1243 :
tricr1243();
break;
case 1324:
tricr1324();
break;
case 1423 :
tricr1423();
break ;
case 1432 :
tricr1432();
break;
case 1342 :
tricr1342();
break;
case 2134 :
tricr2134();
break;
case 2143 :
tricr2143();
break;
case 2413:
tricr2413();
break;
case 2431:
tricr2431();
break;
case 2341:
tricr2341();
break;
case 2314:
tricr2314();
break;
case 3124 :
tricr3124();
break;
case 3142 :
tricr3142();
break ;
case 3241 :
tricr3241();
break;
case 3214:
tricr3214();
break;
case 3421:
tricr3421();
break ;
case 3412 :
tricr3412();
break;
case 4123 :
tricr4123();
break;
case 4132:
tricr4132();
break ;
case 4213 :
tricr4213();
break;
case 4231 :
tricr4231();
break;
case 4321 :
tricr4321();
break;
case 4312 :
tricr4312();
break;
}}
void  modifyy(){
         printf("\n *********** MODIFYING INFORMATIONS RELATED TO A GOVERNMENT  ***********\n");
          printf("  ____________________________________________________________________________________________");
          SetColor(10);
        printf("         _________________________________________________________  ");
        printf("\n\n     | 1-Ariana     2-Beja         3-Ben Arous    4-Bizerte  |");
        printf("\n\n     | 5-Gabes      6-Gafsa        7-Jendouba     8-Kairouan |");
        printf("\n\n     | 9-Kasserine  10-Kebili      11-La Manouba  12-Le Kef  |");
        printf("\n\n     | 13-Mahdia    14-Mednine     15-Monastir    16-Nabeul  |");
        printf("\n\n     | 17-Sfax      18-Sidi Bouzid 19-Siliana     20-Sousse  |");
        printf("\n\n     | 21-Tataouine 22-Touzeur     23-Tunis       24-Zaghouan|\n");
        printf("\n\n     _________________________________________________________");
       do{printf("\n\n    TAP THE NUMBER OF THE GOVERNMENT : ");
          scanf("%i",&gouver);} while(gouver<1 || gouver>24);
          int n;
          int i;
          ELEMENT a=elementCreer();
          ELEMENT c=elementCreer();
          date_test(a);
          for(i=1;i<=listeTaille(TAB[gouver]);i++)
          {if(elementcomparer1(recuperer(TAB[gouver],i),a)==0)
          {n=1;}}
          if(n==1){system("cls");
          printf("\n\n 1) MODIFYING ALL INFORMATIONS .\n ");
          printf("2) MODIFYING ONE INFORMATION .\n ");
       do{printf("\n    ENTER YOUR CHOICE : ");
          scanf("%i",&option);}while(option<1 || option>2);
       switch(option){
              case 1:
               pos=i;

            supprimer(TAB[gouver],pos);
             elementLire(&c);
            inserer(TAB[gouver],c,pos);
            elementAfficher(c);
            printf("\n\n");
            system("pause");
            system("cls");
            main();
                break;
              case 2:
                 do{system("cls");
      printf("\n\n1) MODIFY THE NUMBER OF POSITIVE CASES\n");
      printf("2) MODIFY THE NUMBER OF DEATHS .\n",130,138);
      printf("3) MODIFY THE NUMBER OF HEALINGS .\n",130);
      printf("4) MODIFY THE NUMBER OF VACCINATED POEPLE .\n",130);
     do{printf("\n  ENTER YOUR CHOICE PLEASE ! : ");
      scanf("%i",&champ);
      } while( champ<1 || champ>4);
      switch (champ)
      {
          case 1:
         printf("\n ENTER THE NEW NUMBER OF POSITIVE CASES :");
             scanf("%i",&x);
             c->DATE=a->DATE;
             c->caspos=x;
             elementAfficher(c);
             printf("\n\n terminated successfully .... ");
printf("\nTap (1) to modify another information taper (0) skip this part : ");
scanf("%i",&w);
          break;
      case 2:
          printf("\n ENTER THE NEW NUMBER OF DEATHS :");
          scanf("%i",&nd);
          c->DATE=a->DATE;
          c->deces=nd;
             printf("\n");
printf("\n terminated successfully ....");
printf("\nTap (1) to modify another information taper (0) skip this part : ");
scanf("%i",&w);
      break;
     case 3:printf("ENTER THE NEW NUMBER OF HEALINGS :");
     scanf("%i",&ng);
      c->DATE=a->DATE;
      c->gueris=ng;
             printf("\n");
printf("\n terminated successfully ....");
printf("\nTap (1) to modify another information taper (0) skip this part : ");
scanf("%i",&w);
        break;
    case 4:printf("ENTER THE NEW NUMBER OF VACCINATED POEPLE :");
        scanf("%i",&nv);
         c->DATE=a->DATE;
         c->nbrevacc=nv;
             printf("\n");
printf("\n terminated successfully ....");
printf("\nTap (1) to modify another information tap (0) to skip this part and back to menu : ");
scanf("%i",&w);

        break;}
      }while(w==1);
                break;
                }
              }else{printf("\n\n date not found \n\n");
              system("pause");
              main();}
 }
void affichage(){
do{system("cls");
          printf("\n ********************************** VIEW LIST  ************************************* ");
          SetColor(9);
        printf("\n         _________________________________________________________  ");
        printf("\n\n     | 1-Ariana     2-Beja         3-Ben Arous    4-Bizerte  |");
        printf("\n\n     | 5-Gabes      6-Gafsa        7-Jendouba     8-Kairouan |");
        printf("\n\n     | 9-Kasserine  10-Kebili      11-La Manouba  12-Le Kef  |");
        printf("\n\n     | 13-Mahdia    14-Mednine     15-Monastir    16-Nabeul  |");
        printf("\n\n     | 17-Sfax      18-Sidi Bouzid 19-Siliana     20-Sousse  |");
        printf("\n\n     | 21-Tataouine 22-Touzeur     23-Tunis       24-Zaghouan|\n");
        printf("\n\n     _________________________________________________________");
       do{printf("\n\n    TAP THE NUMBER OF THE GOVERNMENT : ");
          scanf("%i",&gouver);} while(gouver<1 || gouver>24);
          listeAfficher(TAB[gouver]);
           system("pause");
           system("cls");
          do{printf("\n 1)BACK TO MENU");
          printf("\n 2)VIEW INFORATIONS RELATED TO AN OTHER LIST \n");
          scanf("%i",&choi);
            }while(choi<1 || choi>2);
            switch(choi){
            case 1: main();
            break;
            case 2:
                affichage();
                break;
            }
}while(choi=2);}
void ajout(){
 printf("  \n\n************************************** LET'S ADD INFORMATIONS !  **************************************");
              SetColor(9);
        printf("\n         _________________________________________________________  ");
        printf("\n\n     | 1-Ariana     2-Beja         3-Ben Arous    4-Bizerte  |");
        printf("\n\n     | 5-Gabes      6-Gafsa        7-Jendouba     8-Kairouan |");
        printf("\n\n     | 9-Kasserine  10-Kebili      11-La Manouba  12-Le Kef  |");
        printf("\n\n     | 13-Mahdia    14-Mednine     15-Monastir    16-Nabeul  |");
        printf("\n\n     | 17-Sfax      18-Sidi Bouzid 19-Siliana     20-Sousse  |");
        printf("\n\n     | 21-Tataouine 22-Touzeur     23-Tunis       24-Zaghouan|\n");
        printf("\n\n     _________________________________________________________");
       do{printf("\n\n    TAP THE NUMBER OF THE GOVERNMENT : ");
          scanf("%i",&gouver);} while(gouver<1 || gouver>24);
                printf("  \n__________________________________________________________________________________");
                e=elementCreer();
                elementLire(&e);

                inserer(TAB[gouver],e,1);
                printf("  \n___________________________________________________");

                do{printf("  \n\n WOULD YOU LIKE TO ADD ANOTHER DATE? ");
                printf("  \n\n Si IF YES TAP (1) \n IF NO TAP(2) :  ");
                scanf("%i",&choice);
                system("cls");
                switch(choice)
                {case 1: e=elementCreer();
                    elementLire(&e);
                         inserer(TAB[gouver],e,pos);
                          pos++;

                    break;
                case 2: system("cls");
                        printf("\n\n your information was added successfully ");
                        listeAfficher(TAB[gouver]);
                        printf("\n\n");
                        system("pause");
                        system("cls");
                        main();
                    break;}
                }while(choice==1);
                printf("  \n___________________________________________________");}
void remplissage(LISTE tab[])
{
FILE* fichier = NULL;
int inter[6];
int p;
    int jour,mois,annee,casp,guer,dec,nbv;
    char ng[50];
fichier = fopen("statistique.txt", "r");
if(fichier !=NULL)
{

    int nb=1;
    int i;
    fflush(stdin);
    while(fscanf(fichier,"%d %d %d %s %d %d %d %d ",&jour,&mois,&annee,ng,&casp,&guer,&dec,&nbv)!=EOF )
    {
       fflush(stdin);
    if(strcmp("Ariana",ng)==0)
{
    p=1;
}
if(strcmp("Beja",ng)==0)
{
    p=2;
}
if(strcmp("BenArous",ng)==0)
{
    p=3;
}
if(strcmp("Bizerte",ng)==0)
{
    p=4;
}

if(strcmp("Gabes",ng)==0)
{
    p=5;
}

if(strcmp("Gafsa",ng)==0)
{
    p=6;
}

if(strcmp("Jendouba",ng)==0)
{
    p=7;
}

if(strcmp("Kairouan",ng)==0)
{
    p=8;
}

if(strcmp("Kasserine",ng)==0)
{
    p=9;
}

if(strcmp("Kebili",ng)==0)
{
    p=10;
}

if(strcmp("Manouba",ng)==0)
{
    p=11;
}

if(strcmp("Kef",ng)==0)
{
    p=12;
}

if(strcmp("Mahdia",ng)==0)
{
    p=13;
}

if(strcmp("Medenine",ng)==0)
{
    p=14;
}

if(strcmp("Monastir",ng)==0)
{
    p=15;
}

if(strcmp("Nabeul",ng)==0)
{
    p=16;
}

if(strcmp("Sfax",ng)==0)
{
    p=17;
}

if(strcmp("SidiBouzid",ng)==0)
{
    p=18;
}

if(strcmp("Siliana",ng)==0)
{
    p=19;
}

if(strcmp("Sousse",ng)==0)
{
    p=20;
}

if(strcmp("Tataouine",ng)==0)
{
    p=21;
}

if(strcmp("Tozeur",ng)==0)
{
    p=22;
}

if(strcmp("Tunis",ng)==0)
{
    p=23;
}

if(strcmp("Zaghouan",ng)==0)
{
    p=24;
}


    ELEMENT ef=elementCreer();
    ef->DATE.jour=jour;
    ef->DATE.mois=mois;
    ef->DATE.an=annee;
    ef->caspos=casp;
    ef->deces=dec;
    ef->gueris=guer;
    ef->nbrevacc=nbv;
    inserer(tab[p],ef,(tab[p]->lg)+1);

}
}
fclose(fichier);
int f;
char nmg[50];
for(f=0;f<=24;f++)
{
    switch (p)
    {
       case 1:strcpy(nmg,"Ariana");
        break;
        case 2:strcpy(nmg,"Beja");
        break;
        case 3:strcpy(nmg,"Ben Arous");
            break;
            case 4:strcpy(nmg,"Bizerte");
            break;
            case 5:strcpy(nmg,"Gabes");
            break;
            case 6: strcpy(nmg,"Gafsa");
            break;
            case 7:strcpy(nmg,"Jendouba");
            break;
            case 8:strcpy(nmg,"Kairouan");
            break;
            case 9:strcpy(nmg,"Kasserine");
            break;
            case 10:strcpy(nmg,"Kebili");
            break;
            case 11:strcpy(nmg,"Manouba");
            break;
            case 12:strcpy(nmg,"Kef");
            break;
            case 13:strcpy(nmg,"Mahdia");
            break;
            case 14:strcpy(nmg,"Medenine");
            break;
            case 15:strcpy(nmg,"Monastir");
            break;
            case 16:strcpy(nmg,"Nabeul");
            break;
            case 17:strcpy(nmg,"Sfax");
            break;
            case 18: strcpy(nmg,"Sidi Bouzid");
            break;
            case 19:strcpy(nmg,"Siliana");
            break;
            case 20:strcpy(nmg,"Sousse");
            break;
            case 21:strcpy(nmg,"Tataouine");
            break;
            case 22:strcpy(nmg,"Tozeur");
            break;
            case 23: strcpy(nmg,"Tunis");
            default:
            strcpy(nmg,"Zaghouane");
    }
    printf("Les informations accessibles de %s \n",nmg);
    printf("\n");
    listeAfficher(tab[f]);
    printf("\n\n");
    p++;
}
int c;
printf("Vous voulez ?\n");
printf(" 1- back to menu\n");
printf(" 2- check out \n");
scanf("%i",&c);
while((c<1)||(c>2))
{
    printf("try again enter 1 or 2 \n");
    scanf("%d",&c);
}
if(c==1)
    {affichage();
}
else
{
    affichage();
}


}
void evolution(){

SetColor(9);
        printf("\n         _________________________________________________________  ");
        printf("\n\n     | 1-Ariana     2-Beja         3-Ben Arous    4-Bizerte  |");
        printf("\n\n     | 5-Gabes      6-Gafsa        7-Jendouba     8-Kairouan |");
        printf("\n\n     | 9-Kasserine  10-Kebili      11-La Manouba  12-Le Kef  |");
        printf("\n\n     | 13-Mahdia    14-Mednine     15-Monastir    16-Nabeul  |");
        printf("\n\n     | 17-Sfax      18-Sidi Bouzid 19-Siliana     20-Sousse  |");
        printf("\n\n     | 21-Tataouine 22-Touzeur     23-Tunis       24-Zaghouan|\n");
        printf("\n\n     _________________________________________________________");
       do{printf("\n\n    TAP THE NUMBER OF THE GOVERNMENT : ");
          scanf("%i",&gouver);} while(gouver<1 || gouver>24);
          int n;
          int H;
          float a;
          ELEMENT k=elementCreer();
          ELEMENT d=elementCreer();
          printf("ENTER THE FIRST DATE \n \n");
          date_test(k);
          printf("ENTER THE SECOND DATE \n\n");
          date_test(d);
          for(int i=1;i<=listeTaille(TAB[gouver]);i++)
          {if((elementcomparer1(recuperer(TAB[gouver],i),k)==0)&&(elementcomparer1(recuperer(TAB[gouver],i),d)==0))
                printf(" \n(1)VIEW PROGRESSION OF POSITIVES CASES \n");
                printf(" (2)VIEW PROGRESSION OF DEATHS \n");
                printf(" (3)VIEW PROGRESSION OF HEALINGS \n");
                printf(" (4)VIEW PROGRESSION OF VACCINATED POEPLE \n");
              do{   printf("      ENTER YOUR CHOICE : \n");
              scanf("%i",&H);
                 }while((H<1)||(H>4));
           switch(H){
       case 1:
           printf("****** PROGRESSION OF POSITIVE CASES *******");
           a=((k->caspos-d->caspos)/d->caspos)*100 ;
           printf("between those two dates the positives cases evolved by %f %",a);
        break ;
       case 2:
            printf("****** PROGRESSION OF DEATHS*******");
           a=((k->deces-d->deces)/d->deces)*100 ;
           printf("between those two dates the number of deaths evolved by %f %",a);
        break;
       case 3 :
         printf("****** PROGRESSION OF HEALINGS *******");
           a=((k->gueris-d->gueris)/d->gueris)*100 ;
           printf("between those two dates healings  evolved by %f %",a);
       break;
       case 4:  printf("****** PROGRESSION OF THE NUMBER OF VACCINATED *******");
           a=((k->caspos-d->caspos)/d->caspos)*100 ;
           printf("between those two dates the number of vaccinated evolved by %f ",a);

           break;
           default : evolution();
           }
}}
void menu()
{SetColor(15);
printf("\n\n||**************************************************************************||\n\n");
printf("||***************           CORONAVIRUS STATISTICS IN TUNISIA  *************||\n\n");
printf("  1) ADDING INFORMATIONS RELATED TO A GOVERNMENT \n");
printf("  2) VIEW THE PROGRESS OF THE VIRUS IN A GOVERNMENT \n");
printf("  3) DELETE ONE INFORMATION OR MORE RELATES TO A DATE .\n");
printf("  4) MODIFY SOME INFORMATIONS RELATED TO A DATE OR ALL OF THEM\n");
printf("  5) FILL THE LIST OF GOVERNMENTS WITH ELEMENTS USING A FILE \n");
printf("  6) VIEW THE RANKING OF EACH GOVERNMENT \n");
printf("  7) VIEW THE PROGRESS OF THE VIRUS \n");
printf("  8) THIS CASE IS AN OPTION IF YOU WANT TO KNOW MORE ABOUT THE VIRUS");

do{printf("\n         WHAT IS YOUR CHOICE ? \n");
   scanf("%i",&choix);
  }while((choix<1)||(choix>8));
  system("cls");
switch(choix)
{ case 1:
ajout();
break;
  case 2: affichage();
break;
  case 3:
do {printf("\n *************** LET'S DELETE ******************************** \n");
SetColor(9);
        printf("         _________________________________________________________  ");
        printf("\n\n     | 1-Ariana     2-Beja         3-Ben Arous    4-Bizerte  |");
        printf("\n\n     | 5-Gabes      6-Gafsa        7-Jendouba     8-Kairouan |");
        printf("\n\n     | 9-Kasserine  10-Kebili      11-La Manouba  12-Le Kef  |");
        printf("\n\n     | 13-Mahdia    14-Mednine     15-Monastir    16-Nabeul  |");
        printf("\n\n     | 17-Sfax      18-Sidi Bouzid 19-Siliana     20-Sousse  |");
        printf("\n\n     | 21-Tataouine 22-Touzeur     23-Tunis       24-Zaghouan|\n");
        printf("\n\n     _________________________________________________________");
       do{printf("\n\n    TAP THE NUMBER OF THE GOVERNMENT : ");
          scanf("%i",&gouver);} while(gouver<1 || gouver>24);
          int posi,b=0;
          ELEMENT a=elementCreer();
        ELEMENT e=elementCreer() ;
          date_test(a);
           for (int i=1;i<=listeTaille(TAB[gouver]);i++){
           if (elementcomparer1(recuperer(TAB[gouver],i),a)==0) {
            posi=i;
        e=recuperer(TAB[gouver],i);
        supprimer(TAB[gouver],posi);
        b=1;
    } }
    if(b==1){
        e->DATE.jour--;
        e->DATE.mois--;
        e->DATE.an--;
        printf ("INFORMATION WAS DELETED SUCCESSFULLY");
        } else { printf ("YOU SHOULD VERIFY THE DATE ");}
        system("pause");
        do{printf("\n 1)RETURN TO MENU");
          printf("\n  2)DELETE ANOTHER INFORMATION \n");
          scanf("%i",&cho);
            }while(cho<1 || cho>2);
            switch(cho){
            case 1: menu();
            break;
            case 2:
            break;}
        }while(cho=2);

break;
 case 4:
     modifyy();
break;
  case 5:
remplissage(TAB[25]);

break;


break;
  case 6:

    printf("********* VIEW THE RANKING OF GOVERNMENTS ************ \n");int f;
    printf("|   view ranking according to :   |\n (1)- An increasing sorting order \n (2)- A declining sorting order");
   do{printf("\n______________________\n");
        printf("\n select your choice :  ");
    scanf("%i",&f);}while((f<1)||(f>2));
switch(f){
case 1 :
    tricroissant();
    break;
 case 2 :
     tridecroissant();
break;

}

break;
 case 7 :
    evolution();
 case 8 :

     PlaySound(TEXT("inform.wav"),NULL,SND_ASYNC);
     printf("\n                                                                                        .^!tcfC%AOX@MRBBBBRRDM@@&WXXmXXWWWWWmGA%Czi~`                                                         ");
printf("\n                                                                                 `|)y$PXMBHR@mAp8azv}+u|~\:,,.......,:\|!ileC%PXDHHB&AIt.                                                        ");
printf("\n                                                                            `|zwP@BBMmgwyl!:`                                   ,!cnhmRH@k5i` " );
printf("\n                                                                        \)nA&BMO0ys>.                                                 \}nPMBW%c^                                                 ");
printf("\n                                                                    |z0mRBXhfi,                                                           ,+nPDRGn+.                                             ");
printf("\n                                                                ,rdmBBX0z|`                                                                   :chMH&0t`                                          ");
printf("\n                                                             \zgMHMAe>`                            `:_!i)lczzccvt+>^.                            :zPBBOc,                                        ");
printf("\n                                                          .rkDHMhc:                          :+cngm@M@WXmONPPPPPGmW@@XP%nc+:                       `+gRH@g8nIaoezcl)+i                           ");
printf("\n                                                        .cWHRPz:                        :txhmMWA8z?z:`             .|izCgmRRmknr^                     !TAPNOmmXW@@MRBBB@OhI?:                    ");
printf("\n                                                      .zXH@C>                       \rLOD@AI)~`       `.,::,.`            :!cCAWMm%zn`                           `.,\|+cnA@HMA?.                 ");
printf("\n                                                    `cmHMq:                     `!xPMXpe!.  .>tzxqhPmW@MRRRRWAx|               `\(IgWWhz,                                 ,tq&BXe,               ");
printf("\n                                                  .z&HWz,                    `zpP0z!.\+zTAmDHHHHHBMmP0nz)!\..:^>!+trczzeeeeezzcri!\. ,+yA$+                :_ +++!|:`         lNBMC:             ");
printf("\n                                                 iOH@x,                      ,+~|vIkmXOWHHHHRmhnl|, , seCkOW@@WmNAY%0qL88Lq00pgANmmONAqx>,_                                    `lXHW)            ");
printf("\n                                               \$RBp_                         :npSoyCpmMm0e+:`\}zqAXRHBAnev+|,                     `,_!(i`               `.`       .|cLXMAz,     :qBRn.          ");
printf("\n                                              tWH&l`                           ,sdm&Pnt: ~snAWBHHBBRRRRXkx}`                                             .zOky+,  ,xAbs^+0M@n:     zRB0.         ");
printf("\n                                             eRHP_                          ,)gWPni,    :xnfzc(+!~\::::,`                                                  >eY&MPni,>nO@gc!C@&>     lRH$`        ");
printf("\n                                            zBHh,                        :cpmAc\      `.,,.       `~(y8pAGmX%^                      `^+cxb0ppde~              `!eh&&q+.!C@&n+xm)     eBBo        ");
printf("\n                                           !MHP,                      `vYO%l: :!ryLkNm@MMOn\  \tfA&BHHHRXACc|                 `|sxpO@BHRmATxCOBDn.           ,aPPgARHBGc.,e&@z\!     `0HM!       ");
printf("\n                                           kH&|                       +Ii,!z$GWm&HHHHMAx!^tapXRHHHMG0aticx00i             ^rnA@BHBXgCc!:     .dHH0.          `,|}cx0mRHHXe,:qRz`      \WH%       ");
printf("\n                                          +RHy                          |CkLe+ CWBXwr lqORHHB@N05+,~c0m@Ax+.         `>z0mBHHMPns^            .pHHg\         \8Gq).  _a0mBWy:zBf       yHR+      ");
printf("\n                                          nH@~                              ,e@mx!`cPDMmAqet|. .+Tm@NC},         `>zg&BHBXpe!,                 .bBHmi         `+%M&C|`fGn(z%8:gRl      ~@Hn      ");
printf("\n                                         `AH0                             ^bm$^     .`     :rTO@Az>`        `|z0mRHBm%e!`                        !NHBA!   .`zYCi..lPRP!^pRA+  :O@|      pHN`     ");
printf("\n                                         ,XHa                             lc:         `_sCPmPx+,        `zzpXBHBX%z!                              .zWHR%!.bn~~ImXwi,+NDy.eRRL, sB8      xH@\     ");
printf("\n                                         ~MHc                             :znCd0pkgAPmXmYa+.        .+oY&BHDNTl~                                    ,emHBPy@D0!.}0W@AkBBC`sMHP``P&~     zHR!     ");
printf("\n                                         !BHl                             `>?cfCbxect!:         .tnA@HB@Axt:                                          .vARHBHHBA)`.inPMHR+ rDHe eHa     zHH+     ");
printf("\n                                         +HHl                                              `~snA@HRm%z!.                                                 >nMHHHHBmz,  ,!+.  xH&^:mm,    zHHi     ");
printf("\n                                         +BHc                                         \+zCA&BHRO0v^                                                        :zPBHHHH&x\      .PHf sp:    zHH+     ");
printf("\n                                         _MHz              `vIxxIxxa5zv}+!>|>u+?cyCpN&BHBMO0oi:                                                               !8@HHHHM8|     lHN`       cHR!     ");
printf("\n                                         ,XHI             `8BR%enhO@RHHHHHHHHHBD@mNg0nz}|.  `:|""~.                              `:^^:`                         :5XHHHHR0|   :B@^       zHM~     ");
printf("\n                                         `AHp             nBRz     `:>ircccl(+^,`       :vbP&RBHHBMm0c,                      :lSP@RBBR@OLc^                       .e@HHHHDn.  MD|       xHW,     ");
printf("\n                                          CHX,           ~RBn                         )ADHHHB@PqpORHHH&c                   .I@HHHMOPOMHHHHRAc.                      \%BHHRBA: mW:       hHO`     ");
printf("\n                                          cHBt          .PHp`                        +RBXYai,     `+LmDR(                  lRMAz^     \s0ORHHC                        i&HMp@p 00       ^@Hh      ");
printf("\n                                          !RHn          lBR+                         `>~              ,:                    ,.            \?z+                         !@H@s! \\       cBHn      ");
printf("\n                                           PHO.        `PHA                                                                                                             ?DHG,          pHBs      ");
printf("\n                                           eHBr        +RHo                                                                                                              nHHx         |MHN.      ");
printf("\n                                           ^&HA`       nHH!                                                                                                              ,OH@~        nHBc       ");
printf("\n                                            CHBe      `PHB.                                                                                                               zBHx       ~&HP.       ");
printf("\n                                           _$HHM5!~`  ^@HX                                                                                                                _@HP       0HR)        ");
printf("\n                                        ~nmBHR&mm@B&b,iHH%                                                                                                                 PHM      sRHg`        ");
printf("\n                                      `CMHRYv\\!..xBHC)HHf                                                                                                                 kHH,,zwdgDHHRAx!`     ");
printf("\n                                     ,pHB%|:zqCi` `dHRNHHl                                                                                                                 0HHcGHBgazznADHBOc.             ");
printf("\n                                    ^mHm!,SPi` :++:.YHHHBt                                  |$Gmg!                                >dNgz,                                   CHHHH@(   z$v:igBHWt  ");
printf("\n                                    %HB>^NG\ +kDBDOv|@HHDi                                 \mHOxPRt                              zDRLSMO`                                  nHHHMt     !0mz.s&HRz ");
printf("\n                                   }BHg %D+`xRXz|,   yHH@^                                 CHHz ~H0                             !DH&: NH!                                  aHHRl+pmWNn~ }Wp,>XHR)");
printf("\n                                   SHHz>Dh )B&|      :XH&\                                :&HHXoOH%                             cHHRfz@H(                                  zHHT`!xnCAD@} !@C vBHP");
printf("\n                                  `AHR++Ba >0+        dHm,                                `AHHHHHHy                             rHHHHHHB~                                  lHH|      iX&| o@_,WHR");
printf("\n                                  `PHR!+B5            vHP`                                 cBHHHHg,                             \WHHHHHY                                   }HM        )&e >Ml.mHB");
printf("\n                                   %HBv\@8            rHA                                  `cAmGC.                               igRH@x.                                   +Bm         .` ~Mz`mHM");
printf("\n                                   zHH0 hX,           $HY                                                                          ,|.                                     |MO            iRl NHm");
printf("\n                                   ^&HM.vRz          +MBz                                                                                                                  :W&            CM|:&Hgv");
printf("\n                                    IHHz.PO,        :OHk`                                                                                                                  `NB,          i@Y lBHI");
printf("\n                                    \WHm:}Ra        bH@>                                                                                                                    THz         `gM+.PHR+");
printf("\n                                     vBH0`CM!      tBBz|8`                                                                                                                  >@&|        IB5 CHHp ");
printf("\n                                     `kHR+:mg.     zHB)xW:                                                 :.            `                                                   eHp       iRh`(RH@> ");
printf("\n                                      !HHP.rDz     :PB&@X:                                                 w@x,        !qWz                                                ,xlH@~     :OW~~XHRc  ");
printf("\n                                       GHBz`0W_     .AHHm.                                                 `cm&ds^` ^zPBRL,                                                _M@Hg.     bR?`pHHb   ");
printf("\n               `.:^|!+i)rlczzezc(~`    tRH&~\Xp`     zBHN`                                                   .zmBB@&BB&Li                                                  >MH%,     iMI aBHP,   ");
printf("\n          .)0GW@DRBHHHHHHHBRMMRBHBXC^   SHH%`vDz     ,OHA                                                      `+eCbz!.                                                    !RR,     :mk.+MH&|    ");
printf("\n         ^PBH@pyvt+zpmBHg+\,..,_rhRH&!  \mHRv C@+    rBHO.                                                                                                                 !R&     `0m^:OHD(     ");
printf("\n         qHB0\ ,sn%g%nz+:l%OWXPCi`vDHm:  iMH&!,%&?   iDHA                                                                                                                  !R&     I@+`qHBf      ");
printf("\n        \&HP`>8@@0zlIRBmWR%s!+zGB0,bHHn   cRH@v,5m0> `NHA                                                                                                                  !RD   `yWs`aBH%`      ");
printf("\n        cHHA %Hg\    aBHHm.    .dB%!@HM`   }WHBA?\cCi AHP`                                                                                                                 +BM  .oC~,SBHG\       ");
printf("\n       +WHH&iMD!     `qHHBt     `pHCaHHz    `vPBHRPx^ cBBv                                 +yzv}!_:.                               `,\iiz}                                 eHN  :.~CMHRC.        ");
printf("\n  .sTAmBHHHBvOHn      \mHHC      +RMlWHm\      inXHHX~`YHm                                 +XHHHHBR@&mGAp$Cnf5zzccllcczeynb0hAPGmmm@DBHHMz                                 gHh |eARHRY!          ");
printf("\n ?mHBX0fzczl:vRRl      lBHO.     `kHgnHH@gAPGm&@RBHHH0 +RH)                                 ,nMHHHA>_!+tslccczzzzccccclvvrrrrr)+>\^gHHHX>                                 +RBcxRHHma_           ");
printf("\ncRHO},s0m&&&m%AB@c`    `YHBi      +RBfWHHHDOkdCCC0PMHM! 0H&>                                  |YBHH@0c+>\,`                   .\!eGHH@x,                                 `gHA^BHDy.             ");
printf("\n&H@|^PRp)~:_cXHHHR}     !MHn      `kHXCRAl:        :fDP._&HO\                                   }&HHHHHHBD@WmPA%wCInCL0pgANOX&MRHHH&x:                                   fBM+CHDs               ");
printf("\nBH&:>&z      \pBHHXi    `PHWzccl_  iRHC:\i        zx nHC`sHHN\                                   :ymBHHHHMA0ny5yfxnCT$%hgP@HHHHHBNz,                                    lRBzzBHx                 ");
printf("\ngHHn l%:      `z@HHm\|lCOBRWAdxz>   0HM0@a       :Ac SHBy`0HHG_                                    .}0WBHNc+^.          ,>lmHROn                                       lMBCvMHg.                 ");
printf("\n_mHRI.)Y:       >GHHBMN0e+:         ^mHBn`      }h?`eRHHBx.nBHX+                                      `.e0N&RMXONPPPPGmW&mACl^                                       `yRBbcMHM\                  ");
printf("\n |OHBg~!Ae`     .$RA),               >Ts      |0k>_kBH@@HBe.v&HMz`                                         `\!)czoxTac}>,                                           \pBRnnRH@(                   ");
printf("\n  :%BH@c\qp^    zf|             ,!.         ,fp+:x@HR0~\pBBA>~%BBk~                                      ..              `|,                                       sWH@xABHX!                    ");
printf("\n    !GHHP| ke`                :0RP\       `o@o.yMHB%_    !&HB%||%RRb:                                    zMMPCc|.` `:+z0m&x.                                     iOHRh%RHDx.                     ");
printf("\n     .xDH@r,q0,              `%BS.        cB$,%BHm}       \TRHMn:!hR&z.                                   \oPMHBM&W@RHBOx^                                     !YBBmh&HBP!                       ");
printf("\n       +WHRe.0A:             >@h.         pM>zHHG:          ikBH&y: 0Rmc.                                    ,!canCCas~                                      !pRHXAXHHmc`                        ");
printf("\n        :@HM!\Xb              \.         ,XA`CHBc             +ABH&f\"0Dme:                                                                                )ABBOAmBBmc.                          ");
printf("\n         IHHb l&|                        iBe YHO.               iABH@b>|C@@S                                                                            ,lAB@AgWHBPr.                            ");
printf("\n         :mHM+`0C                        nP.!MHz                  +%RHRgr^zNRNv,                                                                     `+T&RG0kMHR%+`                              ");
printf("\n          tDHm~:Ar                      `0!:GHX:                    |n@HHWn>!n@@%c:                                                               ,swmDPnnkBH&n~                                 ");
printf("\n           zRHm!|C\                     ._.%HHC                       ,cNBHRGTCOBHRNf,                                                        .|tAMRm0n%@HHGc,                                   ");
printf("\n            cMHMz`                        fBHHI                      `!xPBHHHHHDAd0OBX$l:                                                    l&DOPXBBHHHHHHn^                                    ");
printf("\n             +mHBP(`                     ^@B&BRe`                 ~c%WBHHHHHHHW>   +RB&@Mgt                                            .eYmPlABx   zRHHHHHHHM%+`                                 ");
printf("\n              `(PBHM$c^                  +BHPemHP_           \snNDHHHHHHMAnyRHe   |&Ba  ~AHXC?,                                     :(C&R0!  (RB$.  8HMtamHHHHH&x:                               ");
printf("\n                 !INBHMc                 sHRW&wmH&t      ,lTGRHHHHHHMAxi,  !RB:  ,PHw`   !RHW&MPb?\`                           .>cSNM&RHC    `0HHg: :MHz .l&HHHHH@x:                             ");
printf("\n                    5BHA`               `pHd.nBBHHRI^~)CPMHHHHHHMPx+,      yHN   nHO:    \&Hg,!nA&DWP0al+|:.           .\"tznpO@BMAe>sRH5     _@HHq `kHg   ,eWHHHHH&e.                           ");
printf("\n                    ^@HR)               zR&_  IBHHHHBBHHHHHHRPn},         `PHe  !MM+      AHB)   `~?owpA&BRM&mOGNNNGmX@DBMGgqCyl!.   pHH       IHHD> lB@_    ,eWHHHHHm?                          ");
printf("\n                    SHHHW|             nR@}   `IBHHHHHHHH@ql\             sB@~  %H8       zHHG,        +mH@kSCCCCCCCzvC@HM5`        MHW       :mHH5 .mHz      ,f@HHHHBp_                        ");
printf("\n                   +BMI0HP,         `+gBP>     `bHHHHBOC},                0H%  >MR!       .NHHf      `5DHT,            \bRBk\      `hHBz        oHHp  nHY        \dRHHHH@z`                      ");
printf("\n                  .OHz zHHn       |aGB@l`       .gHH0|                   ^@Hc  yHm`        }RH@>    :hBHR>               pHHX+     cBHg.        >DHG. +RM|         !PBHHHHA|                     ");
printf("\n                  |MB+\NHH@s|!ry0mBRPz,          _WHa                    zH&\  gHR?         eBHk`  !mHRHHY,             eRBmRDy`  !@Hm~         zBH@: `OHz          `z@HHHH@z`                   ");
printf("\n                  .OHldHON&MRRMWN0c~              lBW\                   gHk  :&HB@br+!!!>: `nBBI zMBS\aRHG|          `fRBC.cDBh::GH&!  ^> !!ieABHHR!  nHk            _gBHHHBh`                  ");
printf("\n                   aHgkHd  .,,.                   `%Hn                  \@H5  tBmcBHMAhAORRz `IBBABBa   )@H&)        `nBBn`  lRHmNH&! `qBB&OGOXBHHHHz  iB@~            `zMHHHHA^                 ");
printf("\n                   \BBGHRi                         ~WW\                 sBR!  yHq.mM!   cRW|   zDHHN`    !mHRf`     `TBBx`    qHHHX:   |RBz``+0MRRBHW+ .OHz              !OHHHHWt                ");
printf("\n                    wHHHHm:                         }Mr                 bHg   pHy`mP   oBP\     !BHA      ,AHBz     5HH$      >DHW~     )MHWMHHRAdg&HHG IHP               `xRHHHB%:              ");
printf("\n                    \XHHHHq`                         !\                `OHe   WR+|M@v.cR@_       PHA       0HHe     +RHd      .mHC       cBHHHA+` :bB@NG+MM`                )@HHHHO>             ");
printf("\n                     }DHHHBz                                           +BM| `IH0`~N@BWRHp        nHA      .mHm:     `PH@^     `mHx       `mHH&\    .mOzM gH>                 >@HHHH@r            ");
printf("\n                      5BHBBRl                                          IHY ,%Bx~tcr>|IMHh        IHA      !RHo       yHHz     `mHx       ,XBA@Y!` .zR@mX:eHy                  !XHHHHRf`          ");
printf("\n                       bBRPRRc                                        `PHz 5BYeM@Om@g!cB&\       xHA      nHR!       ~@H%     ,XHx       yBBpbMB&m@HHHO+ |MP`                  ^AHHHHB0,         ");
printf("\n                       .pH&0@Rn.                                   `>chB@~ qHcNM   \P@+AHT`      xHA     :XHm.        pH@\    :&Ha      +MHn,eP@RR@Oqt.   PM                    .wBHHHHP\        ");
printf("\n                        .$BRN@BP>                              ,+ah&BHHHA` qHcO@~   !M0iRBc      xHA     cBHw         zBHc    ,&Hy     `WHO:   `::`       nH5                    `eRHHHHm>       ");
printf("\n                         `zMHBHHDq>                       `_lSPMHHHHHHHHn  LHz&&:    %RaPHMi     xHA     %HB}         ~@H%    :&Hy     nHm_               lHA                      )@HHHH&i      ");
printf("\n                           _0RHHHHBNa!`              `~}e0WBHHHHHHHHHHHB}  eHDH@\    yHHBHH&+    IHA    \@HA           gH@~   ^@Hy    zBm|                >HR"                      "mHHHHMr     ");
printf("\n                             >b&HHHHHB@pnz(+>|>+reChG@BHHHHHHHRXA%RHHHHG`  +RBMR!    zHRhRAB&!   IHP`   zHHz           zHHo   ^@Hy   sRR|                 .BHa   `!z(`               \AHHHHRz    ");
printf("\n                                |oA@HHHHHHHHHHHHHHHHHHHHR&gn?\   lBBmHHx    ARSHv    zHm5M~(@Mt  IHG`  `AHW:           ~@Hm,  ^@Hy  vRMt                   XHP.>bWg(`                  zRHHHBn`  ");
printf("\n                                   .!cnpANOOOGNPAk%Lnev!:`       bH@0HR+    )BbBC    zHPxM> +&@( IHO.  _MHb             gHB}  ^@Hy +MMs                    gHRm@L>                      t@HHHBc  ");
printf("\n                                                                `PHAYHG`    `PgNm,   zH8k@~  !WMsIHm.  5HR+             oHHn  ^@Hy>WDr                    `XHBg|                         zHHHHW\ ");
printf("\n                                                                :@H0@Hn      cRPBz   fBI@O.   !WDgHm, `PHG.             >RHA  |MHpmRl                    ,8H@c`                           RHHHHl ");
printf("\n                                                                )HBgHBt      `DGWm:  gXqHC     !&HHX,  MHn               AHM_ |DHHRz                    !OHh~                            cHHHHB} ");
printf("\n                                                                CH&PH@\       %R0RL`sRp&@~      +BHW: aHR.               nHHz |DHBo                   .aMRL`                            ,NHHHHP. ");
printf("\n                                                               `NHWWHA`       !@Na@0WRXBe        AH&:`NHA`               sBHP`|DH0`                  >PBm}                             `LHHHHM!  ");
printf("\n                                                               :DHmHHC     .tzIPBdvXHHBL``,.     IH@^~@H@s               iRHN`|DHr                 `z@Bq:                              oBHHHBe   ");
printf("\n                                                               eHB0HHr    ,NHHHHHHNcn@BAN@RMP)   IH@\ cMHRC,            ?&H@i |DHr                \hBW)                               zRHHHBC`   ");
printf("\n                                                               kHX0H&:     z&HHRWmWMWNRHHHHHHm:  IH@\  >NHHP>         .nRHP|  |DHv               )WBp\                               zRHHHHp.    ");
printf("\n                                                              ~@HYmH%        ::     `:^| !++>`   CH@\    c@HRn.      imH@c`   |DHv             _ABm+                               .qBHHHBC`     ");
printf("\n                                                              ?BHgRHz                            SH@\     |PHHP|    xRHP|     |DHl           `c@R8,                               :AHHHHBI`      ");
printf("\n                                                              5HRgHD>                            $H@^      `yDH@l .nBRn.      |DHl          .wBHb                                !mHHHHDz        ");
printf("\n                                                              $HmgHP                             0H@^        !OHBAGHW}        >RHc           +kR@n_                            `zMHHHH&t         ");
printf("\n                                                             `PHpXHn                             pH@^         ,bRHHm\         !BHz             >d@RAc,                        \%BHHHHP|          ");
printf("\n                                                             ~MHpBBr                      `_vxy  gH@^           ?gn:          !BHy |w%nl:        :zPB@0(.                    _XHHHHRn.           ");
printf("\n                                                             cHMAHM|                 `|vCAWR@OMReAHM|                       `,cBHx`PBAAWDm%e+:      >xOB&0)`               `z@HHHHmi             ");
printf("\n                                                             LHmNHm.            .!cCP@B@N0e . rBOAHHWAAAAAAAAAgkgggggAAPNOm&@RBHHnsBg  `!z0OMRmhxr>`   >xPRX8),           >ABHHHRC,             ");
printf("\n                                                            .GHN&Hp      `:>)o%G@@Pqys|`     :CBGAHBPddwwwwwwdddddddwwwwddddddPHHC)BMx|     ,+zbAWR@N%xl>,~fPMMga!`     :CDHHHBP!               ");
printf("\n                                                            >MHNBHx,ln%Am&M@N%z}~`      `|l8NMRA!AHM>                         >RHC`cORROy+:       \+zCAmMMmkdT%0WB&he!\z&HHHHMc`                ");
printf("\n                                                            cHBgHB+kHXbz}^`       .>lnkXR@P8z `  AHM>                         ~@HS   `|v8P@MO%f)~`       .>lyw@m~PHHHHHHHHH@I,                  ");
printf("\n                                                            CH&hHX,gHc      `~rx%G@RWACc .       AHM>                         :&H8        .!cbP@R&Pqz+\`     .AR nHHHHHBMP5:                    ");
printf("\n                                                            gHPPHg oHOcrzx$P@B&P0a}^`            PHM>                         .mHq             `|lnkmMRWP0IceGH0 IHHHHg|.                       ");
printf("\n                                                           `mH%mHC .nW@WNYbe)|`                  GHM>                         `mHp                   .|tzI$PX@A~ yH&gH0                          ");
printf("\n                                                           ^@H0DHz    `                          mHB0zvi \.         ,~!roqPPz.`mHg                               zH&SHg                          ");
printf("\n                                                           !RHMHR!                               mHmnqkGWMM&mmGGOmX&RR@OYn(:  `OHP                               rHMCHO`                         ");
printf("\n                                                           +BMPHW:                               WHn     ,>zMHHHHDCc+~`       `NHG                               tBB8H&:                         ");
printf("\n                                                           cH@AHN                                @Hn      .pHMf0HHP~           AHO                               +BHdBB!                         ");
printf("\n                                                           zH&kHY                                @Ha     .0B@}s@XPBm.          kHm                               !RHwRH(                         ");
printf("\n                                                           yH&AHC                                @Hl    .dBX+zRHMsxBh,         %Hm`                              ~@HqMHc                         ");
printf("\n                                                           nH&AHn                                @H+   .0HO nBMXBMszBA:        0Hm`                              \@H0@He                         ");
printf("\n                                                           dH&AHn                                @H+  \NB0>PHk: v@RofRX!       0HW,                              :WHp&He                         ");
printf("\n                                                           0H&AHn                                @R> |OBC!mBT.   !XB+eR@+      wH@\                              ,XHpXHc                         ");
printf("\n                                                           wH&kHq                                @W:+WRo+XRy      _O@icR@t     CHM~                              `PHw@H}                         ");
printf("\n                                                           zBRCPRAIl!:`                          @@xMMc}@Ml        \@@?rMMl    xHR>                         .^+cfpMkwH@^                         ");
printf("\n                                                           .8RB&DHHHHR&Ogqxc?!_:,`              .MHH@(vM&i          +&Mrt@Rz   cBR!               `,~ }cadgmMBHHHHBWB@z                          ");
printf("\n                                                             |eOHHm@HBPC$gOWMBBBR@&mGAp0TCCCS0hP@HH&+zRm             !XDc+&By  :NHWAAAAAAAAPPNOmX&@RBBRBHHBBHHHHRmgCv,                           ");
printf("\n                                                               cHA.kHW:     .~!}rzefnCw0%%%0d8CCmHm aRG~              |mRe!XBn` .?zeeeeee5eeeeezzzc(+|:tDHgAHDI!,                                ");
printf("\n                                                               nHq,mHY                         lDP|nBA:                ^GBx>OBL.                       .GHAzHG.                                 ");
printf("\n                                                               gHy>DHz                        cRW~qBp,                  \PBC|PB%.                       bHG_@D>                                  ");
printf("\n                                                              .XBrcH@~                      `eRm>pBd.                    :gB0~kHg:                      ?B&`PHz                                 ");
printf("\n                                                              +B@^bHp                      ,%B%\0Dc                       `IBG|yRX!                     .OR`nHp                                 ");
printf("\n                                                              zHA AHz                     :ABC:pB)                          5Rm>cM&+                     qH\tBm,                                ");
printf("\n                                                              wHn,WD>                    ~GRy\gRf                            zRW+}@@)                    zHi,WR!                                ");
printf("\n                                                              PB(!BN                    !XDc\PRz                              lM@i mDc                   +Be hHz                                 ");
printf("\n                                                             ^@&\lBn                   i@@t~NDl                                ?MMv~PRf`                 ~@$ fHq                                 ");
printf("\n                                                             vHg 5Bs                  rMW!_O@?                                  +@Rz:%Bd                  OP tBP                                 ");
printf("\n                                                             nHf C@~                 zRm>>m&+                                    !WRf.nRa`                k&\^@W,                                ");
printf("\n                                                             gB+ 0@!               `IBP^+&X!                                      >mBC.zB0,             `:pD> NB}                                ");
printf("\n                                                            ~&Ba }&RWP0ny5eeeeeezzIGB%\zMm|                                        |mH0.nR&qaeezeeaIC0gGWRB0..NH$                                ");
printf("\n                                                           >PHm+  .+zn%AOX&@MM@@WXG0}:%BG^                                          \GHC !xq%kgggkp0dCfzv+\  ~mHRr                               ");
printf("\n                                                      `~}fm&q!                       0HG,                                            \&B,                      ihMGa+:                           ");
printf("\n                                                  ,sCA&@PSi.                         GB)                                              PH\                        :c0m@mgnt.                      ");
printf("\n                                                 z&W0z+,                            zR%`                                              cRt                            \iz8NXn:                    ");
printf("\n                                                zBd.                             `+hR%,                                                cM%                                +Wm|                   ");
printf("\n                                               |@m,                          \ccxORP)                                                   iADPyi^`                           nHh                   ");
printf("\n                                               0Hc                         `z@ROqz|                                                       +npXRWb|                         ^m@                   ");
printf("\n                                               AB}                       .)PD%~                                                              `!C@DT~                        !M.                  ");
printf("\n                                               +&ml:                 `>z0XXC|                                                                   :eO@%v:                   .+wW                 ");
printf("\n                                                :eA&mkSxyezccczzyndkG&&Ax+`                                                                        !50Ag%Ces+!|~\\~|!icf0P&X$>              ");
printf("\n                                                   ,!cn0kPGmmmOPA%Cet_`                                                                                .|)xhG&RBBBR@XNhCe}~`             ");
    break;
}
getch();
}


   menu();


    return 0;
}
