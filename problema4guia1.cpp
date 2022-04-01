#include <iostream>
#include <cmath>
using namespace std;
int main() {
  //declaracion de variables
  float peso;
  float estatura;
  float IMC;
  //entrada
  cout<<"Ingresar su peso:";
  cin>>peso;
  cout<<"Ingresar su estatura:";
  cin>>estatura;
  //proceso-algoritmo
  IMC=peso/ std::pow(estatura,2);
  //salida
  cout<<"Su indice de masa corporal es:"<<IMC;
}