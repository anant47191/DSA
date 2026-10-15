class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        
        int k = 1;
        int n = nums.size();
        while (k < n){
            if (nums[k] == nums[k-1]){
                k++;
                continue;
            }
            nums[i+1] = nums[k];
            i++;
            k++;
        }
        return i+1;
    }
};