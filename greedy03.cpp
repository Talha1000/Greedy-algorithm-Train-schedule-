#include<stdio.h>
int findPlatform(int arr[], int dep[], int n)
{
   int plat_req = 1, result = 1;
   int i = 1, j = 0;
   while (i < n && j < n)
   {
      if (arr[i] < dep[j])
      {
          plat_req++;
          i++;
          if (plat_req > result)
              result = plat_req;
      }
      else
      {
          plat_req--;
          j++;
      }
   }

   return result;
}

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i= 1; i<=size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int dep[size];
    for(int j= 0; j<= size; j++)
    {
        scanf("%d", &dep[j]);
    }
    printf( "Minimum Number of Platforms Required = %d", findPlatform(result));
    return 0;
}
