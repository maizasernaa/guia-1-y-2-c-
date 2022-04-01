#include <iostream>
using namespace std;
int main() {
//declaracion de variables
  float P1;
  float P2;
  float EP;
  float EF;
  float promedio;
  //entrada
  cout<<"Ingrese su nota de PC1:";
  cin>>P1;
  cout<<"Ingrese su nota de PC2:";
  cin>>P2;
  cout<<"Ingresar nota de examen parcial:";
  cin>>EP;
  cout<<"Ingresar nota de examen final:";
  cin>>EF;
  //proceso-algoritmo
  promedio=0.1*P1+0.1*P2+0.35*EP+0.45*EF;
  //salida
  cout<<"Su promedio final es:"<<promedio;
}