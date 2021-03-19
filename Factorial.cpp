#include <iostream>

void loop(int num, int fact);


int main (int arg, char **argv){
 int facto=std::atof (argv[1]);
 int numb=facto;

 loop(numb,facto);

  return 0;
}

void loop(int num, int fact){
  for(int newnum=num-1; newnum>=1; newnum=newnum-1 ){

    fact=fact*newnum;
    



  }

std::cout<<"El resultado es "<<fact<<"\n";


}
