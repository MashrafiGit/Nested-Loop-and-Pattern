#include <stdio.h>
int main()
{
    int n, star = 1;
    scanf("%d", &n);

    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int a = space; a >= 1; a--)
        {
            printf(" ");
        }
        space--;


        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star = star + 2;
        printf("\n");
        
    }

    return 0;
}