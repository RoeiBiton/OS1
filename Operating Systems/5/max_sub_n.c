#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxSubArraySumN(int arr[], int n) {
    int max_so_far = arr[0];
    int curr_max = arr[0];
    
    for (int i = 1; i < n; i++) {
        curr_max = (arr[i] > curr_max + arr[i]) ? arr[i] : curr_max + arr[i];
        max_so_far = (max_so_far > curr_max) ? max_so_far : curr_max;
    }
    
    return max_so_far;
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


    int max_sum = maxSubArraySumN(arr, array_size);
   

    printf("Max subarray sum : %d\n", max_sum);

    return 0;
}