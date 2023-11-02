class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n=nums.size();

        vector<int>ans(n);

        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                ans[j++]=0;

            }
        }
        int k=j;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                ans[k++]=1;

            }
        }
        int l=k;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 2){
                ans[l++]=2;

            }
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
    }
};