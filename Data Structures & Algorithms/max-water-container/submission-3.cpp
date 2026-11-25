class Solution {
public:
    int maxArea(vector<int>& height) {
        //using two pointers find the largest indices.
        int i = 0;
        int j = height.size() - 1;

        int max_area = 0;
        while(i < j){
            int area = (j - i)*(min(height[i], height[j]));
            max_area = max(area, max_area);
            if(height[i] > height[j]){
                j--;
            }
            else if(height[j] > height[i]){
                i++;
            }
            else{
                i++;
                j--;
            }
            
        }

        return max_area;
    }
};