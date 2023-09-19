#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

BrazoRobotico::BrazoRobotico(double iniX, double iniY, double iniZ, double iniSujetando){
	x=iniX;
	y=iniY;
	z=iniZ;
	sujetando=iniSujetando;
}

int BrazoRobotico::obtenerX(){
	return x;
}

int BrazoRobotico::obtenerY(){
	return y;
}

int BrazoRobotico::obetenerZ(){
	return z;
}

int BrazoRobotico::obtenerSujetando(){
	return sujetando;
}

void BrazoRobotico::coger(){
	sujetando = true;
}

void BrazoRobotico::soltar(){
	sujetando = false;
}

void BrazoRobotico::mover(double x2, double y2. double z2){
	x=x2;
	y=y2;
	z=z2;
}
