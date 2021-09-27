class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector < int > res(nums.size());
        
        long long prod = 1 , prodb = 1 ;
        int containZero = 0  ; 
        
        for ( int i = 0 ; i < nums.size() ; ++i ){
            
            
            if ( nums[i] != 0 ){
                prod*= nums[i] ;
               
            }
            else {
                 containZero++ ; 
            }
            
            
        }
        
        if ( containZero > 0  ){
            prodb = prod ;
            prod = 0 ; 
        }
        
        else {
            prodb = prod ; 
        }
        cout<<prod<<" "<<prodb<<endl ;
        for( int i = 0 ; i < nums.size() ; ++i ){
            
            if ( containZero > 0  ){
                
                    if( containZero == 1 ){
                        
                        if ( nums[i] == 0 ){
                            res[i] = prodb ;
                        }
                        else {
                            res[i] = 0 ;
                        }
                        
                    }
                    
                    else {
                        res[i] = prod ; 
                        
                    }
                    
            }
                
            else {
                res[i] = prodb/nums[i] ;
            }
        
        }
        
        return res ; 
        
    }
};
