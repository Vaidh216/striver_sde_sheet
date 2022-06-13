#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	set<int> se;
    for(int i=0;i<n;i++){
        if(se.find(arr[i]) != se.end()){
            return arr[i];
        }
        se.insert(arr[i]);
    }
}
