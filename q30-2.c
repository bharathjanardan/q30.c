#include<conio.h>
#include<stdio.h>
int i,j,sum=0,n;
int A[20],total_movement[20];
int disk;
void getdata()
{
 printf("enter the number of locations\t");
 scanf("%d",&n);
 printf("enter initial position of head\t");
 scanf("%d",&disk);
 printf("enter elements of queue\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&A[i]);
 total_movement[i]=disk-A[i];
 if(total_movement[i]<0)
 {
 total_movement[i]=A[i]-disk;
 }
 disk=A[i];
 sum=sum+total_movement[i];
 }
}
int main()
{
 
 
 
 getdata();
 for(i=0;i<n;i++)
 {
 printf("\n%d",total_movement[i]);
 }   
 printf("\ntotal movement of disk arm = %d",sum);
 getch();
 return 0;
}

