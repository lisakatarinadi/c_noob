#include <stdio.h>

#define SIZE 4

int main(int argc, char *argv[]){

  int table[SIZE][SIZE] = {
    {0}, {0}, {0}, {0}
  };
  // old style for loop
  int k;
  for(k = 0; k < SIZE; k++){
    printf("iteration no.: %d\n", k);
  }
  // modern style for loop in a nested construction
  for(int i = 0; i < SIZE; i++){
    for(int j = 0; j < SIZE; j++){
      table[i][j] = i*j;
    }
  }
  puts("content of array table:");
  puts("{");
  printf("\t{ %d, %d, %d, %d}"\n", table[0][0]), table[0][1]), table[0][2]), table[0][3]);
  printf("\t{ %d, %d, %d, %d}"\n", table[1][0]), table[1][1]), table[1][2]), table[1][3]);
  printf("\t{ %d, %d, %d, %d}"\n", table[2][0]), table[2][1]), table[2][2]), table[2][3]);
  printf("\t{ %d, %d, %d, %d}"\n", table[3][0]), table[3][1]), table[3][2]), table[3][3]);
  puts("}");
  return 0;
}
