#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,factorial = 1, f;

    printf("\nEnter the number to calculate the factorial:\n");
    scanf("%d", &num);

    for (f = 1; f <= num ; f++)
    
        factorial = factorial*f; 

        printf("\nThe ans is: %d", factorial);
    
    
    return 0;
}
