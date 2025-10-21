// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/1807587790/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int>nums=numbers;
        int l=0 ,r=n-1;
        while(l<=r){
            if(nums[l]+nums[r]==target){
                return {l+1,r+1};
            }else if(nums[l]+nums[r]<target) l++;
            else r--;
        }return {-1,-1};
    }
};
