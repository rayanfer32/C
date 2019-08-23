#include <stdio.h>

int* rotLeft(int a_count, int* a, int d, int* result_count) {
    *result_count = a_count;
    static int rotated_arr[100];
    for(int i=0;i<a_count;i++){
        rotated_arr[i] =(i+d<a_count)?a[i+d]:a[i+d-a_count];
    }
    return rotated_arr;
}

int main(void) {
	int result_count = 0;
	int arr[5] = {1,2,3,4,5};
	int* res_arr=0;
	res_arr = rotLeft(5,arr,2,&result_count);
  for(int i=0;i<5;i++){
		printf("%d ",*(res_arr+i));
	}
}
