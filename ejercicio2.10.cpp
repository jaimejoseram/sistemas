#include <iostream>
using namespace std;

int main (){

	char caracter='a'; 
	bool resultado_1, resultado_2, resultado_3, resultado_4, resultado_5, resultado_6, resultado_7; 
	 
	 cout << "Aclaración 1 es true 0 es false." << endl;
	//APARTADO 1
	resultado_1 = (caracter >= 1) && (caracter <= 6);
	cout << "Resultado apartado 1: " << resultado_1 << endl;

	//APARTADO 2 
	resultado_2 = (caracter <= -5 ) || (caracter >= 5);
	cout << "Resultado apartado 2: " << resultado_2 << endl; 
	
	//APARTADO 3
	resultado_3 = (caracter > -5) || (caracter < 3);
	cout << "Resultado apartado 3: " << resultado_3 << endl;
	
	//APARTADO 4 
	resultado_4 = (caracter >= 1,3 ) && (caracter <= 10,20);
	cout << "Resultado apartado 4: " << resultado_4 << endl;
	
	//APARTADO 5 
	resultado_5 = (caracter%2 == 0,10) || (caracter%2 != 0,10);
	cout << "Resultado apartado 5: " << resultado_5 << endl;
	
	//APARTADO 6 
	resultado_6 = (caracter >= 0,10) && (caracter <= 20,30);
	cout << "Resultado apartado 6: " << resultado_6 << endl;
	
	//APARTADO 7 
	resultado_7 = (caracter < 0,10 || 20,30);
	cout << "Resultado apartado 7: " << resultado_7 << endl;	
	
	//sadjfasdkjgfkgsfkjdgsfkjagskjgfagskhjasfasdfasdfasdfasdfasgfasdfASFSFASDFASDFSADFAASDFASDasfasfasfasfasfasfasdfasfasdfasdfasgafdgfsgamsf,jagsf,mgasdjgfashfgafjhfghjrgsakjgsfj 
}
