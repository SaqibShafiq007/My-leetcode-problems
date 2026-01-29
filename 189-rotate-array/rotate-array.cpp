class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n= nums.size();

        if(n==0)return;
        if(n<k){ k = k%n;  }

        //Reverese emtire array
        int l=0,r=n-1;
        while(l<r){
            swap(nums[l],nums[r]);
            l++,r--;
        }


        //Reverese 1st half of array
        l=0,r=k-1;
         while(l<r){
            swap(nums[l],nums[r]);
            l++,r--;
        }


        //Reverese 2nd half of array
        l=k,r=n-1;
         while(l<r){
            swap(nums[l],nums[r]);
            l++,r--;
        }


        
        
    }
};