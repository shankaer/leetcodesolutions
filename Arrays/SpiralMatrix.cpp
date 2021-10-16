class Solution {
public:
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
                int t_lx = 0 , t_ly = 0 , t_rx = 0 , t_ry = matrix[0].size() - 1 , b_lx = matrix.size() - 1 , b_ly = 0 ,b_rx = matrix.size() - 1 , b_ry = matrix[0].size() - 1  ;

                vector < int > res;
                
                while (  t_lx <= b_rx && t_ly <= b_ry){


                    // go right 
                    int i = t_lx , j = t_ly ;
                    
                    while ( j <= t_ry){
                        res.push_back(matrix[i][j]);
                      
                        ++j ; 
                    }
                   
                    i = t_rx + 1 , j = t_ry  ;

                    while (t_rx != b_rx && i <= b_rx ){
                        res.push_back(matrix[i][j]);
                        
                        ++i ;

                    }
                   
                    i = b_rx , j = b_ry - 1 ; 
                    while (t_rx != b_rx  && j >= b_ly ){
                        res.push_back(matrix[i][j]) ;
                        
                        --j ;
                    }
                   
                    i = b_lx - 1 , j = b_ly ;

                    while ( b_ry != b_ly && i > t_lx){
                        res.push_back(matrix[i][j]) ;
                        
                        --i ;

                    }
                 



                    t_lx += 1 ; t_ly += 1 ; 
                    t_rx += 1 ; t_ry += -1 ; 
                    b_lx += -1 ; b_ly += 1 ; 
                    b_rx += -1 ; b_ry += -1 ;

                  
                }

        
           return res ;  
        
        
    
}
    
};
