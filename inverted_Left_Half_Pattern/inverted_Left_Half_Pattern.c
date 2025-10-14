#include <stdio.h>

void Print_Inverted_Left_Half_Pattern(char c, int rows)
{
    printf("Inverted_Left_Half Pattern:\n");
    // Outer loop for printing all rows
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < rows - i; k++)
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