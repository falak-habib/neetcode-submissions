class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // vector<int> result;
        // int n = nums.size();
        //brute force tc = n^2
        // for(int i=0;i<n;i++)
        // {
        //     int prod = 1;
        //     for(int j=0; j<n;j++)
        //     {
        //         if(i!=j)
        //         {
        //             prod *= nums[j];
        //         }
        //     }
        //     result.push_back(prod);
        // }

        int n = nums.size();
        int prod = 1;
        int zerocount=0;
        for(int i=0; i<n;i++)
        {
            if(nums[i]!=0)
            {
                prod *= nums[i];
            }else
            {
                zerocount++;
            }
        }

        if(zerocount>1)
        {
            return vector<int>(n,0);
        }

        vector<int> result(n);
        for(int i=0; i<n;i++)
        {
            if(zerocount > 0)
            {
                result[i] = (nums[i]==0)? prod:0;
            }else
            {
                result[i] = prod/nums[i];
            }
        }
        return result;
    }
};
