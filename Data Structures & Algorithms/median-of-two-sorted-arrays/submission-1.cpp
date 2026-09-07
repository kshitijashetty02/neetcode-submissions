class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size(),len2=nums2.size();
        vector <int> merge(len1+len2);
        copy(nums1.begin(),nums1.end(),merge.begin());
         copy (nums2.begin(),nums2.end(),merge.begin()+len1);
         sort(merge.begin(),merge.end());
         int total=merge.size();
         if(total%2==0)
         {
           return (merge[(total/2)-1]+merge[total/2])/2.0;
           
         }
         else
         return merge[total/2];
    }
};
