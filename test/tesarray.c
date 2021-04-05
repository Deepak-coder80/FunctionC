#include <stdio.h>
int main()
{
  int x, y,i,j;
  int a[x][3];

 
 printf("enter the number of rows");
 scanf("%d",&x);
 
 for(i=0;i<x;i++)
  {
      for(j=0;j<3;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }

 for(i=0;i<x;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("[%d]",a[i][j]);
      }
  }

    return 0;
}
