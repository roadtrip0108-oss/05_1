#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int answer=59;
int num;
int trial=0;

do
{
     printf("Input a number :");
     scanf("%d", &num);
    
     if (answer<num)
         printf("high!\n");
     else if (answer>num)
         printf("low!\n");
   
      trial++;
}

while (answer!=num);

printf("Congratulations! trial : %i\n", trial);

  system("PAUSE");	
  return 0;
}
