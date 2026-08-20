class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        if(nums.empty()) return 0;
        int maxi = 1;
        int cnt = 1;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            int diff = nums[i+1] - nums[i];
            if(diff == 1){
                cnt++;
                maxi = max(cnt , maxi);
            }
            else if(diff != 0){
                cnt = 1;
            }
        }
        return maxi;
    }
};
