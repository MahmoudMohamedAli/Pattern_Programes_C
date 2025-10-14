#include <stdio.h>

void Print_Inverted_Left_Half_Pattern(char c, int rows)
{
    printf("Inverted_Full Pyramids Pattern:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i * 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (rows * 2) - (i * 2) - 1; j++)
        {
            printf("* ");
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
    Print_Inverted_Left_Half_Pattern(c, rows);
}