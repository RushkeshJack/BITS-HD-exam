#include<stdio.h>


typedef struct car{
 char *driver;
 int number;
}farrari,mercedes;

int main(){

  farrari car1,car2;
  mercedes car3,car4;
  car1.driver = "charles lecler";
  car1.number = 12;
  car2.driver = "carlos sains";
  car2.number = 30;
  car3.driver = "gorgeo russle ";
  car3.number = 89;
  car4.driver = "lewis hamlton";
  car4.number = 50;

  printf("%s",car1.driver);
  printf(" %d\n",car1.number);

  printf("%s",car2.driver);
  printf(" %d\n",car2.number);

  printf("%s",car3.driver);
  printf(" %d\n",car3.number);

  printf("%s",car4.driver);
  printf(" %d\n",car4.number);

  return 0;

}

