#include <stdio.h>
void rotate(int arr[],int arr1[],int k,int n)
{
int m=0;
int temp=n-1;
k=k%n;
for(int i=k-1;i>-1;i--)
{
   arr1[i]=arr[temp--];
   }
for(int i=k;i<n;i++)
{
  arr1[i]=arr[m++];
  
  }
  }
   
void main()
{
  int arr[5]={1,2,3,4,5};
  int arr1[5];
  int k;
  printf("enter number of rotations:\n");
  scanf("%d",&k);
  rotate(arr,arr1,k,5);
  printf("array after %d rotations\n",k);
  for(int i=0;i<5;i++)
  {
    printf("%d\t",arr1[i]);
    }
}
