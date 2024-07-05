#include <stdio.h>
void main()
{
    int score;
    printf("Please enter score:");
    scanf("%d", &score);
    if (score >= 80 && score<= 100)
        printf("Gradde A:%d/n", score);
    else if (score >= 70 && score <= 79)
        printf("Gradde B:%d/n", score);
    else if (score >= 60 && score <= 69)
        printf("Gradde c:%d/n", score);
    else if (score >= 50 && score <= 59)
        printf("Gradde D:%d/n", score);
    else if (score >= 0 && score <= 49)
        printf("Gradde F:%d/n", score);
    else
        printf("ERROR/n");
    printf("Finish");
}
