class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int>m;
        int x;
        for(int i=0;i<nums.size();i++)
        {
            x = target - nums[i];
            if(m.find(x) != m.end())
            {
                return{i,m[x]};
            }
            m[nums[i]] = i;
        }
        return{-1,-1};

    }
};