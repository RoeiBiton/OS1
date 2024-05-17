//
// Created by roeibiton on 5/5/24.
//

#include <stdio.h>
#include <dlfcn.h>
#include "poisson.h"

    int main() {
        // Load the dynamic library
        void *lib_handle = dlopen("./libpoisson.so", RTLD_LAZY);
        if (!lib_handle) {
            fprintf(stderr, "Error: %s\n", dlerror());
            return 1;
        }

        // Load the function from the library
        double (*poisson)(int, double) = dlsym(lib_handle, "poisson");
        if (!poisson) {
            fprintf(stderr, "Error: %s\n", dlerror());
            dlclose(lib_handle);
            return 1;
        }

        // Values to calculate Poisson distribution for
        int k_values[] = {1, 10, 2, 3, 3};
        double lambda_values[] = {2, 2, 2, 3, 100};
        int num_values = sizeof(k_values) / sizeof(k_values[0]);

        // Calculate and print Poisson distribution for each value
        for (int i = 0; i < num_values; ++i) {
            double result = poisson(k_values[i], lambda_values[i]);
            printf("Poisson distribution for k=%d, lambda=%.2f: %.6f\n", k_values[i], lambda_values[i], result);
        }

        // Close the dynamic library
        dlclose(lib_handle);

        return 0;
    }
