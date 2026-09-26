#include<stdio.h>
#include<stdbool.h>

bool canBoolReach(int nums[] , int n){
     int maxReach = 0;
     for(int i = 0 ; i < n ; i++){
        if(i > maxReach){
            return false;
        }else{
            maxReach = nums[i]+i;
        }
        if(maxReach >= n){
            return true;
        }
     }
     return true;
}
int main(){
    int nums[] = {2 , 1, 0, 3};
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("%d",canBoolReach(nums,n));
    return 0;
}