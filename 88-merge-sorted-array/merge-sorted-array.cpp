class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;

        for(int i=m;i<n+m;i++){
            nums1[i] = nums2[j++];
        }

        sort(nums1.begin(),nums1.end());



        // int i=0;
        // int j=0;

        // vector<int>ans;

        // while(i<m && j<n){
        //     if(nums1[i] <= nums2[j]){
        //         ans.push_back(nums1[i]);
        //         i++;
        //     }
        //     else{
        //         ans.push_back(nums2[j]);
        //         j++;
        //     }
        // }


        // for(int k=0;k<n+m;k++){
        //     nums1[k]=ans[k];
        // }
        
    }
};