class Solution {
public:
    int findMin(vector<int> &nums) {
       int res=nums[0]-1;
      int l=0,m=0,r=nums.size()-1;
       while (l<r){
        if(nums[l]<nums[r])
        {
         
                return nums[l];
            
        }
    m=(l+r)/2;
        if(nums[m]>nums[r]){
            
            l=m+1;
        }
        else
        r=m;


       }
       return nums[l];
    }
};
