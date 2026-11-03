class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;

        for(string x: strs){
            string key = x;
            sort(key.begin(), key.end());

            mp[key].push_back(x);
        }

        for(auto& pair : mp){
            res.push_back(pair.second);
        }

        return res;
    }
};
