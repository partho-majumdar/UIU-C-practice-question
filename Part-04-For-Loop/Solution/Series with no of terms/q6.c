#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    for (int i = 1, j = 5; i <= input_value; i++, j *= 2)
    {
        printf("%d ", j);
    }
}