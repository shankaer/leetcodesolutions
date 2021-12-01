class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0 = 0 , c1 = 0 , c2 = 0 , n = nums.size(); 
        for ( int i = 0 ; i < n ; ++i )(nums[i] == 0 )?(c0++):((nums[i] == 1 )?(c1++):(c2++)) ;
        for( int i = 0 ; i < n ; ++i )nums[i] = ( i < c0 )?(0):((i >= c0 && i < c0 + c1 )?(1):(2)) ;
        
    }
};
