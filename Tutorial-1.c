
#include <stdio.h>

int main() 
{
    int r=3,c=3,row,col,max=0,min=100000;
    int i,j;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
                {
                    for (row=0;row<r;row++)
                        {
                            if (a[i][row]<min)
                                min=a[i][row];
                        }
                      for (col=0;col<r;col++)
                        {
                            if (a[col][j]>max)
                                max=a[col][j];
                        }
                     if (min==max && max==a[i][j])
                     {
                         printf("Saddle element %d found at %d %d",a[i][j],i,j);
                         return 0;
                     }
                    max=0;
                    min=10000;
                }
            
                }
    printf("no saddle found");
        }
