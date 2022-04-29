#include<stdio.h>
#define max 100
void armstrng(int[],int);
int main()
{
       int a[max], n, i=0;
       printf("Enter the limit of array: ");
       scanf("%d", &n);
       printf("Enter the elements of array: ");
       for(i=0; i<n; i++)
       {
              scanf("%d",&a[i]);
        }
        armstrng(a,n);
}
void armstrng(int a[max],int n)
{
        int i=0, temp, sum=0, rem, c=0;
        for(i=0; i<n; i++)
        {
              sum=0;
             temp=a[i];
              while(a[i]!=0)
              {
                      rem=a[i]%10;
                      sum=sum+rem*rem*rem;
                      a[i]=a[i]/10;
               }
               if(temp==sum)
               {
                       c++;
              }
        }
        printf("\nTotal armstrng no is: %d ",c);
}