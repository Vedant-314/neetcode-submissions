class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res;
        int mx = 0;

        for(int i: nums){
            mp[i]++;
        }

        for(auto& x: mp){
            if(x.second > mx){
                mx = x.second;
                res = x.first;
            }
        }

        return res;
    }
};