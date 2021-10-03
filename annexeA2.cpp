#include "monfichier2.h"
#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

//Question 2a) Après initialisation des variables dans la fonction main
//La fonction main pose une condition qui est toujours vraie 
//cette condition fait appel à la fonction menu pour connaitre le choix de l'utilisateur
//Ensuite elle execute la boucle dépendemment du choix 1,2 ou 3,elle l'exécute indéfiniment
//si le choix est 1, elle calcule la surface du disque
//si le choix est 2, elle calcule le volume du cylindre
//et si le choix est 3, elle fait quitter l'utilisateur, en comptant le nombre de fois qu'on
//a calculé la surface et le volume 


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
