#include<iostream>
#include<cmath>

double Derivada(long double x, long double h, long double derv);
long double pi=3.14159265;

int main (void){

  long double newx=pi;
  long double newh=0.1;
  long double newderv;
  long double real=cos(newx);

  std::cout<< "Resultado computacional: " <<Derivada(newx, newh, newderv) << "\n";
  std::cout<< "Resultado real: " << real <<"\n";

  return 0;
}

double Derivada(long double x, long double h, long double derv){
  for(long double ii=h; ii>0.0000001; ii=ii/10 ){

    long double yy=sin(x+ii/2);
    long double y=sin(x-ii/2);
    long double derv= (yy-y)/ii;

    std::cout<<derv<<"\n";
  }

  return derv;
}