class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count = 0;
        //checking circularly where value drops
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) count++;
        }
        
        // if drop <=1 return true.
        return count <= 1;
    }
};