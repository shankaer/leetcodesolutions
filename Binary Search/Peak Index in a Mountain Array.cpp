class Solution {
public:
    int decideMove(vector<int>& arr , int i ){
        
        int n = arr.size() - 1 , res = -2 ; 
        
        if ( i == n )return 1 ;
        else if ( i == 0 ) return -1 ;
        
        else {
             if ( arr[i-1] < arr[i] && arr[i] < arr[i+1]) res =  -1 ; 
            
            else if ( arr[i-1] > arr[i] && arr[i] > arr[i+1])res =  1 ; 
            
            else if( arr[i] > arr[i-1] && arr[i] > arr[i+1]) res =  0 ; 
            
            
        }
    
       
            
    
          return res ;  
        
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int low = 0 , high = arr.size() - 1 , res = - 1; 
        
        while ( low <= high ){
            int mid = low + ( high - low )/2 ; 
            int inter = decideMove(arr , mid ) ;
            
            if ( inter == -1 )low = mid + 1 ;
            else if ( inter == 1 )high = mid - 1 ;
            else {
                res = mid ; 
                break ;
            }
            
        }
        
        return res ; 
        
    }
};
