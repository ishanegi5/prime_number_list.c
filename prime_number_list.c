#include<stdio.h>

void main()

{ int n1,count;

printf("Enter numbers upto which you need prime numbers list: ");

scanf("%d",&n1);

 
for(int n=2;n<=n1;n++)
{
    count=0;
    
for(int i=1;i<=n;i++)
{
       
if(n%i==0)
{
        
count++;
       
}
       
    
}
    
if(count==2)
{
        
printf(" %d ",n);
       
}

}
printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
}
