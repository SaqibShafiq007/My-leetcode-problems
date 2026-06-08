class Solution {
public:
    bool check(vector<int>& nums) {
        int index= -1;
        int n = nums.size();

        for (int i= 1 ; i < n ; i++){
            if(nums[i] < nums[i-1]){
                index=i;
                if(nums[0] < nums[n-1]){
                    return false;
                }
            }
            if(index!=-1) break;
        }

        if (index==-1){
            return true;
        }

        for (int i = index+1 ; i < n ; i++){
            if(nums[i] < nums[i-1]){
                return false;
                
            }
        }
        return true;
        
        
    }
};