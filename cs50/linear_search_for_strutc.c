#include <stdio.h>
#include <cs50.h>
#include <string.h>


typedef struct{

 string name;
 string number;
}
person;


int main(void)
{
 person caller[4];
  caller[0].name ="Emma";
 caller[0].number ="1348-763-497";
 caller[1].name ="mike";
 caller[1].number ="657-689-3008";
 caller[2].name ="mark";
 caller[2].number ="448-553-4797";
 caller[3].name ="max";
 caller[3].number ="178-263-407";

 for(int i = 0 ; i<4 ;i++){
  if (strcmp(caller[i].name, "mark") == 0){
   printf(" found %s \n",caller[i].number);
   return 0;
  }
 }
 printf("Not found \n");
 return 1;
}