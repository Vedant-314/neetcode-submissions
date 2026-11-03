class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<array<int, 26>, vector<string>> mp;

        for(string x: strs){
            array<int, 26> cnt = {0};
            for(char c: x){
                cnt[c - 'a']++;
            }

            mp[cnt].push_back(x);
        }

        for(auto& pair : mp){
            res.push_back(pair.second);
        }

        return res;
    }
};
