#include <stdio.h>

int main() {
    int n, max=0, second_max=0;
    scanf("%d", &n);
    
    int nums[n];
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    max=nums[0];
    
    for(int i=1; i<n; i++){
        if(max<nums[i]){
            second_max=max;
            max=nums[i];
        }else if(second_max<nums[i]){
            second_max=nums[i];
        }
    }
    printf("%d %d", second_max, max);
    
    return 0;
}