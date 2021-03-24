#include <iostream>

void fibo (int x, int y, int l, int suma);

int main(int argc, char **argv) {
 
 int a=1;
 int b=2;
 int limit=20;
 int sum;
 fibo (a,b,limit,sum);

  
  return 0;
}

void fibo (int x,int y,int l, int suma=0) {

while (x+y<l){
suma=x+y;
x=y;
y=suma;

std::cout << y<<"\n";
}
std::cout << "El resultado final es:" <<"\n"<< y <<"\n";
std::cout << "<3"<<"\n";
}


   
   
