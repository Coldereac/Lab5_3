#define SIZE 10
#include <stdio.h>
#include <string.h>

int main()
{
    char flower[SIZE];
    puts ("What is your favorite flower?") ;
    fgets (flower, SIZE, stdin); //особливість fgets(), яка додає в кінці ‘\n’
    int n = strlen(flower);
    flower[n-1]= '\0';
    const char add[] = ", great choice!";
    if (SIZE - strlen(flower) >= strlen(add))
        strcat(flower, add);
    else
        puts("Not enough space");
    puts (flower);
    return 0;
}
