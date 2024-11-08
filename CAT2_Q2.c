#include<stdio.h>
int main () {
    int x,z;
    int scores[4][2]={{65,92},{84,72},{35,70},{59,67}};
    for(x=0;x<4;x++){
        for(z=0;z<2;z++){
            printf("scores[%d][%d]=%d\n",x,z,scores[x][z]);
        }
    }
    return 0;
}