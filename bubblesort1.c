#include <stdio.h>

int main() {
    int i, j, temp;
    int didSwap; // Initialize didSwap to 0

    int nums[10] = {23, 56, 45, 89, 45, 21, 11, 7, 9, 89};

    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }

    for (i = 0; i < 10; i++) {
        didSwap = 0; // Reset didSwap to 0 at the start of each pass
        for (j = 0; j < 10 - i - 1; j++) {
            if (nums[j] > nums[j + 1]) { // Change '<' to '>' for ascending order
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                didSwap = 1;
            }
        }

        if (didSwap == 0) {
            break;
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
