class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=0,c=0;
        for(int x:nums)
        {
            if(c==0) cand=x;
            if(x==cand) c++;
            else c--;
        }
        return cand;
        /*int i,c=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            c=0;
            int x=nums[i];
            for(int j=i;j<nums.size();j++)
            {
                if(x==nums[j]) c++;
            }
            if(c>nums.size()/2) break;
        }
        return nums[i];
        */
    }
};