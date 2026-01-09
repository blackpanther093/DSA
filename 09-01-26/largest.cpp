// https://takeuforward.org/plus/dsa/problems/largest-element?tab=description
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int max_el=INT_MIN, n=nums.size();
        for(int i=0; i<n; i++)
            if(nums[i]>max_el) max_el=nums[i];
        return max_el;
    }
};