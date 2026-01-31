class Solution {
public:
    void moveZeroes(vector<int>& nums) {


        int n = nums.size();

        

       

        //finf 1st zero
        int i=0;
        while(i < n) {
             if(nums[i] == 0 ) break;
             i++;
        }

        //if all elements in array are 0
        if(i==n ) return;

       

        
        for(int j = i+1 ; j < n ; j++){
            if(nums[j]!=0){
                swap(nums[i] , nums[j]);
                i++;                
            }
        }

        
    }
};