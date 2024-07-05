#include <stdio.h>
void main()
{
    char grade;
    printf("Please enter Grade:");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':git config --global user.name "patipan"
        printf("80-100 Grade %c\n", grade);
        break;
    case 'B':
        printf("70-79 Grade %c\n", grade);
        break;
    case 'C':
        printf("60-69 Grade %c\n", grade);
        break;
    case 'D':
        printf("50-59 Grade %c\n", grade);
        break;
    default:
        printf("0-49 Grade %c\n", grade);
    }
}