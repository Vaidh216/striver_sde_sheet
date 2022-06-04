#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	set<int> s1,s2;
    int n=matrix.size(),m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                s1.insert(i);
                s2.insert(j);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(s1.find(i) != s1.end()){
            for(int j=0;j<m;j++){
                matrix[i][j] = 0;
            }
        }
    }
    for(int j=0;j<m;j++){
        if(s2.find(j) != s2.end()){
            for(int i=0;i<n;i++){
                matrix[i][j] = 0;
            }
        }
    }
}