#include <bits/stdc++.h> 
#define ll long long
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<ll>> ans;
    vector<ll> last;
    for(int i=1;i<=n;i++){
        vector<ll> v1(i);
        v1[0] = 1;
        v1[i-1] = 1;
        if(i == 1){
            ans.push_back(v1);
            last = v1;
            continue;
        }
        for(int j=1;j<i-1;j++){
            v1[j] = last[j-1]+last[j];
        }
        ans.push_back(v1);
        last = v1;
    }
    return ans;
}
