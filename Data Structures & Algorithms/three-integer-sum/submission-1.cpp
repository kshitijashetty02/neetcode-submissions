class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {   sort(nums.begin(),nums.end());
        int n=nums.size();
     vector<vector  <int>>res;
     for(int i=0;i<n;i++) {
         int a=nums[i];
         if(i>0 and a==nums[i-1])
         continue ;
        int l=i+1,r=n-1;


        while (l<r){
            int sum=a+nums[l]+nums[r];
            if(sum>0)
            r-=1;
            else if(sum<0)
            l++;
            else
            {res.push_back({a,nums[l],nums[r]});
            l++;
            r--;
            while(l<r and nums[l]==nums[l-1]) l++;
            while(l<r and nums[r]==nums[r+1])r--;
        }
        }
     }
     return res;
    }
};
