class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        //AnkitPratap's Solution
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int start=i;
            int end=i;
            for(int j=i+1;j<n;j++)
            {
               if(nums[j]>nums[j-1])end++;
               else break;
            }
            if(end-start+1>=2*k)return true;
            if(end-start+1<k)continue;
            int start2=end+1;
            int end2=end+1;
            for(int j=start2+1;j<n;j++)
            {
                if(nums[j]>nums[j-1])end2++;
                else break;
            }
            if(end2-start2+1>2*k)return true;
            if(end2-start2+1>=k)return true;
        }
        return false;
    }
};
