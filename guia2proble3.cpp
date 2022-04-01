#include <iostream>
using namespace std;
int main() {
  //declaracion de variables
  float precio;
  int cantdocena;
  float transporte;
  float importe;
  float descuento;
  float pagar;
  //entrada
  cout<<"Ingresar el precio por docenas:";
  cin>>precio;
  cout<<"Ingresar la cantidad de docenas adquiridas:";
  cin>>cantdocena;
  cout<<"Ingresar el costo de transporte:";
  cin>>transporte;
  //proceso - algoritmo
  importe = precio*cantdocena;
  descuento= importe*0.12;
  pagar=(importe-descuento)+transporte;
  //salida
  cout<<"El importe de compra es:"<<importe;
  cout<<"\n";
  cout<<"El importe del descuento es:"<<descuento;
  cout<<"\n";
  cout<<"El importe a pagar es:"<<pagar;
  return 0;
}