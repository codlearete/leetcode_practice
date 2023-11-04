class Solution {
public:
    vector<vector<int>>dp;

    int solve(int idx1, string& str1,int idx2, string& str2){

        if(idx1==str1.size() || idx2==str2.size()) return 0;

        if(dp[idx1][idx2] != -1)return dp[idx1][idx2]; 

        if(str1[idx1]==str2[idx2]){
            return 1+solve(idx1+1,str1,idx2+1,str2);
        }
        else{
            int str1len = solve(idx1,str1,idx2+1,str2);
            int str2len = solve(idx1+1,str1,idx2,str2);

            return dp[idx1][idx2] = max(str1len,str2len);
        }

    }
    int longestCommonSubsequence(string text1, string text2) {

        int n = text1.size();
        int m = text2.size();

        dp.resize(n+1,vector<int>(m+1,-1));
        return solve(0,text1,0,text2);

    }
};