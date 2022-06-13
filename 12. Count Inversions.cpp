#include <bits/stdc++.h>
#define ll long long
ll ans=0;
void merge(ll arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    ll ar1[n1],ar2[n2];
    for(int i=0;i<n1;i++){
        ar1[i] = arr[i+low];
    }
    for(int i=0;i<n2;i++){
        ar2[i] = arr[i+mid+1];
    }
    int i=0,j=0,cur=low;
    while(i < n1 && j < n2){
        if(ar2[j] < ar1[i]){
            arr[cur] = ar2[j];
            j++;
//             for(int i=0;i<n1;i++){
//                 cout<<ar1[i+low]<<" ";
//             }
//             cout<<"\n";
//             for(int i=0;i<n2;i++){
//                 cout<<ar2[i+mid+1]<<" ";
//             }
//             cout<<"\n";
//             cout<<"here\n";
            ans+= (n1-i);
        }else{
            arr[cur] = ar1[i];
            i++;
        }
        cur++;
    }
    while(i < n1){
        arr[cur] = ar1[i];
        i++;
        cur++;
    }
    while(j < n2){
        arr[cur] = ar2[j];
        j++;
        cur++;
    }
}

void merge_sort(ll arr[],int low,int high){
       if(low >= high){
           return;
       }
    int mid = (low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    
    merge(arr,low,mid,high);
}

long long getInversions(long long *arr, int n){
    ans=0;
    ll ar1[n];
    for(int i=0;i<n;i++){
        ar1[i] = arr[i];
    }
    merge_sort(ar1,0,n-1);
    return ans;
}