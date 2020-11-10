#include <stdio.h>

enum DAY { SUN, MON, TUE, WED, THU, FRI, SAT };
enum MONTH { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
enum BOOL { FALSE, TRUE};

int maint(int argc, char *argv[]){
  enum DAY aDay = SUN;
  enum MONTH aMonth = JAN;
  printf("First DAY of the week: %d\n", aDay);
  printf("Month January: %d\n", aMonth);
  if(TRUE){
    printf("Not %d ist TRUE\n", FALSE);
  }
  return 0;
}
