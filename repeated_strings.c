#include <stdio.h>
#include <string.h>

long repeatedString(char* s, long n) {
    int pos=0;
    int i = 0;
    long count;
    int str_len = strlen(s);
    while(pos<n){
        printf("%c",s[i]);
        if(s[i] == 'a'){
            count++;
        }
        pos++;
        i = pos%str_len;
    }
    return count;
}

void main(){
    char str[3] = "aba";
    long len = 10;
    printf("\n%d", repeatedString(str,len));

}