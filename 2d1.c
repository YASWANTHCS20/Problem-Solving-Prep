#include<stdio.h>
int main()
{
    int row=3;
    int col=3;
    int a[3][3]=
    {
        {4,5,2},
        {1,7,6},
        {8,9,2}
    };
    int sum;
    int max;
    for(int i=0;i<row;i++)
    {
        sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+a[j][i];
        }

    if(sum>max){
        max=sum;
        col=i;
        }


    }
        printf("%d",col);
        return 0;


}
