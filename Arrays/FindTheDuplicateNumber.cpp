class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int  n =  nums.size() , res = -1   ;
        for( int i = 0 ; i < n ; ++i ){  
            int mod = ( nums[i] < 0 )? -1 * nums[i] : nums[i];
            if( nums[mod] > 0 ){
                nums[mod] = -1*nums[mod];
            }
            else if( nums[mod] < 0 ){
                res = mod ;
            }
        }
        return res;
    }
};
