class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>dup;
        for(int num:nums){
            if(dup.count(num)>0){
                return true;
            }
            dup.insert(num);
        }
        return false;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i] == nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;
    }
};