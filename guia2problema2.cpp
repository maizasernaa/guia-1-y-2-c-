#include <iostream>
using namespace std;
int main() {
  //declaracion de variables
  int precio;
  int chocolate=3;
  int cantpasaje;
  float pasajeSem;
  float importetotal;
  int cantchocolate;
  //entrada
  cout<<"Ingrese el precio normal del pasaje:";
  cin>>precio;
  cout<<"Ingrese la cantidad de pasajes a comprar:";
  cin>>cantpasaje;
  //proceso-algoritmo
  pasajeSem=precio+(precio*0.35);
  importetotal=cantpasaje*pasajeSem;
  cantchocolate=cantpasaje*3;
  //salida
  cout<<"El aumento del pasaje por semana santa es:"<<pasajeSem;
  cout<<"\n";
  cout<<"El importe a pagar es:"<<importetotal;
  cout<<"\n";
  cout<<"Cantidad de chocolates como obsequio es:"<<cantchocolate;
return 0;
  
}