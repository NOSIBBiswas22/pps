#include <stdio.h>

int main() {
    int n, max, second_max;
    scanf("%d", &n);
    
    int nums[n];
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    max=nums[0];
    second_max=nums[0];
    
    for(int i=1; i<n; i++){
        if(max<nums[i]){
            second_max=max;
            max=nums[i];
        }else if(second_max<nums[i] && max > nums[i]){
            second_max=nums[i];
        }
    }
    printf("%d\n", second_max);
    
    return 0;
}