#include<stdio.h>

int main()
{
    
  int A[10],i,b;
  printf("Enter 10 elements\n");
  for(i=0;i<10;i++)
    {
    scanf("%d", &A[i]);
    }


    printf("enter the element to be inserted\n");
    scanf("%d",&b);
    
    
      for(i=0;i<10;i++)
    { if (A[i]>b)
        {for(i=11;i>b;i--)
    
   { A[i]=A[i-1];
    } 
    A[i]=b;
    }else i++;
    }
    
    printf ("the new array is\n");
    {for(i=0;i<11;i++)
    { 
    printf("\n%d",A[i]);
    }
    printf("\n");
    }
   
  return 0;
}
    