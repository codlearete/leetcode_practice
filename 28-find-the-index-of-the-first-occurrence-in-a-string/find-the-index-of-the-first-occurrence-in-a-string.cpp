class Solution {
public:
    int strStr(string haystack, string needle) {

        if(needle.size() > haystack.size()) return -1;
        int n = needle.size();

        int pivot =-1;
        int idx=0;
        while(idx<haystack.size())
        {
            if(haystack.substr(idx,n)==needle)
            {
                pivot = idx;
                return pivot;
            }
            idx++;
        }
        return pivot;



        
        
    }
};