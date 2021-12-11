class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size() , n = matrix[0].size() ;
        int low  = 0 , high = m*n - 1 ;
        
        int res = false ;
        
        while ( low <= high ){
            
            int mid = low + ( high - low )/2 ;
            
            int i = mid / n  , j = mid % n ; 
            
            int el = matrix[i][j] ; 
            
            if( el < target ){
                low = mid + 1;
            }
            else if ( el > target ){
                high = mid - 1 ;
            }
            else {
                res = true ; 
                break ;
               
            }
            
        }
        return res ; 
        
    }
};
