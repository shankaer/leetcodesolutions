#include<bits/stdc++.h>

long long merge(long long *arr , int low , int mid , int high){
    
    vector < long long > arr1;
    vector < long long > arr2;
    for( int i = low ; i <= mid ; ++i)arr1.push_back(arr[i]) ;
    for( int i = mid + 1 ; i <= high ; ++i)arr2.push_back(arr[i]) ;
    
    int n = arr1.size() - 1 , m = arr2.size() - 1 ;
    int i = 0 , j = 0 , k = low, inversions = 0  ;
    
    while( k <= high ){
        
        if( i<=n && j<=m && arr1[i] > arr2[j]){
           arr[k] = arr2[j] ;
            inversions = inversions + n - i + 1 ;
            j++ ;
            k++ ;
        }
        else if( i<=n && j<=m && arr1[i] <= arr2[j]  ){
            arr[k] = arr1[i];
            ++i ;
            ++k ;
        }
        else if ( i > n && j <= m){
            arr[k] = arr2[j] ;
            ++j ;
            ++k ;
        }
        else if ( j > m && i <= n ){
            arr[k] = arr1[i] ;
            ++i;
            ++k ;
        }
    }
    return  inversions;
    
}
long long MergeSort(long long *arr , int low , int high){
    
    int mid = low + ( high - low )/2 ; 
    if( low == high ){
        return 0 ; 
    }
    long long p = MergeSort(arr, low ,mid);
    long long q = MergeSort(arr,mid+1 , high);
    long long r = merge(arr,low,mid,high);
    return p+q+r ;
    
}
long long getInversions(long long *arr, int n){
    
    long long res = MergeSort(arr , 0 , n - 1 ) ;
    //for ( int i = 0 ; i < n ; ++i)cout<<arr[i]<<" ";
    return res ; 
    // Write your code here.
}
