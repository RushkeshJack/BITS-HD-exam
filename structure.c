#include<stdio.h>

struct car{
 char *engine;
};

int main(){

  struct car car1,car2;
  car1.engine = "DDis 190 engine";
  car2.engine = "V8 naturally aspirated engine";

  printf("%s\n",car1.engine);
  printf("%s",car2.engine);

  return 0;

}
