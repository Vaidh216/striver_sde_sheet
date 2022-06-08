#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    if(permutation.size() == 1){
        return permutation;
    }
    for(int i=n-2;i>=0;i--){
        if(permutation[i] < permutation[i+1]){
            int cur=i+1;
            auto it = lower_bound(permutation.begin()+i+1,permutation.end(), permutation[i], std::greater<int>());
            it--;
            cur = distance(permutation.begin(),it);
            swap(permutation[i],permutation[cur]);
            sort(permutation.begin()+i+1,permutation.end());
            return permutation;
        }
    }
    sort(permutation.begin(),permutation.end());
    return permutation;
}