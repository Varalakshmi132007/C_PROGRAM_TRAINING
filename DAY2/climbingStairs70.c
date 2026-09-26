#include<stdio.h>
int cal(int n){
    int a = 0 , b =1;
    for(int i = 0 ; i  < n ; i++){
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main(){
    int n = 3;
    printf("%d",cal(n));
    return 0;
}