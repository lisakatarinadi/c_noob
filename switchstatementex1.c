// full example:
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  char *programName = argv[0];
  for(int i = 0; i < strlen(programName); i++){
    switch(programName[i]){
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        printf("Got a vowel: %c\n", programName[i]);
        break;
      default:
        printf("Got a consonant: %c\n", programName[i]);
    }
  }
  return 0;
}
