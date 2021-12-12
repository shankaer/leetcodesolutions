long long gcd ( int a , int b ){
    
    if( b == 0 )return a ; 
    else return gcd(b,a%b) ;
} 

long long nCrOptimized( int n , int r ){
    
    // n! / (n - r)! * (r!) 
    // n * n - 1 * n - 2 * n - 3 ...... * n - (r - 1 ) / r * r - 1 * r - 2 .....* 1 
    
    double res = 1 ;
    
    for ( int i = 1 ; i <= r ; ++i){
        res = res * ( n - r + i)/i ;
    }
    return (long long)res;
    
}
class Solution {
public:
    int uniquePaths(int n, int r) {
        
        n = n + r - 2 ;
        r = r - 1 ;
        return nCrOptimized( n , r ) ;
        long p = 1 , k = 1 ;
        
        if( n - r < r ){
            r = n - r ;
        }
        
        if(r != 0 ){
            while(r){
                p*=n ;
                k*=r ;
                
                long long  m = gcd(p,k) ;
                
                p/= m ;
                k/= m ;
                
                
                --n;
                --r;
            }
            return p ;
        }
        else {
            return 1 ;
        }
    }
};
