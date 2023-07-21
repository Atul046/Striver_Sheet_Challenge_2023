// Longest Subarray Zero Sum
#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  vector<int>v;
  v.push_back(0);
  int n = arr.size();
  int sum;
  for(int i=0;i<n; i++)
  {
    sum=0;
    for(int j=i; j<n; j++)
    {
       sum+=arr[j];
       if(sum==0)
       {
         v.push_back(j-i+1);
       }
    }
  }
  int ans = *max_element(v.begin(), v.end());
  return ans;
}
