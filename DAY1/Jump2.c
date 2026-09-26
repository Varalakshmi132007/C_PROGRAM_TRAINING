#include<stdio.h>
int getMinJumps(int nums[] , int n){
    int jump = 0;
    int end = 0;
    int farthest = 0;

    for(int i = 0 ; i < n ; i++){
        if(farthest < i+nums[i]){
            farthest = i+nums[i];
        }

        if(i == end){
            jump++;
            end = farthest;
        }
    }
    return jump;
}
int main(){
    int  nums[] = {3,1,1,5};
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("%d",getMinJumps(nums,n));
    return 0;
}