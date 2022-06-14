//Time Complexity - O(n)
//Space Complexity - O(1)

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini = INT_MAX, maxi = 0;
    for(int i=0;i<prices.size();i++)
    {
        mini = min(prices[i],mini);
        maxi = max(prices[i]-mini,maxi);
    }
    return maxi;
}
