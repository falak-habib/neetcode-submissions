class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;

        int i=2;
        while(i>0)
        {
            int j;
            for( j=0;j<nums.size();j++)
            {
                ans.push_back(nums[j]);
            }
            i--;
            
        }

        return ans;

    }
};