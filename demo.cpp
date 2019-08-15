#include "iostream"
#include "conio.h"

int matrix_coder(int *ar,int x,int y){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",*ar);
            ar+=1;
        }
    printf("\n");
    }
    
}

void main(){
    int new array[40]={20,39,49
                ,29,19,47
                ,18,183,9};
    int *array_ptr = &array;
    //printf("%d",*array_ptr);
    matrix_coder(array,3,4);//arr , rows ,cols
}

