class Solution {

public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,j,res=1,pre=1,post=1;
        vector<int> output(nums.size());
        for(i =0;i<nums.size();i++){
     output[i]=pre;
     pre*=nums[i] ;  }   for(i=nums.size()-1;i>=0;i--){

output[i]*=post;
post*=nums[i];
            }
        return output ;
    }
};
