// Complete the countingValleys function below.
/*

         _/\      _
           \    /
           \/\/
*/
//https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup&h_r=next-challenge&h_v=zen
#include <stdio.h>
int countingValleys(int n, char* s) {
    int sea_level = 0;
    int alti = 0;
    char prev_step = '0';
    int valley_passed = 0;
    for(int i;i<n;i++){
        if(s[i]=='U'){
            printf("step:UP\n");
            alti++;
        }
        if(s[i]=='D'){
            printf("step:DOWN\n");
            alti--;
        }
        prev_step = s[i];
        printf("prev_step:%c\n",prev_step);
        printf("alti:%d\n",alti);
        
        if((alti == sea_level) && (prev_step == 'U')){
            valley_passed++;
        }
    }
    return valley_passed;
}

int main(){
    char path[12] = "DDUUDDUDUUUD";
    printf("valleys passed: %d",countingValleys(12,path));

}
