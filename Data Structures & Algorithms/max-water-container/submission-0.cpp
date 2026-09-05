class Solution {
public:
    int maxArea(vector<int>& heights) {int n=heights.size();
        int res=0,l=0,r=n-1;
        while(l<r)
        {
            int area=(r-l)*min(heights[l], heights[r]);
            res=max(res,area);
            if(heights[l]<heights[r])
            l++;
            else if(heights[l]>heights[r])
            r--;
            else
            l++;
        }
        return res;
    }
};
