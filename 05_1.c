#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b;
  char op;
  int result;
  
  printf("Enter the calculation :");
  scanf("%i%c%i", &a, &op, &b);
  
  switch(op)
  {
            case '+' :
                 result = a+b;
                 break;
            case '-' :
                 result = a-b;
                 break;
            case '*' :
                 result = a*b;
                 break;
            case '/' :
                 if(b !=0)
                    result =a/b;
                 else {
                      printf("Error : division by zero!\n");
                      return 1;
                 }
                      break;
            case '%' :
                 if(b!=0)
                   result=a%b;
                 else {
                      printf("Error : division by zero!\n");
                      return 1;
                 }
                 break;
            
            default : 
                    printf("Error : invalid operator '%c'\n", op);
                    return 1;
   }          
  
  printf("=%i", result);
  
  system("PAUSE");	
  return 0;
}
