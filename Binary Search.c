#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[1000],count,n, key, i,mid,low,high;
  printf ("Enter the number of elements you want in an array:");
  scanf ("%d", &n);
  printf ("\nEnter %d numbers in ascending order in the array\n", n);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }
  printf ("\nEnter the number you want to search in the array:");
  scanf ("%d", &key);
  low=0;
  high=n-1;
  count=0;
  while(low<=high)
  {
      mid=(low+high)/2;
      if(arr[mid]==key)
      {
          count++;
          printf("%d is found at %d position",key,mid);
          break;
      }
      else if(arr[mid]>key)
      {
          high=mid-1;
      }
      else if(arr[mid]<key)
      {
          low=mid+1;
      }
  }
  if(count!=1)
  {
      printf("!!!Element was not present in the array!!!");
  }

    return 0;
}
