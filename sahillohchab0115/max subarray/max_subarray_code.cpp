class Solution {
public:
    int maxSubArray(vector<int> nums) {
        int s=0,a=0,k=0;
    
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                k=1;
                break;
            }
        }
        
        if(k==0)
        {s=nums[0];
            for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>s)
                s=nums[i];
        }
         a=s;
            
        }
        else if(k==1)
        {
            for(int i=0;i<nums.size();i++)
            {
                s+=nums[i];
                if(s<0)
                {
                    s=0;
                }
                else if(s>a)
                {
                    a=s;
                }
            }
        }
        return a;
    }
};