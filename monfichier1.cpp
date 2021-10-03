#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main () {

int numbEntier;  // integer

char caracter ; 

float decimalnumber;  // float 32bit 


cout << "Taille en octets d'un caractere: " << sizeof(char) << endl;

cout << "Taille en octets d'un entier : " << sizeof(int)<< endl ;

cout << "Taille en octets d'un  double: " << sizeof(double) << endl ;

cout << "Taille en octets d'un  float: " << sizeof(float) << endl;

cout << "Taille en octets  d'un entier court: " << sizeof(short) << endl ;

cout << "Taille en octets  d'un entier long: " << sizeof(unsigned int)<< endl ;



cout << "Type un entier : ";

cin >> numbEntier; 

cout << " Nombre en decimal  : " << dec<<numbEntier<< endl;

cout << " Nombre en octal  : " <<oct<<numbEntier<< endl;

cout << " Nombre en hexadecimal  : " <<hex<<numbEntier<< endl;



cout << "Saisissez un reel : ";

cin >> decimalnumber;  // affiche le nombbre float de

cout << decimalnumber<< endl;

cout << setprecision(3)<<scientific<< decimalnumber<< endl;


cout << "saisissez un caractère : "<< endl ; 

cin >> caracter ; 


cout << caracter<< endl;


 cout << int (caracter);


//cout <<HexToDec(caracter); 


//  HexToDec(n)


    return 0 ; 
}

