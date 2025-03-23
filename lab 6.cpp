#include <stdio.h>

int main() {
    int i, j;
    int n, num = 1;

    printf("Enter the range (upto how many lines?): ");
    scanf("%d", &n);

    printf("Floyd's Triangle:\n");

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}


