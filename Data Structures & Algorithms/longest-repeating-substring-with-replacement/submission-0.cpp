class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> count;
       int res=0,n=s.size(),l=0;
       for(int i =0;i<n;i++)
  {
 count[s[i]]=1+count[s[i]];
 int maxf=0;
 for(const auto& pair: count)
{
    maxf=max(maxf,pair.second);
}
while ((i-l+1)-maxf>k){
    count[s[l]]--;
    l++;
    maxf=0;
     for(const auto& pair: count){
            maxf=max(maxf,pair.second);

     }

}
res=max(res,i-l+1);

  } 
  return res; }
};
