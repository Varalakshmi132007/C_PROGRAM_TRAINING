#include<stdio.h>

int main(){
    int nums[] = {4,2,1,1,2};
    int ans = 0;
    for(int i=0 ; i<5; i++){
        ans = ans ^ nums[i];
    }
    printf("%d",ans);
}