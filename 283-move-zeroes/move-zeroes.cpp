class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        //find 1st 0 element
        int zero = 0;
        while( zero<n  && nums[zero]!=0      ){
            zero++;
        }
        
        if(zero==n) return;


        //find 1st non zero  element after 1st zero
        int non_zero = zero;
        while(non_zero<n && nums[non_zero]==0 ){
            non_zero++;
        }

        while (zero<n && non_zero<n){
            if(nums[non_zero]!=0){
                swap(nums[zero],nums[non_zero]);
                zero++;
            }
            non_zero++;
        }
    }



       
};