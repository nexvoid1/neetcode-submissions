class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int maxi = INT_MIN;
        if (nums.size() == 1) return nums;
        vector<int> temp;
        int maxi_frequency = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (auto it : mp) {
            if (it.second > maxi) {
                maxi = it.second;
            }
        }
        while (k != 0) {
            for (auto it : mp) {
                if (k == 0) break;
                if (it.second == maxi) {
                    temp.push_back(it.first);
                    k--;
                }
            }
            maxi = maxi - 1;
        }
        return temp;
    }
};
