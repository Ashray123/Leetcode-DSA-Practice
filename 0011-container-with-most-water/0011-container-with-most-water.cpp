class Solution {
public:
    int maxArea(vector<int>& height) {
         int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int width = right - left;
            int minHeight = std::min(height[left], height[right]);
            int currentArea = width * minHeight;
            maxArea = std::max(maxArea, currentArea);

            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return maxArea;
    }
};