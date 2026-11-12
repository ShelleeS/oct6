/*
 * use openMP, create a team of threads
 * initialize an array in parallel
 *
 */

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

void init_array(int size, int *array) 
	//parallel part
	#pragma omp parallel
	{
	for(int i=0; i<size; i++) {
		array[i] = i+1;
	
	
	}
	printf("after\n");

	return;

	}


int main(void) {
	int N = 200000;
	int *arr = (int *)malloc(N * sizeof(int));
	init array(N, arr);
	return 0;

}
