#include <stdio.h>

int main() {
    int a[] = {2, 6, 7, 9, 12, 14, 5, 7, 8, 6};
    int i;
    int sum = 0;
    int count = 0;
    for (i = 0; i < 10; i++)
	 {
        if (a[i] % 2 == 0) { 
            sum += a[i]; 
            count++; 
        }
    }

    if (count > 0) {
        float average = (float)sum / count; 
        printf("Sum of even numbers: %d\n", sum);
        printf("Average of even numbers: %.2f\n", average);
    } else {
        printf("No even numbers\n");
    }

    return 0;
}

