#include <stdio.h>
#include <cs50.h>

const int N =3;

int main(void)
{
    int scores[N];
     scores[0] = 73;
     scores[1] = 33;
     scores[2] = 74;

    printf("average = %i \n",(scores[0]+scores[1]+scores[2])/N);
}