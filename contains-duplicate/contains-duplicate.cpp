class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int>arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
            // for(int j=i+1;j<nums.size();j++){
            //     if(nums[i]==nums[j]){
            //         return true;
            //     }
            // }
        }
        return false;
    }
};