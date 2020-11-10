#include <stdio.h>

struct PERSON{
  char *firstName;
  char *familyName;
  int dayOfBirth;
  int monthOfBirth;
  int yearOfBirth;
}aPerson;

int main(int argc, char *argv[]){
  aPerson.firstName = "Frank";
  aPerson.familyName = "Capra";
  aPerson.dayOfBirth = 23;
  aPerson.monthOfBirth = 11;
  aPerson.yearOfBirth = 1985;
  printf("Name:           %s\n", aPerson.firstName);
  printf("Family Name:    %s\n", aPerson.familyName);
  printf("Date of Birth:  %d.%d.%d\n",
            aPerson.dayOfBirth
            aPerson.monthOfBirth
            aPerson.yearOfBirth
            );
  return 0;
}
