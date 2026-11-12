//use openMP, create a team of threads
//print before, during and after

#include <omp.h>
#include <stdio.h>

void do_it() {

	printf("before\n");

	//parallel part
	#pragma omp parallel
	{

		printf("during\n");
	
	}
	printf("after\n");

	

}

int main(void) {
	do_it();
	return 0;

}
