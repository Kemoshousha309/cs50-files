#include <stdio.h>
#include <cs50.h>
#include <string.h>

int draw(int h);

int main(void)
{
 int h = get_int("Hight: ");
 draw(h);
}

int draw(int h){
 if (h==0){
  return 0;
 }
 draw(h-1);
 for(int i=0; i<h;i++){
  printf("#");
 }
 printf("\n");
 return 1;
}

