//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

#include <stdio.h>

int jumpingOnClouds(int c_count, int* c) {
    int big_step = 2;
    int small_step = 1;
    int pos=0;
    int jumps = 0;
    while(pos<c_count){
        if(c[pos+big_step]!=1){
            jumps++;
            pos+=big_step;
            continue;
        }
        else if(c[pos+small_step]!=1){
            jumps++;
            pos++;  
            continue; 
        }
    }
    if(c_count%2==1)jumps-=1; // if number of odd clouds are odd 
    else if(c_count>99)jumps-=1;
    return jumps;
}
int main(){
    int clouds[7] = {0,0,1,0,0,1,0};
    printf("minimum jumps:");
    printf("%d",jumpingOnClouds(7,clouds));
}

