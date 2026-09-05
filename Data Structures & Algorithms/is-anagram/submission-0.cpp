class Solution {
public:
    bool isAnagram(string s, string t) {
        int i,j,n=s.size(),m=t.size();
        if(n!=m)
        return false;
        int count=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
             if(s[i]==t[j]){
              count++;
             t[j]='#';
             break;
            }
        }
    }
    return count==n;
    }
};
