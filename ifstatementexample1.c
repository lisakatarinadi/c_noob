// full example:
#include <stdio.h>

int main(int argc, char *argv[]){
  if(argc == 1){
    printf("You called the program without arguments\n");
  }
    else if(argc > 1 && argc < 4){
      for(int i = 0; i < argc; i++){
        printf("argument[%d]: %s\n", i, argv[i]);
      }
    }else{
      printf("You called he program with %d arguments too much", argc -3);
    }
    return 0;
}
