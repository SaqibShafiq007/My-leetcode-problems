class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();

        unordered_set<int> set;

        for (int i = 0 ; i < n ; i++){
            set.insert(nums[i]);

        }
        int max_seq=0,count = 0;

        for (int it : set){
            //find starting element of index
            if(set.find(it-1) == set.end()){
                count=1;
                int start=it;
                //find max sequence
                while(set.find(start+1) != set.end()){
                    count++,start++;
                }
            }
            max_seq = max(max_seq, count);
        }
        return max_seq;

        
    }
};