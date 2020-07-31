#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{

    char *s = get_string("i: ");
    int n = strlen(s);
    char *j = malloc(n+1);

    for (int i=0;i<n;i++)
    {
        j[i]=s[i];
    };

    j[0] = toupper(j[0]);

    printf("%c \n", s[0]);
    printf("%c \n", j[0]);

}