#include<stdio.h>

union abc{
  int a;
  float b;
  long c;
  double d;
  char e;
}var;

int main(){
  var.b = 1000.021;
  printf("a = %d\n",var.a);
  printf("b = %f\n",var.b);
  printf("c = %ld\n",var.c);
  printf("d = %lf\n",var.d);
  printf("e = %c\n",var.e);
}
