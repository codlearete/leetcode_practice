class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n, 0); // Fixed the vector initialization
        int ans = 0;

        for (int i = 0; i < n; i++) { // Initialize i to 0
            if (freq[nums[i]] == 0) {
                freq[nums[i]] += 1;
            } else {
                ans = nums[i];
            }
        }
        return ans;
    }
};
