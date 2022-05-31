#include <stdio.h>
#define rank 4
int main()
{
   #if rank>=1 && rank<=4
      printf("Your noob in CSGO");
   #elif rank>=5 && rank<=7
      printf("Then you at the monesy level");
   #else
      printf("You are god like NiKo");
   #endif //rank
}


