#include <iostream>
#include <cmath>
using namespace std;

int main (){

	double a=0.0, b=0.0, c=0.0;
	double x1=0.0, x2=0.0;
	
	//ENTRADAS
	cout << "Bienvenido al programa que resuelve ecuaciones de segundo grado." << endl;
	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	cout << "Introduce el tercer numero: ";
	cin >> c; 
	
	
	//OPERACIONES
	
	x1= -b+ sqrt (b*b) - (4.0*a*c)/(2.0*a);
	x2= -b- sqrt (b*b) - (4.0*a*c)/(2.0*a);

	//SALIDAS
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;

}
