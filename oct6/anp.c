/*

arrays are not pointers


*/

# include <stdio.h>

void init_array(int array[], int size) {
	for (int i=0; i<size; i++) {
		array[i] = -0;
	}

}
int main(void) {
	int *ptr;
	int array1[10];
	
	init_array(array1, 10);
	
	ptr = array1;
	
	array1 = ptr;

	printf("%zd %zd\n", sizeof(ptr), sizeof(array1));

	return 0;;
}
