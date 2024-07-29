class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v1(1, nums[0]), v2(1, nums[1]);
        for(int i= 2; i < nums.size(); ++i){
            if(v1.back() > v2.back()) v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
        }
        v1.insert(v1.end(), v2.begin(), v2.end());
        return v1;
    }
};