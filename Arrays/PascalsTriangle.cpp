class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector < vector < int > > res ;
        
        for ( int i = 1 ; i <= numRows ; ++i ) {
            
            vector < int > inter ;
            
            if( i == 1 ) {
                inter.push_back(1) ;
                res.push_back(inter) ;
            }
            else {
                inter.push_back(1) ;
                for( int j = 1 ; j < i - 1  ; ++j ){
                    
                    inter.push_back(res[i-2][j] + res[i-2][j-1]) ;
                     
                }
                inter.push_back(1) ;
                res.push_back(inter) ;
            }
            
            
        }
        return res; 
    }
};
