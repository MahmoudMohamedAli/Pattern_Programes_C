#include <stdio.h>
void Print_Half_Pattern(char c, int rows)
{
    printf("Right_Half Pattern:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2 * (rows - i) - 1; j++) //
        {
            printf(" ");
        }
        for (int j = rows - 1 - i; j < rows; j++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
}

int main()
{
    int rows = 0;
    char c;
    int sw_input = 0;

    printf("Enter Numbers Rows: ");
    scanf("%d", &rows);

    printf("Enter Symbol: ");
    scanf(" %c", &c);
    Print_Half_Pattern(c, rows);
}