#include<iostream>
#include<cv.h>
#include<cv.hpp>
#include<highgui.h>

int main()
{
int i,j,temp;
int mask[][3]={{1,1,1},{1,1,1},{1,1,1}};
int test[7][7]={{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1}};
int test1[7][7]={0};
int maskh[]={1,1,1};
int maskv[]={1,1,1};
int op1[3]={0};

for (i=1;i<6;i++)
  for (j=1;j<6;j++)
    for(int k=0;k<3;k++)
      for(int l=0;l<3;l++) test1[i][j]+=mask[k][l]*test[i-1+k][j-1+k];

cout<<endl;

for (i=0;i<7;i++)
  {
  for(j=0;j<7;j++)
    {
    cout<<" "<<test1[i][j];
    }
  cout<<endl;
  }

for (i=1;i<6;i++) 
  {
  for (j=1;j<6;j++)
    {
    temp=0;
    op1[0]=op1[1]=op1[2]=0;
    for (int k=0;k<3;k++)
      {
      for (int l=0;l<3;l++)
        {
        op1[k]+=maskh[k]*test[i-1+l][j-1+k];
        }
      temp+=op1[k]*maskv[k]; 
      }
    cout<<temp<<" ";
    }
  cout<<endl;  
  }

return 0;
}