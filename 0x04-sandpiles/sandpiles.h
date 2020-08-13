#ifndef SAND
#define SAND
#include <stdlib.h>
#include <stdio.h>

void print_grid_sum(int grid1[3][3], int grid2[3][3]);
void print_grid(int grid[3][3]);

/* My functions */
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
int verify_zeros(int grid[3][3]);
int checker_estable(int grid1[3][3]);
void sum_grid(int grid1[3][3], int grid2[3][3]);
void stabilizator(int grid1[3][3], int grid2[3][3]);

#endif /* SAND */
