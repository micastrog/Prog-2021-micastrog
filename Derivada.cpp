#include<iostream>
#include<cmath>

long double Part(double x);
long double Derivada(long double derv, long double h1, long double va1);
long double Richardson(long double truederv, long double derv1, long double derv2,long double va1);

const long double h=0.01;

int main (int arg, char *argv[]){

  auto Va=std::atof(argv[1]);
  long double real=cos(Va);
  long double newderv;
  long double newtruederv;
  long double newderv1;
  long double newderv2;
  std::cout<< "Resultado sin Richardson" << Derivada(newderv,h,Va) <<"\n";
  std::cout<< "Resultado computacional: "<< Richardson(newtruederv,newderv1,newderv2,Va) << "\n";
  std::cout<< "Resultado real: " << real <<"\n";

  return 0;
}

long double Richardson(long double truederv, long double derv1, long double derv2, long double va1){
  truederv=(4/3)*(Derivada(derv1,h/2,va1))-(1/3)*(Derivada(derv2,h,va1));
  return truederv;
}

long double Derivada(long double derv, long double h1, long double va1){
  
  derv=(Part(va1+(h1/2))-Part(va1-(h1/2)))/h1;
  
  return derv;
}

long double Part(double x){
  long double y=sin(x);
  return y;
}



