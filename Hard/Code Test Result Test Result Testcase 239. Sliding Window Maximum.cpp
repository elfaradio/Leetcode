class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       deque<int>dq;
       vector<int>ans;
       for(int i=0;i<k;i+=1)
       {
        while(!dq.empty() and dq.back()<nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(nums[i]);
        
       }
       ans.push_back(dq.front());
       for(int i=k;i<nums.size();i+=1)
       {
           int x=dq.front();
           if(x==nums[i-k])
           {
            dq.pop_front();
           }
           while(!dq.empty() and dq.back()<nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(nums[i]);
        ans.push_back(dq.front());
       }
       return ans;
    }
};
