// full example
#include <stdio.h>
#include <string.h>

#define FALSE 0
#define TRUE !FALSE
#define MAX_CONNECTIONS 5

int getConnection(void){
  return 1;
}

int main(int argc, char *argv[]){
  int connectionCounter = 0;
  while(TRUE){
    printf("... trying to establish connection no. %d\n", connectionCounter +1);
    connectionCounter += getConnection();
    if(connectionCounter >= MAX_CONNECTIONS){
      printf("reached max connections, quit now!\n");
      break;
    }
  }
  return 0;
}
