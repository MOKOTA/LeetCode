class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        if(nums.size()==0||nums.size()==1) return nums.size();
        for(int i=0;i<nums.size()-1;i++)
        {
            j = i+1;
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+j);
                i--;
            }
        }
        return nums.size();
        
    }
};
