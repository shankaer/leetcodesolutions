class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap < int , int > hash;
        vector < int > res ; 
        for( int i = 0 ; i < nums.size() ;++i)hash.insert(make_pair(nums[i],i) ) ;
        for( int i = 0 ; i <nums.size() ;++i){
               multimap < int , int > :: iterator itr = hash.find(target - nums[i]);
            if ( itr != hash.end() && (itr->second != i) ){
                
                res.push_back(i); res.push_back(itr->second);
                break ;
            }
        }
        return res ; 
    }
};
