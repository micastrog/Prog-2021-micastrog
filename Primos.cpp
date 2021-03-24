#include<iostream>

void loop(int num, int exit, int div);

int main(void){

  int newnum=1000;
  int newexit;
  int newdiv;

  loop(newnum,newexit,newdiv);


}

void loop(int num, int exit, int div){

  for(int ii = num ; ii>1 ;ii=ii-1){

    exit=0;
    div=2;
    while(exit!=1){
      
      if(ii%div==0){exit=1;}
      else{ div=div +1;}

    }
    
    if(div==ii){ std::cout<< ii << "\n"; }

  }

}


