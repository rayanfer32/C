#include <stdio.h>
#include <math.h>
int in_array(int ele,int* arr)
{
    for(int p;p<100;p++){
        if(ele==arr[p]){
            //printf("%d\n",1);
            return 1;
        }
    }
    return 0;
}


int sockMerchant(int n, int ar_count, int* ar) {
    int pair=0,found=0;
    int done;
    int checked[100]={0};
    for(int i=0;i<n;i++){
        //hold=arr[i];
        
        if(in_array(ar[i],checked)==0)
        {
            printf("finding pair\n");
            for(int j=0;j<n;j++){
                // if(i==j){
                //     continue;
                // }
                if(ar[i]==ar[j]){
                    printf("a pair of %d \n",ar[i]);
                    found++;
                }
            }
        }
        checked[i]=ar[i];
        printf("found:%d\n",found);
        if(found>1){
        pair=pair+(found/2);
        }
        found=0;
    }
    return pair;
}


int main()
{
    int pairs=0;
    static int socks[9]={10,20,20,10,10,30,50,10,20};
    //int socks[10]={1,1, 3, 1, 2 ,1 ,3 ,3 ,3 ,3};
    pairs = sockMerchant(10,10,socks);
    printf("%d ",pairs);
}