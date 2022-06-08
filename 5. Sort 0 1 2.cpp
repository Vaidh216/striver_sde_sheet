#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int t1[3]={0};
    for(int i=0;i<n;i++){
        t1[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(t1[0] > 0){
            arr[i] = 0;
            t1[0]--;
        }else if(t1[1] > 0){
            arr[i] = 1;
            t1[1]--;
        }else{
            arr[i] = 2;
            t1[2]--;
        }
    }
}