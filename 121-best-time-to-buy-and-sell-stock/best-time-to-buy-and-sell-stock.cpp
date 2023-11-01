class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        int min_price=INT_MAX;
        int profit=0;

        for(int i=0;i<n;i++){
            min_price=min(prices[i],min_price);
            profit=max(profit,prices[i]-min_price);
        }

        return profit;
        // vector<int>v;
        // int res=0;

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int diff = prices[j]-prices[i];

        //         if(diff>0){
        //             res = max(diff,res);
        //         }
        //     }
        // }

        // // int min_price = prices[0];
        // // int profit = 0;
        // // int idx;

        // // for(int i=1;i<n;i++){
        // //     if(prices[i]<min_price){
        // //         min_price = prices[i];
        // //         idx=i;

        // //     }
        // // }

        // // int max_price=0;

        // // if(idx != n-1){
        // //     for(int i=idx+1;i<n;i++){
        // //         if(prices[i]>max_price){
        // //             max_price = prices[i];
        // //         }
        // //     }
        // // }
        // // else{
        // //     return 0;
        // // }

        // // int result = max_price-min_price;

        // // for(int i=0;i<n;i++){
        // //     int x=prices[i];
        // //     for(int j=i+1;j<n;j++){
        // //         int diff = prices[j] - x;
        // //         if(diff > 0){
        // //             v.push_back(diff);
        // //         }

        // //     }
        // // }

        // // int result= *max_element(v.begin(),v.end());

        // return res;
        
    }
};