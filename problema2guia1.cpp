#include <iostream>
#include <cmath>
using namespace std;
int main(){
  //declaracion de variables
    float radio;
    float altura;
    float areabase;
    float arealateral;
    float areatotal;
  //entrada 
    cout<<"Ingresar el radio:";
    cin>> radio;
    cout<<"Ingresar la altura:";
    cin>> altura;
  //proceso-algoritmo
    areabase=3.1416* std::pow(radio,2);
    arealateral=2*3.1416*radio*altura;
    areatotal= 2*areabase+arealateral;
  //salida
    cout<<"El area base de un cilindro es:"<<round(areabase);
    cout<<"\n";
    cout<<"El area lateral de un cilindro es:"<<round(arealateral);
    cout<<"\n";
    cout<<"El area total de un cilindro es:"<<round(areatotal);
  return 0;
  }
    