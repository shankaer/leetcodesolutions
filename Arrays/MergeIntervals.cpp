bool compare(vector <int> &a , vector <int> &b){
        if( a[0] < b[0] ){
            return true ;
        }
        else if( a[0] > b[0]){
            return false ;
        }
        else {
            if( a[1] < b[1] ){
                return true ;
            }
            else {
                return false ;
            }
        }
    }
class Solution {
    
public:

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector < vector < int > > res ;
        sort(intervals.begin() , intervals.end() ,compare) ;
        
        int j = -1 ;
        
        for ( int i = 0 ; i < intervals.size() ; ++i ){
            if( i == 0 ){
                vector < int > inter ;
                inter.push_back(intervals[i][0]) ;
                inter.push_back(intervals[i][1]) ;
                res.push_back(inter) ;
                j = 0 ;
            }
            else {
                 int l1 = intervals[i][0] , r1 = intervals[i][1] ;
                 int l = res[j][0] , r = res[j][1] ;
                 
                 if ( l1 >= l && r1 <= r )continue ; // fully inside
                 
                 else if( l1 > r ){    // fully outside
                    vector < int > inter ;
                    inter.push_back(intervals[i][0]) ;
                    inter.push_back(intervals[i][1]) ;
                    res.push_back(inter) ;
                    ++j;
                }
                 else  {           // partially inside 
                     res[j][1] = r1;
                 }
                
            }
                
        }
        
        return res ;
    }
};
