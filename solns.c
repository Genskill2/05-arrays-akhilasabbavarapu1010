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
