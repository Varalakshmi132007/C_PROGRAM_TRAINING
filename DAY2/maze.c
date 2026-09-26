#include<stdio.h>
#define n 4
int findPath(int maze[n][n] , int x , int y , char path[] ,int index ){
    if(x == n-1 && y== n-1){
        printf("%s\n",path);
    }
    if(x >= n || y>=n || maze[x][y] == 0){
          return 0;
    }
    maze[x][y] = 0;
    //down
    path[index] = 'D';
    if(findPath(maze,x+1,y,path,index+1)){
        return 1;
    }
    //right
    path[index] = 'R';
    if(findPath(maze,x,y+1,path,index+1)){
        return 1;
    }

    //backtrack
    maze[x][y] = 1;
    return 0;
}
int main(){
    int maze[n][n] = {
        {1 , 0 , 0 , 0},
        {1 , 1 , 0 , 1},
        {0, 1 , 0 , 0},
        {1 , 1 ,1 ,1}
    };
    char path[n*n];
    findPath(maze,0,0,path,0);
    return 0;

}