#include <signal.h>
#include <memory.h>
#include <string.h>
#include <stdio.h>

#define MIN_ELEM 1
#define MAX_ELEM 3
#define NUM_ELEMS MAX_ELEM - MIN_ELEM + 1

int getElement()
{
    char input[100];
    int result;
    int haveResult = 0; /* false */

    while (! haveResult)
    {
        printf("Input one number: ");
        fgets((char *)&input, 100, stdin); // get a string from user
        if ( 1 == sscanf(input, "%d", & result) ) // parse string as decimal integer
        {
            haveResult = 1; /* true */
        }
        else
        {
            printf("Invalid number, please try again.\n");
        }
    }
    return result;
}


int main(char** argv, int argc)
{
    int n = getElement();

    if ( (n >= 1) * (n < 10) + (n == 0) )
    {
        printf("A\n");
    }
    else
    {
        printf("B\n");
    }

    return 0;
}
