class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> temp;
        vector<string> store;
        for (int i = 0; i < strs.size(); i++) {
            store.push_back(strs[i]);
        }
        for (int i = 0; i < store.size(); i++) {
            sort(store[i].begin(), store[i].end());
        }
        map<string, vector<int>> mp;
        for (int i = 0; i < store.size(); i++) {
            mp[store[i]].push_back(i);
        }
        for (auto it : mp) {
            vector<string> group;
            for (int index : it.second) {
                group.push_back(strs[index]);
            }
            temp.push_back(group);
        }
        return temp;
    }
};