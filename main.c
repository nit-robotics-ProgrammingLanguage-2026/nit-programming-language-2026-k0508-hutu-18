#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
   if (n < 0) {
        printf("Error\n");
    }
    else if (n == 0) {
        printf("No\n");
    }
    else {
        int check = 0;

        if (n % 3 == 0) {
            printf("Up");
            check = 1;
        }

        if (n % 5 == 0) {
            printf("Go");
            check = 1;
        }

        if (n % 7 == 0) {
            printf("!!");
            check = 1;
        }

        if (check == 0) {
            printf("No");
        }

        printf("\n");
    } /* TODO: 課題0508 */
    return 0;
}
