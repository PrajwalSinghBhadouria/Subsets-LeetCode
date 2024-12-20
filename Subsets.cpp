class Solution {
public:
    void solve(vector<int> nums,vector<int> output, vector<vector<int>>&ans,int i ){
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,output,ans,i+1);
        output.push_back(nums[i]);
        solve(nums,output,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int i = 0;
        solve(nums,output,ans,i);
        return ans;
    }
};
