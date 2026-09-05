class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),res=0,l=0;
        unordered_set<char> charset;
        for(int i=0;i<n;i++)
      {
        while (charset.count(s[i]))
        {
            charset.erase(s[l]);
            l+=1;
        }
        charset.insert(s[i]);
    res=max(i-l+1,res);
    }
    return res;
    }
};
