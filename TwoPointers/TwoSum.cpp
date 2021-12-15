class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size()  ; 
        vector < int > a(n) ;
        
        for ( int i = 0 ; i < n ; ++i )a[i] = nums[i] ;
        
        sort(a.begin() , a.end() );
        
        int l = 0 , r = n - 1 ;
        int resr = -1 , resl = -1  ;
        int itemR= -1 , itemL = -1 ;
        while ( l < r ){
            
            if ( a[l] + a[r] < target )++l ;
            else if ( a[l] + a[r] > target )--r ;
            else {
                itemL = a[l] ; itemR = a[r] ;
                break ;
            }
        }
        
        for( int i = 0 ; i < n ; ++i){
            if( nums[i] == itemL && resl == -1 )resl = i ;
            else if( nums[i] == itemR && resr == -1  )resr = i ;
        }
        vector < int > res ; 
        res.push_back(resl);
        res.push_back(resr) ;
        return res ; 
    }
};
