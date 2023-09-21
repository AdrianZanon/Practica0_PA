#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

/*Puntos iniciales del robot*/
int main(){

double xx, yy, zz;
bool sujetandos=false;
bool decision=false;

cout << "Dame unos valores para la x inicial, la y inicial y la z inicial. \n";
cin >> xx;
cin >> yy;
cin >> zz;

BrazoRobotico b1(xx, yy, zz, sujetandos);

b1.mover(xx, yy, zz);

cout << "El brazo robótico ha sido movido a la posición x=" << xx << " y=" << yy << " z " << zz << " \n";
cout << "Hay una pieza que puedes coger, deseas recogerla? ( 1 (recoger) o 0 (no recoger) ) \n";
cin >> decision;

if(decision == true){
	b1.coger();
	cout << "Se ha recogido una pieza. \n";
	cout << "Donce quieres mover la pieza Recogida? Dame los valores de la x, y z. \n";
	cin >> xx;
	cin >> yy;
	cin >> zz;
	b1.soltar();
	cout <<"Has soltado la pieza en x=" << xx << " y=" << yy << " z=" << zz << " \n";
}

cout << "Completado. \n";

return 0;

}





