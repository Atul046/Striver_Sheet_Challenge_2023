// Maximum Subarray Sum

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum = 0;
    long long maxi = 0;
    int start;
    int ansStart = -1;
    int ansEnd = -1;
    
    for(int i=0; i<n; i++)
    {
        if(sum==0)
            start = i;
        sum = sum + arr[i];
        if (sum > maxi) {
          maxi = sum;
          ansStart = start;
          ansEnd = i;
        }
        if (sum < 0)
          sum = 0;
    }
    return maxi;
}
