class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int , int> mp;
        int maxi = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        // Find the greatest frequency of the number in the map.
        for(auto it : mp){
            if(it.second > maxi){
                maxi = max(it.second , maxi); // Find the max frequency.
            }
        }
        vector <int> temp;
        while(k != 0){
            for(auto it : mp){
                // if(k == 0) break;
                if(it.second == maxi){
                    temp.push_back(it.first);
                    k--;
                }
            }
                maxi = maxi - 1;
        }
        return temp;
    }
};
