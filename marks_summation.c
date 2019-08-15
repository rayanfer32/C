#include "stdio.h"
int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
    int sum=0;
    if(gender == 'b'){
        for(int i=0;i<number_of_students;i=i+2){
            sum += *(marks+i); //mistake if u write *marks+1
        }
    }
    else if(gender == 'g'){
        for(int i=1;i<number_of_students;i=i+2){
            sum += *(marks+i);
        }
    }
    return sum;
}

int main(){
    int marks[5]={296,13,307,802,81};
    int res = marks_summation(marks,5,'g');
    printf("%d ",res);
}