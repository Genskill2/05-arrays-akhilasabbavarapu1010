/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[], int count)
{
 int max=a[0];
 for(int i=0;i<count;i++)
 {
 if(a[i]>max){
 max=a[i];
 }
 }
 return max;
 }

int min(int a[], int count)
{
 int min=a[0];
 for(int i=0;i<count;i++)
 {
 if(a[i]<min){
 min=a[i];
 }
 }
 return min;
 }

float average(int a[],int count)
  {
  int  sum=0;
  float avg;
  for(int i=0;i<count;i++)
  {
  sum=sum+a[i];
  }
 avg=(float)sum/(count);
  return avg;
  }
 
 int mode(int a[], int c)
  {
  int count=0,maxcount=0,mode=0;
  for(int i=0;i<c;i++)
  {
     for(int j=0;j<c;j++)
     {
        if(a[j]==a[i])
        {
        count++;
        }
        }
        if(count>maxcount)
        {
        maxcount=count;
        mode=a[i];
        }
        }
        return mode;
        }

int factors(int c,int f[])
 {
 
 int i,count=0;
 for( i=2;i<=c;i++)
 {
 while(c%i==0)
 {
  f[count]=i;
  count++;
  c=c/i;
 }
 }
 return count;
 }
  
