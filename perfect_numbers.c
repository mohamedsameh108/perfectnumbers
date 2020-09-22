#include <stdio.h>
#include <stdlib.h>

int menu;
int main()
{
    printf("Press 1 to check a number is perfect\nPress 2 to check perfect numbers in range\nPress 3 to exit\n");
    scanf("%d", &menu);
    if (menu == 1)
    {
        single();
    }
    else if (menu == 2)
    {
        range();
    }
    else if (menu == 3)
    {
        exit(0);
    }

    else
    {
        printf("I didn't understand You\n");
        main();
    }
    return 0;
}
int single()
{
    int number, re, sum = 0, i;

    printf("Enter a Number\n");
    scanf("%d", &number);
    for (i = 1; i <= (number - 1); i++)
    {
        re = number % i;
        if (re == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
    {
        printf("%d is perfect number\n", number);
    }
    else
    {
        printf("%d is not a perfect number\n", number);
    }
    main();
    return 0;
}
int range()
{
    int re, sum, i, z, x;

    printf("Enter a Start Number\n");
    scanf("%d", &x);
    printf("Enter a Last Number\n");
    scanf("%d", &z);
    for (x; x <= z; x++)
    {
        sum = 0;
        for (i = 1; i <= (x - 1); i++)
        {
            re = x % i;
            if (re == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == x)
        {
            printf("%d is perfect number\n", x);
        }
        else
        {
            continue;
        }
    }
    main();
    return 0;
}
