#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
 string s =get_string("Enter lowercase word:");
 printf("Uppercase: \n");
 for(int i =0;i<strlen(s);i++){
  char n=s[i]-32;
  printf("%c",n);

 }
 printf("\n");

}
