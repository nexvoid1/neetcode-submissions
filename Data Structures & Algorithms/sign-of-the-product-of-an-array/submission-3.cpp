class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;
        vector <int> temp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] < 0) nums[i] = -1;
            else if(nums[i] > 0) nums[i] = 1;
            else nums[i] = 0;
        } 
        int prod = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            prod = prod * nums[i];
        }
        if(prod == -1) return -1;
        if(prod == 0) return 0;
        else return 1;
    }
};