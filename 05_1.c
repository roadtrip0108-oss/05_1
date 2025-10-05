#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int x;
  
   printf("Input an integer :");
   scanf("%d", &x);
   
   if (x>0)
       printf("양 수 입 니 다. \n");
       
   else if (x<0)
        printf("음 수 입 니 다. \n");
   else 
        printf("0 입 니 다. \n"); 
    

  
  system("PAUSE");	
  return 0;
}
