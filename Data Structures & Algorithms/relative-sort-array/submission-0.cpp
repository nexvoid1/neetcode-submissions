class Solution {
   public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        for (int i = 0; i < arr1.size(); i++) {
            mp[arr1[i]]++;
        }
        vector<int> temp;

        for (auto it : mp) {
            int n = it.second;
            if (find(arr2.begin(), arr2.end(), it.first) == arr2.end()) {
                while (n != 0) {
                    temp.push_back(it.first);
                    n--;
                }
            }
        }
        vector<int> temp1;
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {
                if (arr2[i] == arr1[j]) temp1.push_back(arr1[j]);
            }
        }
        // return temp1;
        for (int i = 0; i < temp.size(); i++) {
            temp1.push_back(temp[i]);
        }
        return temp1;
    }
};