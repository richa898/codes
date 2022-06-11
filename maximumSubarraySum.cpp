//Kadane's algorithm
//Time Complexity - O(n)
//Space Complexity - O(1)

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long s=0,ans=0;
    for(int i=0;i<n;i++)
    {
        s+=arr[i];
        ans = max(ans,s);
        if(s<0)
            s=0;
    }
    return ans;
}
