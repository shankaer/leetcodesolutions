class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int count = 0 , candidate = 0 , n = a.size()   ; 
        
        for ( int i = 0 ; i < n ; ++i ){
            if( count == 0 ){
                candidate = a[i] ;
                count = 1 ;
            }
            else {
                if( a[i] == candidate ){
                    count++;
                }
                else {
                    count--;
                }
            }
        }
        return candidate ;
    }
};
