#include <stdio.h>
#define PI 3.14
int main()
{
   printf("Current time: %s\n",__TIME__);
   printf("Current date: %s\n",__DATE__);
   printf("Current file name: %s\n",__FILE__);
   printf("Current line(negleting the #include): %d\n",__LINE__);
   printf("Follow ANSI standard or not(non zero for following): %d\n",__STDC__);
}


