#include <stdio.h>

int main(){
  int age = 10;
  int height = 72;
  float johnHeight = 71.7778;

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);
  printf("\vJohn is %f inches.\n", johnHeight); 
  printf("But you can round it to %.2f inches.\n", johnHeight);
  printf("Or you can trunc it to %g inches.\n", johnHeight);

  return 0;
}
