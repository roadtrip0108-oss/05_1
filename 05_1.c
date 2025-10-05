#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int x;
  
  printf("Input an integer :");
  scanf("%d", &x);
  
  if(x>0)
     printf("absolute is %i.\n", x);
  else
     printf("absolute is %i.\n", -x);
     
  system("PAUSE");	
  return 0;
}
