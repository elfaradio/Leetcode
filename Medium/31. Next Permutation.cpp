class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         //next_permutation(nums.begin(),nums.end());
         ///int n=nums.size();
          int n = nums.size(); 

   
    int pos = -1; 
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
         
            pos = i;
            break;
        }
    }

   
    if (pos == -1){
 reverse(nums.begin(), nums.end());
 return;
        
    }

    for (int i = n - 1; i > pos; i--)
    {
        if (nums[i] > nums[pos])
        {
            swap(nums[i], nums[pos]);
            break;
        }
    }

    reverse(nums.begin() + pos + 1, nums.end());

        
        
        
    }
};
