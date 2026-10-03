class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int prod=1;
       int count=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
        prod*=nums[i];
        }
        if(nums[i]==0){
            count++;
        }
       }
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
        if(count==0){
            ans.push_back(prod/nums[i]);
        }
        else if(count==1 && nums[i]!=0){
            ans.push_back(0);
        }
        else if(count==1 && nums[i]==0){
            ans.push_back(prod);
        }
        else if(count>1){
            ans.push_back(0);
        }
       }
       return ans;
    }
};
