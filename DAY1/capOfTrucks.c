#include<stdio.h>

int shipWithDays(int nums[] , int n , int days){
    int low = 0;
    int high = 0;

    for(int i=0 ; i<n ; i++){
        if(nums[i] > low){
            low = nums[i];
        }
        high += nums[i];
    }

    while(low < high){
        int mid = low + (high - low)/2;
        int d = 1 , sum = 0;
        for(int i = 0 ; i < n ; i++){
            if(sum + nums[i] > mid){
                d++;
                sum = 0;
            }
            sum += nums[i];
        }

        if(d <= days){
            high = mid;
        }else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int days = 5;
    int nums[] = {1 ,2 ,3,4,5,6,7,8,9,10};
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("%d",shipWithDays(nums,n,days));
    return 0;
}