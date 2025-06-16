class Solution {

    private int findDuplicate(int[] nums) {
        int l = 0 , r = nums.length - 1 , n = nums.length ;

        while(l <= r ){
            int mid = l + ( r - l ) /2 ;
            if( mid + 1 < n && nums[mid] == nums[mid + 1 ] ){
                if( ((n - 1) - ( mid + 1 )) % 2 == 0 ){  
                    r = mid - 1 ;
                }
                else{
                    l = mid + 2 ;
                }
            }
            else if( mid - 1 >= 0 && nums[mid] == nums[mid -1 ]){
                if( (mid - 1 - l ) % 2 == 0   ){
                    l = mid + 1 ;
                }
                else {
                    r = mid - 2 ;
                }
            }
            else return nums[mid];
        }

        return -1 ;

    }
    public int singleNonDuplicate(int[] nums) {
        return this.findDuplicate(nums);
    }
}
