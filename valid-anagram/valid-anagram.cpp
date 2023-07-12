class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>arr;
        for(char st:s){
            arr[st]++;
        }
        for(char st:t){
            arr[st]--;
        }

        for(auto x:arr){
            if(x.second != 0){
                return false;
            }

        }
        

        return true;
    }
};