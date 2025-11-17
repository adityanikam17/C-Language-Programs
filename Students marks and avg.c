#include<stdio.h>

int main()
{
    int total ,avg ;
    int math, english, sci, history, geo, draw;

    printf(" \n Enter the marks for math, \n  english, \n sci, \n history, \n geo, \n draw  ");
    scanf("%d %d %d %d %d %d ", &math, &english, &sci, &history, &geo, &draw);

    total= math+english+sci+history+geo+draw;
    avg= total/6;

    printf(" \n Total marks are: %d ", total);
    printf("\n Average marks are : %d ", avg);

    return 0;
}