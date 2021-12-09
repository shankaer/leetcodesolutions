double powLn( double x , int n ){
     if ( n == 1 ) {
            return x ;
        }
        else if( n == 0 ){
            return 1 ;
        }
        else {
            int p = n / 2 ;
            double q = powLn(x,p) ;
            double q2 = q*q ;
            if ( n % 2 == 0 ){
                return q2 ;
            }
            else {
                return q2*x ;
            }
        }
    
}
class Solution {
public:
    double myPow(double x, long long n) {
        
        if ( n < 0 ){
            return (1/powLn(x,-1*n)) ;
        }
        else {
            return powLn(x,n) ;
        }
        
    }
};
