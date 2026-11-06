class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        //tc - o (nlogn)
        // if(nums.size()==0) return 0;
        // map<int, int> hash;

        // for(auto x: nums)
        // {
        //     hash[x]++;
        // }

        // auto i = hash.begin();
        // int count =1;
        // int maxi =1;
        // while(i != hash.end())
        // {
        //     auto nexti = next(i);
        //     if(nexti != hash.end())
        //     {
        //         if(i->first +1 == nexti->first)
        //         {
        //             count++;
        //         }else
        //         {
        //             count =1;
        //         }
        //     }
        //     maxi = max(count, maxi);
        //     i++;
        // }

        // return maxi;


        unordered_set<int> nSet(nums.begin(),nums.end());

        int longest =0;
        
        for( int x: nums)
        {
            if(nSet.find(x-1)== nSet.end())
            {
                int length =1;

                while(nSet.find(x + length)!= nSet.end())
                {
                    length++;
                }
                longest = max(length,longest);
            }

        }

        return longest;
    }
};
