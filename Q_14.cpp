// Modular Exponentiation

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int ans = 1;
	while(n>0)
	{
		if(n&1)
			ans = (1LL* (ans%m) *(x)%m)%m;
		x = (1LL * (x)%m * (x)%m)%m;
		n=n>>1;
	}
	return ans;
}
