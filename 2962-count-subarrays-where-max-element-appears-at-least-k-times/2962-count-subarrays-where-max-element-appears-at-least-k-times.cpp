class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0,count=0;
        long long ans=0;
        int maxi=*max_element(nums.begin(),nums.end());
        while(j<nums.size())
        {
            if(nums[j]==maxi)
            {
                count++;
                while(count==k)
                {
                   
                    ans+=(n-j);
                    if(nums[i]==maxi)
                    {
                        count--;
                    }
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};