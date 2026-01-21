#include <iostream>
#include <stdio.h>


int main(){
  int Z = 20;
  // scanf("%d", &Z);
  int Z2 = 0;
  int st = 0;
  int temp = 0;
  int r = 0;
  while(Z2 < Z){
    r=scanf("%d", &temp);
    if(r == -1){
      Z2 = Z;
    }
    else{
    st = st + temp;
    Z2++;
    }
  }
  printf("%d", st);
}