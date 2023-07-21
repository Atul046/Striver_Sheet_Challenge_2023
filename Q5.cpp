// Sort 0 1 2

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int x=0;  // keep track of count of zeroes
   int y=0;  // kepp track of count of ones
   int z=0;  // keep track of count of twos
   
   for(int i=0; i<n; i++){
      if(arr[i]==0)
         x++;
      else if(arr[i]==1)
         y++;
      else  
         z++;
   }

   int k = 0; // keep track of index of array
   for(int i=0; i<x; i++)
      arr[k++]=0;
   for(int i=0; i<y; i++)
      arr[k++]=1;
   for(int i=0; i<z; i++)
      arr[k++]=2;
}
