class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store(nums.begin(),nums.end());
        int longest=0;
        for(int nu:store){
            
                if(store.find(nu-1)==store.end()){
int curr=nu;
int length =0;
while(store.find(curr)!=store.end()){
curr++;
 length ++;}
             longest=max(length,longest);

                }
                
            }
        return longest;
    }
};
