class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0) return 0;
        map<int, int> hash;

        for(auto x: nums)
        {
            hash[x]++;
        }

        auto i = hash.begin();
        int count =1;
        int maxi =1;
        while(i != hash.end())
        {
            auto nexti = next(i);
            if(nexti != hash.end())
            {
                if(i->first +1 == nexti->first)
                {
                    count++;
                }else
                {
                    count =1;
                }
            }
            maxi = max(count, maxi);
            i++;
        }

        return maxi;
    }
};
