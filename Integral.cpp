#include<iostream>
#include<cmath>

const long double e=2.71828182846;
const long double a=0;
const long double b=100;
const long double n=100000000;
const long double h=(b-a)/n;

long double Integral(long double inte);
long double part1(long double limit1);
long double part2(long double limit2);
long double funcion(long double x);

int main(){

  long double newinte;

  std::cout<<Integral(newinte)<<"\n";

  return 0;
}

long double Integral(long double inte){
  
  long double limit11;
  long double limit22;
  inte=(h/3)*(funcion(a)+funcion(b)+2*part1(limit11)+4*part2(limit22));
  
  return inte;
}

long double part1(long double limit1){
  limit1=a;
  long double sum1=0;
  long double n1=0;

  while(n1<=((n/2)-1)){
    limit1=limit1 + 2*h;
    sum1=sum1+funcion(limit1);
    n1=n1+1;
  }

  return sum1;
}

long double part2(long double limit2){
  limit2=a+h;
  long double sum2=0;
  long double n2=0;

  while(n2<=(n/2)){
    limit2=limit2 + 2*h;
    sum2=sum2+funcion(limit2);
    n2=n2+1;
  }

  return sum2;
}

long double funcion(long double x){

  long double y=pow(e,-(x*x));

  return y;
}
