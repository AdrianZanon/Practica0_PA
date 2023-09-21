all: Brazo

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

MainBrazoRobotico.o: MainBrazoRobotico.cpp BrazoRobotico.h
	g++ -c MainBrazoRobotico.cpp

Brazo: MainBrazoRobotico.o BrazoRobotico.o
	g++ -o Brazo MainBrazoRobotico.o BrazoRobotico.o

clean: 
	rm -f *.o Brazo

test: all
	./Brazo
