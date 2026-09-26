#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int longestUniqueSubstring(char *s){
    int set[127] = {0};
    int left = 0;
    int right = 0 , maxlen = 0;
     for(right=0; s[right]!='\0';right++){
        char current = s[right];

        if(set[current] == 1){
            left++;
        }
        set[current] = 1;
        maxlen = fmax(right - left + 1,maxlen);
     }
     return maxlen;
}
int main(){
    char s[] = "abcabc";
    printf("%d\n\n",longestUniqueSubstring(s));
    return 0;
}