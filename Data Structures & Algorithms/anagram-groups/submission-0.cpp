class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> map;
        for(auto& i: strs)
        {
            string sortedString = i;
            sort(sortedString.begin(), sortedString.end());
            map[sortedString].push_back(i);
        }

        vector<vector<string>> result;

        for( auto& i: map)
        {
            result.push_back(i.second);
        }

        return result;

    }
};
