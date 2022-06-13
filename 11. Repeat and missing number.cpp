vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n= A.size();
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++){
        arr[A[i]]++;
    }
    int t1,t2;
    for(int i=1;i<=n;i++){
        if(arr[i] == 0){
            t2 = i;
        }
        if(arr[i] > 1){
            t1 = i;
        }
    }
    return {t1,t2};
}
