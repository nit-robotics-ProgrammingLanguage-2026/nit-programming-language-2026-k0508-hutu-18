#include <stdio.h>

int main(void)
{
    int n;
    int matched = 0;

    scanf("%d", &n);

    if (n < 0) {
        printf("Error\n");
        return 0;
    }

    if (n == 0) {
        printf("No\n");
        return 0;
    }

    if (n % 3 == 0) {
        printf("Up");
        matched = 1;
    }

    if (n % 5 == 0) {
        printf("Go");
        matched = 1;
    }

    if (n % 7 == 0) {
        printf("!!");
        matched = 1;
    }

    if (matched == 0) {
        printf("No");
    }

    printf("\n");

    return 0;
}