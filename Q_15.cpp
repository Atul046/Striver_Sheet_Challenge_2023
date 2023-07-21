// Day 6 : Majority element

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int, int>m;
	for(int i=0; i<n; i++)
		m[arr[i]]++;
	for(auto x:m)
	{
		if(x.second>(n/2))
			return x.first;
	}
	return -1;
}
