class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n = t.length();
        char b = t[n-1];

        for(int i=0;i<n;i++){
            if(s[i] != t[i]){
                char a = t[i];
                return a;
            }
        }
        return b;
    }
};