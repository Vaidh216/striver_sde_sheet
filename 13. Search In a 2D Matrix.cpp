#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & matrix, int m, int n, int target) {

        for(int i=0;i<m;i++){
            if(target > matrix[i][n-1]){
                continue;
            }else{
                for(int j=0;j<n;j++){
                    if(matrix[i][j] == target){
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
}