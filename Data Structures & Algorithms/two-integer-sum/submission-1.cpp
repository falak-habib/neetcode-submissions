class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        // unordered_map<int,int> map;
        // for(auto i: nums)
        // {
        //     if(map.count(i)==0)
        //     {
        //         map(i) = 1;
        //     }else
        //     {
        //         map(i)++;
        //     }
        // }

        
        for(int i=0; i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    if(i<j)
                    {
                        ans.push_back(i);
                        ans.push_back(j);
                    }else
                    {
                        ans.push_back(j);
                        ans.push_back(i);
                    }
                    break;
                }
                
            }
            
        }
        return ans;
    }
};
