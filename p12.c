#include <stdio.h>
void main()
{
    int i, a[4], j, t, num = 0, d, num1, r, rev = 0, num2, c = 0;
    printf("Enter any array of length 4 \n");
    // To input the array
    for (i = 0; i < 4; i++)
    {
        printf("Enter the element ");
        scanf("%d", &a[i]);
    }
    while (d != 6174)
    {
        // To sort the array
        rev = 0;
        num = 0;
        for (i = 0; i < 4; i++)
        {
            for (j = i + 1; j < 4; j++)
            {
                if (a[i] < a[j])
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        // For converting array into number
        for (i = 0; i < 4; i++)
        {
            num = 10 * num + a[i];
        }
        num1 = num;
        while (num > 0)
        {
            r = num % 10;
            rev = 10 * rev + r;
            num = num / 10;
        }

        num2 = rev;
        // For difference
        d = num1 - num2;
        // For converting difference into array
        for (i = 0; i < 4; i++)
        {
            a[i] = d % 10;
            d = d / 10;
        }
        d = num1 - num2;

        // For counting
        c++;
    }
    printf("Total count %d", c);
}
