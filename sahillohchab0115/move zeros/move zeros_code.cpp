class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int s=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
            continue;
        else
        {int c;
         c=nums[s];
            nums[s]=nums[i];
         nums[i]=c;
            s+=1;
        }
    }
    }
};