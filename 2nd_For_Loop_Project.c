#include <stdio.h>

int main() {
    int total_sum = 0;

    for (int i = 2; i <= 20; i+= 2) {
        total_sum += i;
    }

    printf("The sum is: %d\n", total_sum); // Output: The sum is: 110
    return 0;
}
