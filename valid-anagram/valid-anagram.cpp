class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s.length() != t.length()){
            return false;
        }

        for(int i=0;i<t.length();i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;

        
        // unordered_map<char>arr;

        // if(s.length() != t.length()){
        //     return false;
        // }

        // for(char st : s){
        //     arr.insert(st);
        // }

        // int flag = 1;

        // for(int i=0;i<t.length();i++){
        //     if(arr.find(t[i]) != arr.end()){
        //         flag = 1;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // return true;
    }
};