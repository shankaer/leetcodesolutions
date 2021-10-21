class Solution {
public:
    char nextGreatestLetter(vector<char>& A, char target) {
        
        int low = 0 , high = A.size() - 1 , res = -1  ; 
        
        while ( low <= high ) {
            
            int mid = low + ( high - low )/2 ;
            
            if ( A[mid] > target  )high = mid - 1 ;
            
            else if ( A[mid] < target )low = mid + 1 ; 
            
            else {
                res = mid ; // found 
                break;
            }
            
           
        
        } 
        if( res != -1 ){
            while ( res < A.size() && A[res] == target )++res ;
            return A[ (res) % A.size() ];
        }
        else{
           // cout<<"not found"<<endl;
            return A[low % A.size()]  ;
        } 
    }
}; 
