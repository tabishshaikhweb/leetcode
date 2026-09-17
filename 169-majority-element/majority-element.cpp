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
    }
};