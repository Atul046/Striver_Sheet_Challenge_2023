// Longest Consecutive Sequence

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int maxlen=0,count=1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]) continue;
        if(arr[i]-arr[i-1]==1) count++;
        else{
            maxlen=max(maxlen,count);
            count=1;
        }
        
    }
    maxlen=max(maxlen,count);
    return maxlen;
}
