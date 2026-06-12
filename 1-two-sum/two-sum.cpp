class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
    
        //store original indices
        vector<pair<int,int> > indices;
        for (int i = 0 ; i < n ; i++){
            indices.push_back({nums[i] , i });  // vlaue,index
        }


        sort(indices.begin() , indices.end()); //sort by value

        int l = 0 , r = n-1;
        int left=0,right=0;

        //find indices whose sum = target
        while(l<r){
            int sum = indices[l].first+indices[r].first;
            if(sum < target){
                l++;
            }
            else if(sum > target){
                r--;
            }

            else {
                return {indices[l].second , indices[r].second};
            }
        }

   
        

        return {};
        
    }
};