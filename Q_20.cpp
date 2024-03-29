// Find Four Elements That Sums To A Given Value

#include <bits/stdc++.h>

string fourSum(vector<int> nums, int target, int n) {
   
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int k=j+1;
            int l=n-1;
            while(k<l){
                int sum=nums[i];
                sum+=nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(sum==target){
                    return "Yes";

                }
                else if(sum<target) k++;
                else l--;
            }
        }
    }
    return "No";
}
