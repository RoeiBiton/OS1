#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxSubArraySumN2(int arr[], int n) {
    int max_sum = arr[0];

    for (int i = 0; i < n; i++) {
        int curr_sum = 0;
        for (int j = i; j < n; j++) {
            curr_sum += arr[j];
            if (curr_sum > max_sum) {
                max_sum = curr_sum;
            }
        }
    }

    return max_sum;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <random_seed> <array_size>\n", argv[0]);
        return 1;
    }

    int seed = atoi(argv[1]);
    int array_size = atoi(argv[2]);

    srand(seed);

    int arr[array_size];
    for (int i = 0; i < array_size; i++) {
        arr[i] = rand() % 100 - 25;
    }

    
    int max_sum = maxSubArraySumN2(arr, array_size);

    printf("Max subarray sum (O(n^2)): %d\n", max_sum);

    return 0;
}