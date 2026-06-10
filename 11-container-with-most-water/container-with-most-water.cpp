class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int maxArea{0};
        int l{0}, r{size - 1};

        while (l < r) {
            int lval = height[l];
            int rval = height[r];
            int area = min(lval, rval) * (r - l);
            maxArea = max(maxArea, area);

            if (lval < rval)
                l++;
            else
                r--;
        }
        return maxArea;
    }
};