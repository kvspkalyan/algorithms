#include <stdio.h>
#include<stdbool.h>
int moves[8][8];
bool checking(int x,int y)
{
    if(moves[x][y] == -1 && x>=0 && x<8 &&  y>=0 && y<8)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int next_step(int x,int y,int step,int x_move[8],int y_move[8])
{
    int new_x,new_y;
    if(step >= 64)
    {
        return 1;
    }
    for(int i=0;i<8;i++)
    {
        new_x = x+x_move[i];
        new_y = y+y_move[i];
        if(checking(new_x,new_y))
        {
            moves[new_x][new_y] = step;
            step++;
            if(next_step(new_x,new_y,step,x_move,y_move) ==1)
            {
                return 1;
            }
            else
            {
                moves[new_x][new_y] = -1;
            }
        }
    } 
    return 0;
}
void knight()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            moves[i][j]=-1;
        }
    }
    moves[0][0]=0;
    int x_move[]={2,1,-1,-2,-2,-1,1,2};
    int y_move[]={1,2,2,1,-1,-2,-2,-1};
    if(next_step(0,0,1,x_move,y_move) == 0)
    {
        printf("not exit");
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            printf("%d\t",moves[i][j]);
        }
        printf("\n");
    }
}
int main(void)
{
    knight();
    return 0;
}
