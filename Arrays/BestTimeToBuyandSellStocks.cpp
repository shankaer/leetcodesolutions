class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int l = 100001 , r = 100001 , res = -1 ;
        
        for( int i = 0 ; i < prices.size() ; ++i ) {
            
            if ( l > prices[i]){
                l = prices[i] ;
                r = prices[i] ;
            }
            else {
                r = prices[i] ;
            }
            res = max( res , r - l ) ;
        }
        return res ;
    }
};
