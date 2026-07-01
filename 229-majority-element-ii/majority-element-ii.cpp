class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int majority = n/3+1;

        unordered_map<int,int>freq;

        for(int i = 0 ; i < n ; i++){
            freq[nums[i]]++;

            if(freq[nums[i]] == majority){
                ans.push_back(nums[i]);
            }


        }

        return ans;

        
        
    }
};