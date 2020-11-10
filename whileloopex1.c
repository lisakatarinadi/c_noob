// full example
#include <stdio.h>

#define MAX_CONNECTIONS 5

int getConnection(void);

int main(int argc, char *argv[]){
  int connectionCounter = 0;
  while(connectionCounter < MAX_CONNECTIONS){
    printf("... trying to establish connection no. %d\n", connectionCounter +1);
    connectionCounter += getConnection();
  }
  return 0;
}

int getConnection(void){
  return 1;
}
