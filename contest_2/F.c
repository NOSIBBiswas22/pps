#include <stdio.h>
#include <math.h>

int main() {
    int n, X, sum=0;
    scanf("%d %d", &n , &X);
    int arr[n];

    for(int i=0; i<n; i++){
        int tag;
        scanf("%d", &tag);
        arr[i]=tag;
        sum+=arr[i]%10;
    }
    
    if(sum%X){
        printf("You can now watch the series!\n");
    }else{
        printf("Finish all the tasks, including mine!\n");
    }
    
    return 0;
}