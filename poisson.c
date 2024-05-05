#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double poisson(int k, double lambda) {
    return exp(-lambda) * pow(lambda, k) / tgamma(k +1);

}