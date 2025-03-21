#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C"{
#endif

double **create_matrix(int N);
double **create_matrix_and_init(int N);
void free_matrix(double **matrix, int N);
void salvar_matriz(double **matriz, int linhas, int colunas, const char *nome_arquivo);
double *create_flatten_matrix(int N);
double *create_flatten_matrix_and_init(int N);
void free_flatten_matrix(double *matrix);
double **create_submatrix(int rows, int cols);
void free_submatrix(double **mat, int rows);
double get_elapsed_time(struct timeval start, struct timeval end);

#ifdef __cplusplus
}
#endif

#endif
