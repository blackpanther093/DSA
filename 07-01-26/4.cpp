// https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), prod1=1;
        vector<int> out;
        int prod2=1, zero_count=0;
        for(int i=0; i<n; i++){
            prod1*=nums[i];
            if(nums[i]==0)
                zero_count++;
            if(nums[i]!=0 || zero_count>1)
                prod2*=nums[i];
        }
        for(int i=0; i<n; i++){
            if(nums[i]!=0)
                out.push_back(prod1/nums[i]);
            else
                out.push_back(prod2);
        }
        return out;
    }
};