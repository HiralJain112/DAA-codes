//ProgramForLinearSearch
#include <stdio.h>
#include<conio.h>

int main ()
{
  int arr[1000], n, key, i;
  printf ("Enter the number of elements you want in an array:");
  scanf ("%d", &n);
  printf ("\nEnter %d numbers in the array\n", n);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }
  printf ("\nEnter the number you want to search in the array:");
  scanf ("%d", &key);
  for (i = 0; i < n; i++)
    {
      if (arr[i] == key)
	{
	  printf ("\n%d is found at %d position", key, i);
	  break;
	}
    }
  if (i == n)
    {
      printf ("!!!Element is not present in the array!!!");
    }
  return 0;
}
