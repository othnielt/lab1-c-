#include "monfichier2.h"
#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;


int main(void) {
char choix;
int nvolume = 0; //nombre de fois que la fonction volume a été lancee
int nsurface = 0; //nombre de fois que la fonction surface a été lancee
double rayon, hauteur;
while (1)
{

 cout << "Que souhaitez-vous faire ?:"<< endl;
 cout << "-Calculer la surface du disque de rayon (Tapez 1)"<< endl;
 cout << "-Calculer le volume du cylindre de rayon et hauteur (Tapez 2)"<< endl;
 cout << "-Quittez le programme (Tapez 3)"<< endl;
 cout << "Votre choix: ";

 char n ;
 cin >>  n ; 
 choix = menu(n);
switch (choix)
{
case '1': cout << endl << "Calcul de la surface :" << endl;
cout << "Donnez le rayon: ";
cin >> rayon;
nsurface ++;

cout <<"La surface est : ";

cout<< surface(rayon)<< endl;
break;

case '2': cout << endl << "Calcul du volume :" << endl;
cout << "Donnez le rayon: ";
cin >> rayon;
cout << "Donnez la hauteur: ";
cin >> hauteur;
nvolume ++;
cout <<"Le volume est : ";
cout<< volume(rayon, hauteur)<<endl;
break;

case '3':cout << endl << "Sortie du programme" << endl;
cout << "La fonction volume a ete lancee " << nvolume << " fois" << endl;
cout << "La fonction surface a ete lancee " << nsurface << " fois" << endl;
exit(0);
default: break;
}
}
}