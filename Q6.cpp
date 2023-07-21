// Best Time to Buy and Sell Stock

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &v){
    // Write your code here.
    int profit = 0;
    int mini = v[0];
    for(int i=1; i<v.size(); i++)
    {
        int cost = v[i]-mini;
        profit = max(profit, cost);
        mini = min(mini, v[i]);
    }
    return profit;
}
