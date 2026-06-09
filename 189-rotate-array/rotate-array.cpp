class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if (k>n){
            k=k%n;;
        }

        //reverse 1st n-k elements
        int l = 0 , r= n-k-1;
        while(l<r){
            swap(nums[l++],nums[r--]);
        }

        //reverse last k elements
        l=n-k,r=n-1;
        while(l<r){
            swap(nums[l++],nums[r--]);
        } 


        //reverse whole array4
        l=0,r=n-1;
        while(l<r){
            swap(nums[l++],nums[r--]);
        } 




        
    }
};