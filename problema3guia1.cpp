#include <iostream>
#include <cmath>
using namespace std;
int main() {
  //declaracion de variables
  int edad;
  float peso;
  float frecuencia;
  //entrada
  cout<<"Ingresar su edad:";
  cin>>edad;
  cout<<"Ingrese su peso:";
  cin>>peso;
  //proceso-algoritmo
  frecuencia= 210-(0.5*edad)-(0.01*peso+4);
  //salida
  cout<<"Su frecuencia cardiaca es:"<<frecuencia;
  return 0;
}