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

        // tc - n^2, extra O(1) space with O(n) space
        // int n = nums.size();
        // int prod = 1;
        // int zerocount=0;
        // for(int i=0; i<n;i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //         prod *= nums[i];
        //     }else
        //     {
        //         zerocount++;
        //     }
        // }

        // if(zerocount>1)
        // {
        //     return vector<int>(n,0);
        // }

        // vector<int> result(n);
        // for(int i=0; i<n;i++)
        // {
        //     if(zerocount > 0)
        //     {
        //         result[i] = (nums[i]==0)? prod:0;
        //     }else
        //     {
        //         result[i] = prod/nums[i];
        //     }
        // }
        // return result;

        //3

        int n = nums.size();
        vector<int> result(n);
        vector<int> prefix(n);
        vector<int> suffix(n);

        prefix[0] =1;
        suffix[n-1] = 1;

        for(int i=1; i<n;i++)
        {
            prefix[i] = nums[i-1]*prefix[i-1];
        }

        for(int i = n-2; i>=0;i--)
        {
            suffix[i] = nums[i+1] * suffix[i+1];
        }

        for(int i=0;i<n;i++)
        {
            result[i] = prefix[i]* suffix[i];
        }

        return result;
    }
};
