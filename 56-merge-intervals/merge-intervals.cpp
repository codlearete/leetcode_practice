class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;

        if(intervals.size() == 0) return ans;

        sort(intervals.begin(),intervals.end(), [](vector<int>a, vector<int>b){
            return a[0]<b[0];
        });
        ans.push_back(intervals[0]);

        for(int i=1;i<intervals.size();i++){
            vector<int>backVec = ans.back();

            if(intervals[i][0]>backVec[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
        
};