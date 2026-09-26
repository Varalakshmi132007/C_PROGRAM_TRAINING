#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int *productSelf(int *nums , int n){
    int prefix = 1;
    int suffix = 1;
    int *result = malloc(n*sizeof(int));
         result[0] = 1;
        for(int i = 1 ; i <n ; i++){ 
        result[i] = result[i-1]*nums[i-1];}
         for(int i = n-1 ; i >= 0 ; i--){
        result[i] = result[i] * suffix;
        suffix = suffix*nums[i];
    }
    return result;
}
int main(){
    int nums[] = {1,2,3,4};
    int n = sizeof(nums[0])/sizeof(int);
    printf(" %d\n",productSelf(nums,n));
}