#include <cs50.h>
#include <stdio.h>


int main() {
    int h = 0;
    do
    {
        h = get_int("Hight: ");
    }
    while (h < 1 || h > 8);


    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= h - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("#");
        }
        printf("  ");
        for (int j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
