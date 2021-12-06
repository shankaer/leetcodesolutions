module.exports = { 
 //param A : array of integers
 //return a array of integers
	repeatedNumber : function(A){
	    
    var n = A.length , sum = 0 ;
    var Sumn =( n * (n+1) )/2 , rep,miss ;
    
    for ( let i = 0; i < n ; ++i ){
        
        let el = ( A[i] < 0 )?(-1 * A[i] ):A[i];
        sum = sum + el ;
        A[el - 1 ] = ( A[el - 1 ] > 0) ? ( -1 *A[el-1] ): (A[el - 1]) ;
        
        }
    
    for ( let i = 0 ; i < n ; ++i){
        if ( A[i] > 0){
            
            miss = i+1 ;
            break;
        }
    }
   // console.log(Sumn,sum,miss);
    rep = ( sum + miss ) - Sumn ;
    let res = [] ; 
    res.push(rep) ;
    res.push(miss) ;
    return res; 
}


	
};
