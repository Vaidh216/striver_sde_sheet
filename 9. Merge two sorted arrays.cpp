class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        for(int i=m-1;i>=0;i--){
        arr1[i+n] = arr1[i];
    }
    int i=n,j=0,k=0;
    while(k < n+m){
        if(i<(n+m) && j<n){
            if(arr1[i] <= arr2[j]){
                arr1[k] = arr1[i];
                i++;
            }else{
                arr1[k] = arr2[j];
                j++;
            }
        }else{
            if(j < n){
                arr1[k] = arr2[j];
                j++;
            }else{
                arr1[k] = arr1[i];
                i++;
            }
        }
        k++;
    } 
    }
};