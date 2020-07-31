#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
 int numbers[6] = {11,22,43,5,6};

 for(int i = 0 ; i<6 ;i++){
  if (numbers[i]==50){
   printf(" found \n");
   return 0;
  }
 }
 printf("Not found \n");
 return 1;
}