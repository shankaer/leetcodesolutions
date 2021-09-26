/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
    
    var inf = Number.NEGATIVE_INFINITY ;
    var max = inf , smax = inf , tmax = inf ; 
    
    for ( var i =0 ; i < nums.length ; ++i ) {
        
        var curr = nums[i] ;
        
        if (curr > max ){
            tmax = smax ; 
            smax = max ; 
            max = curr ; 
            
        }
        else if ( curr < max && curr > smax ){
            tmax = smax ; 
            smax = curr ; 
        }
        else if ( curr < smax && curr > tmax ) {
            tmax = curr ; 
        }
        
    }
    
    if ( tmax !== inf) {
        return tmax ;
    }
    else return max ; 
    
};
