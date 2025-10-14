#include <stdio.h>

void Print_Inverted_Right_Half_Pattern(char c, int rows)
{
    printf("Right_Half Pattern:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
            printf("%c ", c);
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
    Print_Inverted_Right_Half_Pattern(c, rows);
}