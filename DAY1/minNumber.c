#include<stdio.h>

int main(){
    int n = 342;
    int notes[] = {100 , 50 , 20 , 10 , 5, 2 , 1};
    int size = sizeof(notes)/sizeof(notes[0]);
    int minNotes = 0;
    for(int i=0 ; i<size ; i++){
        int count = n / notes[i];
        n = n % notes[i];
        minNotes = minNotes + count;
    }
    printf("The minimum number of notes : %d",minNotes);
    return 0;
}