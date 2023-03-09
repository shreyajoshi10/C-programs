#include <stdio.h>
void main()
{
    int i, n, m;
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("The layout is as followed \n");
    int firstChance = 1;
    for (i = 1; i <= 9; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if ((a[j][k] != 0 && a[j][k] != 1) || firstChance)
                {
                    printf("    %d  ", a[j][k]);
                }
                else if (a[j][k] == 0)
                {
                    printf("    X   ");
                }
                else
                {
                    if (!firstChance)
                        printf("    O   ");
                }
            }
            printf("\n");
        }
        firstChance = 0;
        if (i % 2 != 0)
        {
            printf("Player 1 kindly choose any 1 number from 1 to 9 without repitition");
            scanf("%d", &n);
            if (n == 1)
                a[0][0] = 0;
            else if (n == 2)
                a[0][1] = 0;
            else if (n == 3)
                a[0][2] = 0;
            else if (n == 4)
                a[1][0] = 0;
            else if (n == 5)
                a[1][1] = 0;
            else if (n == 6)
                a[1][2] = 0;
            else if (n == 7)
                a[2][0] = 0;
            else if (n == 8)
                a[2][1] = 0;
            else if (n == 9)
                a[2][2] = 0;
        }
        else
        {
            printf("Player 2 kindly choose any 1 number from 1 to 9 without repitition");
            scanf("%d", &n);
            if (n == 1)
                a[0][0] = 1;
            else if (n == 2)
                a[0][1] = 1;
            else if (n == 3)
                a[0][2] = 1;
            else if (n == 4)
                a[1][0] = 1;
            else if (n == 5)
                a[1][1] = 1;
            else if (n == 6)
                a[1][2] = 1;
            else if (n == 7)
                a[2][0] = 1;
            else if (n == 8)
                a[2][1] = 1;
            else if (n == 9)
                a[2][2] = 1;
        }
        if (a[0][0] == 0 && a[0][1] == 0 && a[0][2] == 0)
        {
            printf("Player 1 wins");
            break;
        }
        else if (a[1][0] == 0 && a[1][1] == 0 && a[1][2] == 0)
        {
            printf("Player 1 wins");
            break;
        }
        else if (a[2][0] == 0 && a[2][1] == 0 && a[2][2] == 0)
        {
            printf("Player 1 wins");
            break;
        }
        else if (a[0][0] == 0 && a[1][0] == 0 && a[2][0] == 0)
        {
            printf("Player 1 wins");
            break;
        }
        else if (a[0][1] == 0 && a[1][1] == 0 && a[2][1] == 0)
        {
            printf("Player 1 wins");
            break;
        }
        else if (a[0][2] == 0 && a[1][2] == 0 && a[2][2] == 0)
        {
            printf("Player 1 wins");
            break;
        }
        else if (a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0)
        {
            printf("Player 1 wins");
            break;
        }
        else if (a[0][2] == 0 && a[1][1] == 0 && a[2][0] == 0)
        {
            printf("Player 1 wins");
            break;
        }
        else if (a[0][0] == 1 && a[0][1] == 1 && a[0][2] == 1)
        {
            printf("Player 2 wins");
            break;
        }
        else if (a[1][0] == 1 && a[1][1] == 1 && a[1][2] == 1)
        {
            printf("Player 2 wins");
            break;
        }
        else if (a[2][0] == 1 && a[2][1] == 1 && a[2][2] == 1)
        {
            printf("Player 2 wins");
            break;
        }
        else if (a[0][0] == 1 && a[1][0] == 1 && a[2][0] == 1)
        {
            printf("Player 2 wins");
            break;
        }
        else if (a[0][1] == 1 && a[1][1] == 1 && a[2][1] == 1)
        {
            printf("Player 2 wins");
            break;
        }
        else if (a[0][2] == 1 && a[1][2] == 1 && a[2][2] == 1)
        {
            printf("Player 2 wins");
            break;
        }
        else if (a[0][0] == 1 && a[1][1] == 1 && a[2][2] == 1)
        {
            printf("Player 2 wins");
            break;
        }
        else if (a[0][2] == 1 && a[1][1] == 1 && a[2][0] == 1)
        {
            printf("Player 2 wins");
            break;
        }
        else if (a[0][0] == 0 && a[0][1] == 0 && a[0][2] == 0 && a[1][0] == 0 && a[1][1] == 0 && a[1][2] == 0 && a[2][0] == 0 && a[2][1] == 0 && a[2][2] == 0)
        {
            printf("Match Draw");
            break;
        }
        else if (a[0][0] == 1 && a[0][1] == 1 && a[0][2] == 1 && a[1][0] == 1 && a[1][1] == 1 && a[1][2] == 1 && a[2][0] == 1 && a[2][1] == 1 && a[2][2] == 1)
        {
            printf("Match Draw");
            break;
        }
        else
        {
            printf("Match is still going on\n");
        }
    }
}
