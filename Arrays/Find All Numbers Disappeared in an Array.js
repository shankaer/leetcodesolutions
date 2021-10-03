var findDisappearedNumbers = function(nums) {
    
    var arr = [] ;
    for ( let i = 0 ; i < nums.length ; ++i ){
       let el = (nums[i] < 0 )? -1 * nums[i] : nums[i];
       nums[el - 1 ] = ( nums[el - 1 ] > 0 )? ( -1 * nums[el - 1 ]) : nums[el - 1 ] ;
     }
    
   for ( let i = 0 ; i < nums.length ; ++i ){
       if( nums[i] > 0 ){
         arr.push(i+1) ;
       }
   }
    
    return arr ;
    
};
