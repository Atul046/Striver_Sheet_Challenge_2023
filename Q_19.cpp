// Pair Sum

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   sort(arr.begin(), arr.end());
   vector<vector<int>>ans;
   int n = arr.size();
   for(int i=0; i<n-1; i++)
   {
      int ele = arr[i];
      for(int j=i+1; j<n; j++)
      {
         if(ele+arr[j]==s)
            ans.push_back({ele, arr[j]});
      }
   }
   return ans;
}
