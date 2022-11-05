#include<stdio.h>
void mergearray(int a[],int m,int b[],int n)
{ int i=0,j=0,k=0,c[10];
   while(i<m&&i<n)
 {
  if(a[i]<b[j])
    {c[k]=a[i];
    i++;
    k++;}
  else
     { c[k]=b[j];
       j++;
       k++;}
    }
    while(i<m)
    {
     c[k]=a[i];
    i++;
    k++;
    }
    while(j<n)
    { 
    c[k]=b[j];
    j++;
    k++;
    }
    for (k=0; k<m+n; k++)
   {
     printf("%d",c[k]);
    }
    printf("\n");
 } 
/***********/

void unionarray(int a[],int m,int b[],int n)
{ int i=0,j=0,k=0,c[10];
   while(i<m&&i<n)
 {
  if(a[i]<b[j])
    {c[k]=a[i];
    i++;
    k++;}
  else if (b[j]<a[i])
     {c[k]=b[j];
       j++;
       k++;}
    else 
    {c[k]=a[i];
    i++;
    j++;
    k++;}
    
    }
    while(i<m)
    {
     c[k]=a[i];
    i++;
    k++;
    }
    while(j<n)
    { 
    c[k]=b[j];
    j++;
    k++;    }
    for (k=0;k<m+n; k++)
    printf("the union is =%d",c[k]);
    
 }
/************/
    
    int main() 
{
int a[5]={1,3,6,8,10};
int b[5]={4,6,10,11,12};
mergearray(a,5,b,5);
unionarray(a,5,b,5);

return 0;
}
    