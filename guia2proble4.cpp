#include <iostream>
using namespace std;
int main() {
  float pU;
  int cantunid;
  float compra;
  float desc1;
  float desc2;
  float pagar1;
  float pagarto;
  //entrada
  cout<<"Ingresar el precio unitario:";
  cin>>pU;
  cout<<"Ingresar la cantidad de unidades adquiridas:";
  cin>>cantunid;
  //proceso - algoritmo
  compra= pU*cantunid;
  desc1=compra*0.10;
  pagar1=compra-desc1;
  desc2= pagar1*0.10;
  pagarto=pagar1-desc2;

  //salida
  cout<<"El importe de compra es:"<<compra;
  cout<<"\n";
  cout<<"El descuento total es:"<<desc1+desc2;
  cout<<"\n";
  cout<<"El total a pagar es:"<<pagarto;
  return 0;
  

}