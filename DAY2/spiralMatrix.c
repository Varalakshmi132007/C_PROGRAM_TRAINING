#include<stdio.h>
#define rows 3
#define col 4

int main(){
    int nums[3][4] = {{1,2,3 ,4},
                      {5,6,7, 8},
                      {9,10,11,12}};
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = col - 1;
    while(top <= bottom && left<=right){
    for(int i = left ; i <= right ; i++){
       printf(" %d", nums[top][i]);
        
    }
     top++;    
    
    for(int i = top; i <= bottom ; i++){
        printf(" %d",nums[i][right]);   
    }
     right--;

    for(int i = right ; i>=left ; i--){
        printf(" %d",nums[bottom][i]);    
    }
    bottom--;

    for(int i = bottom ; i >= top ; i--){
        printf(" %d",nums[i][left]);  
    }
    left++;
}
    return 0;

}