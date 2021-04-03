#include<iostream>
#include<cmath>
#include<iomanip>

const long double pi=3.1415926535897932384626433832795028841971693993;
const long double e=2.71828182846;
const long double a=0;
const long double b=pi;
const long double n=10000000;
const long double h=(b-a)/n;

long double Integral(long double inte);
long double part1(long double limit1);
long double part2(long double limit2);
long double funcion(long double x);

int main(){

  long double newinte;
  long double Result=Integral(newinte);
  std::cout<< std::setprecision(6) << Result <<"\n";


  return 0;
}

long double Integral(long double inte){
  
  long double limit11;
  long double limit22;
  inte=(h/3)*(funcion(a)+funcion(b)+2*part1(limit11)+4*part2(limit22));
  
  return inte;
}

long double part1(long double limit1){
  limit1=a+2*h;
  long double sum1=0;
  long double n1=1;

  while(n1<=((n/2)-1)){
    n1=n1+1;
    sum1=sum1+funcion(limit1);
    limit1=limit1 + 2*h;
  }

  return sum1;
}

long double part2(long double limit2){
  limit2=a+h;
  long double sum2=0;
  long double n2=1;

  while(n2<=(n/2)){
    n2=n2+1;
    sum2=sum2+funcion(limit2);
    limit2=limit2 + 2*h;
  }

  return sum2;
}

long double funcion(long double x){

  long double y=sin(x);

  return y;
}
