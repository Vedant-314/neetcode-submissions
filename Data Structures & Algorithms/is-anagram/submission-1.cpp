class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        
        unordered_map<char, int> mp1, mp2;

        for(char x: s){
            mp1[x]++;
        }

        for(char x: t){
            mp2[x]++;
        }

        for(int i = 0; i<s.size(); i++){
            if(mp1[s[i]] != mp2[s[i]]){
                return false;
            }
        }

        return true;
        
    }
};
