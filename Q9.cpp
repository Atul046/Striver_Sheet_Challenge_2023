//Merge Two Sorted Arrays

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	for(int i=0; i<n; i++)
		arr1.pop_back();
    
	vector<int>ans;
	int i=0;
	int j=0;
	while(i<arr1.size() && j<n)
	{
		if(arr1[i]<arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
		}
		else if(arr1[i]>=arr2[j])
		{
			ans.push_back(arr2[j]);
			j++;
		}
	}
	while(i<arr1.size())
	{
		ans.push_back(arr1[i]);
		i++;
	}
	while(j<n)
	{
		ans.push_back(arr2[j]);
		j++;
	}

	arr1 = ans;
	// for(int i=0; i<m; i++)
	// 	arr1[i]=ans[i];
	return arr1;
}
