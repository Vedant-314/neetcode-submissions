class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = 0;
        int cnt = 0;

        for(int i: nums){
            if(cnt == 0){
                res = i;
            }
            if(res == i){
                cnt++;
            }
            else{
                cnt--;
            }
        }

        return res;
    }
};