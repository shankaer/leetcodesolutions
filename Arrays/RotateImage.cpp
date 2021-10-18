class Solution {
public:
    void rotate(vector<vector<int>>& A) {
        
        for ( int i = 0, j = A.size() - 1   ; i < j  ; ++i,--j ){
            
           
            for ( int k = i ; k < j ; ++k ){
                 int idx = i , idy = k  ; 
                 int idx1 = idy , idy1 = A.size() - idx - 1 ;
                 int idx2 = idy1 , idy2 = A.size() - idx1 - 1 ;
                 int idx3 = idy2 , idy3 = A.size() - idx2 - 1  ; 
                 int idx4 = idy3 , idy4 = A.size() - idx3 -1  ; 
                
                 int one = A[idx4][idy4] , two = A[idx1][idy1] , three = A[idx2][idy2] , four = A[idx3][idy3] ; 
                 A[idx4][idy4] = four ;
                 A[idx1][idy1] = one ;
                 A[idx2][idy2] = two ; 
                 A[idx3][idy3] = three ; 
              }
            
        }
     }
};
