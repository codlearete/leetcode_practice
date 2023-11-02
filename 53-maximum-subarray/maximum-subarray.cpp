class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;

        for(int i=0;i<n;i++){
            sum += nums[i];

            if(maxi<sum){
                maxi=sum;
            }

            if(sum<0){
                sum = 0;
            }

            // maxi = max(maxi,sum);
        }
        return maxi;

        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum += nums[j];
        //         maxi = max(maxi,sum);
        //     }
            
        // }
        return maxi;
        // int max_ending_here=0;
        // int max_so_far=INT_MIN;

        // for(int i=0;i<n;i++){
        //     max_ending_here += nums[i];
        //     if(max_ending_here > max_so_far){
        //         max_so_far = max_ending_here;
        //     }
        //     if(max_ending_here < 0){
        //         max_ending_here = 0;
        //     }
        // }

        // return max_so_far;
        
    }
};