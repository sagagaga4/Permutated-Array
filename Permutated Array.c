#include <stdio.h>
#define N 5


int permutate(int *arr)
{
  int temp[5] = {0};  

  if(arr == NULL)
  {
    return 0;
  }
  
  for(int i = 0;i < N;i++)
    {
      temp[arr[i]]++;
    }

  for (int i = 0; i  < N; i++)
  {
    if(temp[i] > 1 || temp[i] < 1)
    {
      printf(" :( Array is NOT permutated!");
      return 0;
    }
  }
  printf("Array is permutated!");
  return 1;
}







int main(void) 
{
  int s[]= {0,-1,-2,-3,-4};
  
  permutate(s);
  return 0;
}