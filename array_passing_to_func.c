#include <stdio.h>


int matrix_coder(int* ar,int x,int y){
    printf("%d",ar[0]); //same as *ar
}

void main(){
    int array[]={20,39,49,29,19,47,18,183};
    int *array_ptr = &array;
    array_ptr+=1;
    //printf("%d",*array_ptr);
    matrix_coder(array,2,3); //same as  matrix_coder(&array,2,3);
}
