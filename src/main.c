#include <stdio.h>

int centuryFromYear(int year);

int main() {
//printf("Hello World!\n");
//printf("%d\n", 1705 / 100);
printf("%d", centuryFromYear(1705));
    return 0;
}

int centuryFromYear(int year) 
{
  int century = year / 100; // year = 1705, century = 17
  if(year % 100 != 0) {
    return century++;
  } else {
    return century;
  }
}