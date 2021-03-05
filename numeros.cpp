#include <iostream>
#include <cmath>

void print_even(float nmin, float nmax);

int main (int arg, char **argv) {

float m = 10;
float n = 1500;

print_even(m,n);


return 0;
}

void print_even(float nmin, float nmax) {

float suma=0;
for (float ii = nmin; ii <= nmax; ii=ii+1) {

float z= (1/pow(ii, 2));
suma=suma+z;

}
std::cout << suma << "\n";
}