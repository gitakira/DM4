#include <stdio.h>
#include <stdlib.h>

int main(){

  int i, a, b=0, c=0;

  printf("Tossing a coin...\n");

  for(i=0;i<3;i++){
    a=rand();
    if(a%2==0){
      printf("Rand %d: Head\n",i+1);
      b++;
    }
    if(a%2!=0){
      printf("Rand %d: Tail\n",i+1);
      c++;
    }
  }
    printf("Heads: %d, Tails: %d\n",b, c);
  
  return 0;
}
