#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double ** create_matrix(int N);
double ** create_matrix_and_init(int N);
void free_matrix(double **matrix, int N);

#endif