class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // requires 3 steps 
        
        // find the imdex after which number is greatest by starting from the end
        
        int n = nums.size() - 1 , max = nums[n] , maxi = -1 ;
        
        for( int i = n ; i >= 0  ; --i ){
            if( nums[i] < max ){
                maxi = i ;
                break ;
            } 
            else {
                max = nums[i] ;
            }
        }
        // now find next big number after 
        if ( maxi != -1 ){
            sort( nums.begin() + maxi + 1 , nums.begin() + nums.size() ) ;
            int exIdx = - 1; 
            for( int i = maxi + 1 ; i <= n ; ++i  ){
                if( nums[i] > nums[maxi]){
                    exIdx = i ;
                    break;
                }
            }
            if( exIdx != -1 ){
                int temp = nums[maxi] ; nums[maxi] = nums[exIdx] ; nums[exIdx] = temp ;
            }
            
            
        }
        else {
            sort(nums.begin() , nums.begin() + nums.size() ) ;
        }
    }
};
