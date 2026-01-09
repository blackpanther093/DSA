// https://takeuforward.org/plus/dsa/problems/second-largest-element?tab=description
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int lar=INT_MIN, s_lar=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>lar){s_lar=lar; lar=nums[i];}
            else if(nums[i]>s_lar && nums[i]!=lar) s_lar=nums[i];
        }
        return (s_lar==INT_MIN)?-1:s_lar;
        
    }
};