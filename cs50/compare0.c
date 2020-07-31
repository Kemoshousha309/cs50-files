#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two integers
    char *i = get_string("i: ");
    char *j = get_string("j: ");

    // Compare integers
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}