#include <bits/stdc++.h> 
long long merge(long long *arr,long long temp[],long long left, long long mid,long long right){
    long long i,j,k;
    long long inv=0;
    i=left;j=mid;k=left;
    while((i<=mid-1) && (j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            inv+=(mid-i);
        }
    }
    while(i<=mid-1){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
   }
   for(i=left;i<=right;i++){
       arr[i]=temp[i];
   }
   return inv;
}

long long merge_count(long long *arr,long long temp[],long long left,long long right){
    long long mid, inv=0;
    if(right>left){
        mid=(right+left)/2;
        inv+=merge_count(arr,temp,left,mid);
        inv+=merge_count(arr,temp,mid+1,right);
        inv+=merge(arr,temp,left,mid+1,right);
    }
    return inv;
}

long long getInversions(long long *arr, int n){
    long long temp[n];
    long long ans=merge_count(arr,temp,0,n-1);
    return ans;
}
