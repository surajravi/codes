#include<iostream>
#include<cv.h>
#include<cv.hpp>
#include<highgui.h>

int main()
{
int i,j,a;
int mask[][3]={{1,2,3},{4,5,6},{7,8,9}};
int test[5][5]={0};
int test1[5][5]={0};
a=0;
for (i=0;i<5;i++)
  for (j=0;j<5;j++)
    test[i][j]=++a;

for (i=1;i<4;i++)
  for (j=1;j<4;j++)
    for(int k=0;k<3;k++)
      for(int l=0;l<3;l++) test1[i][j]+=mask[k][l]*test[i-1+k][j-1+k];

for (i=0;i<5;i++)
  {
  for(j=0;j<5;j++)
    {
    cout<<" "<<test[i][j];
    }
  cout<<endl;
  }

cout<<endl;
for (i=0;i<5;i++)
  {
  for(j=0;j<5;j++)
    {
    cout<<" "<<test1[i][j];
    }
  cout<<endl;
  }

      
return 0;
}