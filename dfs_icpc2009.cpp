#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#define MAXH 50
#define MAXW 50

int w;
int h;
int map[MAXH+2][MAXW+2]; // val=0 sea, val=1 land, val=2 checked land
int num;

void label(int row, int col)
{
    int i,j;
    map[row][col]=num;//labeling
    for(i=-1;i<=1;i++)
        for(j=-1;j<=1;j++)
            if (map[row+i][col+j]==1)label(row+i,col+j);
}
int main(){
    int i,j;
    while(1){
        scanf("%d %d", &w, &h);
        if(w==0 && h==0) break;
        for(i=1;i<=h;i++)
            for(j=1;j<=w;j++)
                scanf("%d",&map[i][j]);
        for(j=0; j<=w+1;j++)//around map is sea
            map[0][j]=map[h+1][j]=0; // up & bottom is 0
        for(i=1; i<=h+1;i++)
            map[i][0]=map[i][w+1]=0;
        num=1; // initalize of island number;
        for(i=1; i<=h; i++)//scanning island map
            for(j=1; j<=w; j++)
                if(map[i][j]==1){
                    num++;
                    label(i,j);
                }
        printf("%d\n",num-1);
    }
}
