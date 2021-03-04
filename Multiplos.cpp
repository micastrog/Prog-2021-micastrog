#include <iostream>

void print_even(int nmin, int nmax); //Declaro la nueva funcion

int main(void) {

int m = 1;
int n = 100;

std::cout << "m:" << m << "\n";
std::cout << "n:" << n << "\n";

print_even(m,n);

  return 0;
}

void print_even(int nmin, int nmax) {

int suma = 0;
for ( int ii = nmin ; ii<= nmax ;  ii= ii+1 ) {
if (ii%2 == 0) {

  std::cout << ii << "\n";
  suma = suma + ii;
}

}

std::cout <<"\n";
std::cout << suma<<"\n";
}