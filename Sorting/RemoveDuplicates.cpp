class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int latestPos = 0 , n = nums.size() ;
        
        int currEl = -101 , res = 0 ; 
        for( int i = 0 ; i < n ; ++i ){
            if( currEl != nums[i]){
                nums[latestPos]=nums[i];
                currEl = nums[i];
                res++;
                latestPos++;
            }
        }
        return res ; 
    }
};
