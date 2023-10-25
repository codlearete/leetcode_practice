class Solution {
public:
    int mySqrt(int x) {

        int start=0, end=x, mid,ans;

        if(x<2){
            return x;
        }

        while(start<=end){
            mid=start+(end-start)/2;

            if(mid == x/mid){
                ans=mid;
                break;
            }
            else if(mid>x/mid){
                end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
        
    }
};