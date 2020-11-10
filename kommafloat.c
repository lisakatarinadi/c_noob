#include <stdio.h>

int main(float argc, char *argv[]){
  float a, b;
  a = 10 * 0.1;
  b = (10 / 100) * 10;double c, d;
  c = 0.0;
  d = 10 * 0.1;
  for(int i = 0; i < 10; i++){
  c += 0.1;
  }
  if(a != b){
    printf("10 * 0.1 is not equal to (10 / 100) * 10\n");
    }
  if(c != d){
    printf("10 * 0.1 is not equal to ten times adding 0.1\n");
    }
    return 0;
}
