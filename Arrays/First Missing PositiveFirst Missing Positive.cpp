class Solution {
public:
    
    int shift( vector < int>& nums){
        
        int j = -1 ;
        for ( int i = 0 ; i < nums.size() ; ++i ){
            
            if ( nums[i] <= 0 ){
                j++ ;
                int temp = nums[i];
                nums[i] = nums[j] ;
                nums[j] = temp ;
            }
        }
        return j ;
        
    }
    int firstMissingPositive(vector<int>& nums) {
        
        int idx = shift( nums ) , res = -1 , itr = 0; 
        if( idx == nums.size() - 1 )return 1 ;

        for ( int i = idx + 1  ; i < nums.size() ; ++i ){
            
            int el = nums[i] > 0 ? nums[i] : -1 * nums[i] ;
            
            if( (long long)idx + el  < nums.size() && nums[idx + el ] > 0 )nums[idx + el ] *= -1 ; 
            
        }
      
        for ( int i = idx + 1  ; i < nums.size() ; ++i ){
            itr++ ; 
            int el = nums[i] ;
            if( nums[i] > 0 ){
                res = 1 ; 
                break ;
            }
            
            
            
        }
        if ( res == 1 )return itr ; 
        else return itr + 1  ;
        
        
    }
};
