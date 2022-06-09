#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> v;
    for(int i=0;i<n;i++)
    {
        vector<long long int> r(i+1,1);
        for(int j=1;j<i;j++)
            r[j] = v[i-1][j-1] + v[i-1][j];
        v.push_back(r);
    }
    return v;
}
