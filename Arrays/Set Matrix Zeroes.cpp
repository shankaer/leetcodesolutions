class Solution {
public:
    void printArray(vector<vector<int>>& matrix){
        
        for( int i = 0 ; i < matrix.size()  ;++i ){
            for( int j = 0 ; j < matrix[0].size() ; ++j ){
               cout << matrix[i][j]<<" ";
            }
            cout<<endl ; 
           
        }
        
    }
    void setZeroes(vector<vector<int>>& matrix) {
        
        int rowUsed = -1 , colUsed = -1  , breakOuter = 0 ;
        
        for( int i = 0 ; i < matrix.size()  ;++i ){
            for( int j = 0 ; j < matrix[0].size() ; ++j ){
                if( matrix[i][j] == 0 ){
                    rowUsed = i ;   // used to track columns
                    colUsed = j ;   // used to track row
                    breakOuter = 1 ; 
                    break ; 
                }
            }
            if(breakOuter == 1 )break ; 
        }
        
        if( rowUsed == -1 )return ;
        
        for( int i = 0 ; i < matrix.size() ; ++i ){
            if( matrix[i][colUsed] != 0 ){
                matrix[i][colUsed] = 1 ;
            }
        }
        for( int i = 0 ; i < matrix[0].size() ; ++i ){
            if( matrix[rowUsed][i] != 0 ){
                matrix[rowUsed][i] = 1 ;
            }
        }
        //printArray(matrix);
        
        for( int i = 0 ; i < matrix.size()  ;++i ){
            for( int j = 0 ; j < matrix[0].size() ; ++j ){
                if( matrix[i][j] == 0 ){
                    matrix[rowUsed][j] = 0 ; 
                    matrix[i][colUsed] = 0 ;
                }
            }
           
        }
        //printArray(matrix);
        for( int i = 0 ; i < matrix.size()  ;++i ){
            for( int j = 0 ; j < matrix[0].size() ; ++j ){
                //cout << rowUsed <<" "<< j << " change "<<i<<" "<<colUsed<<endl;
                if( i != rowUsed && j != colUsed && (matrix[rowUsed][j] == 0 || matrix[i][colUsed] == 0 )){
                    matrix[i][j] = 0 ; 
                   
                }
            }
           
        }
        
        //printArray(matrix);
        
        for( int i = 0 ; i < matrix.size() ; ++i ){
            
                matrix[i][colUsed] = 0 ;
            
        }
        for( int i = 0 ; i < matrix[0].size() ; ++i ){
            
                matrix[rowUsed][i] = 0 ;
            
        }
        
       // printArray(matrix);
        
        
        
    }
};
