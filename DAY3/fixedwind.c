#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int calculate(int nums[] , int k , int n){
    int left = 0;
    int right = k-1;
    int sum = 0;
    int max = 0;
    for(int i = left ; i<=right ; i++){
        sum = sum + nums[i];
    }
    printf("%d\n",sum);
    while(right < n-1){
         sum = sum - nums[left];
         left++;
         right++;
         sum = sum+nums[right];
         printf("%d\n",sum);
         
    }
    max = fmax(sum , max);
    printf("%d",max);
    return sum;
}
int main(){
    int nums[] = {1,2,5,7,1 };
    int k = 3;
    int n = 5;
   calculate(nums , k , n);
    return 0;
}