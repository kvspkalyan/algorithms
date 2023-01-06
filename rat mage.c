#include <stdio.h>
#include <stdbool.h>
bool checking(int x,int y,int maze[4][6])
{
    if(x>=0 && x<4 && y>=0 && y<6 && maze[x][y]==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool next_step(int x,int y,int sol[4][6],int maze[4][6])
{
    if(checking(x,y,maze))
    {
        if(sol[x][y]==1)
        {
            return false;
        }
        sol[x][y] =1;
        if(next_step(x+1,y,sol,maze)==true)
        {
            return true;
        }
        if(next_step(x,y+1,sol,maze)==true)
        {
            return true;
        }
        sol[x][y] = 0;
        return false;
    }
    return false;
}
void rat(int maze[4][6])
{
    int sol[4][6];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<6;j++)
        {
            sol[i][j] = 0;
        }
    }
    next_step(0,0,sol,maze);
}
int main(void)
{
    int maze[4][6]={{1,1,0,0,0,0},{0,1,1,1,0,0},{0,0,0,1,0,0},{0,0,1,1,1,1}};
    rat(maze);
    return 0;
}
