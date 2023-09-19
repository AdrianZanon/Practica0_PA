#include <iostream>

using namespace std;

Class BrazoRobotico {

	private:
		double x;
		double y;
		double z;
		bool sujetando;

	public:
		BrazoRobotico(double, double, double, bool);

		int obtenerX();

		int obtenerY();

		int obtenerZ();	

		int obtenerSujetando();

		void coger();
		
		void soltar();

		void mover(double, double, double);

}
