#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the number is perfectly divisible by 2
    if(number % 2 == 0)
        printf("%d IS EVEN.", number);
    else
        printf("%d  IS ODD.", number);

    return 0;
}
