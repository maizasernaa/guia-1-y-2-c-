#include <iostream>
using namespace std;

int main() {
  //declaracion de variables
  int pu=90;
  int cantidad;
  float importepagar;
  float importedesc;
  float importetotal;
  //entrada
  cout<<"Ingrese la cantidad a comprar:";
  cin>>cantidad;
  //proceso - algoritmo
  importepagar=pu*cantidad;
  importedesc=importepagar*0.15;
  importetotal=importepagar-importedesc;
  //salida
  cout<<"El importe a pagar es:"<<importepagar;
  cout<<"\n";
  cout<<"El importe con descuento es:"<<importedesc;
  cout<<"\n";
  cout<<"El importe total es:"<<importetotal;

}