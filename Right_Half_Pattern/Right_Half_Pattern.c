#include <stdio.h>
void Print_Half_Pattern(char c, int rows)
{
    printf("Right_Half Pattern:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

void Print_Half_Pattern_inc(int rows)
{
    printf("Right_Half Pattern:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", j + 1);
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

    printf("Incremental or pattern: 0 =pattern 1 = incremental");
    scanf("%d", &sw_input);
    if (sw_input)
    {
        Print_Half_Pattern_inc(rows);
    }
    else
    {
        printf("Enter Symbol: ");
        scanf(" %c", &c);
        Print_Half_Pattern(c, rows);
    }
}