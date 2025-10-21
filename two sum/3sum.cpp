// https://leetcode.com/problems/3sum/submissions/1807597685/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,h=nums.size()-1;
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            if( i!=0 &&nums[i]==nums[i-1]) continue;
                int j=i+1,k=nums.size()-1;
                while(j<k){
                    int s=nums[i]+nums[j]+nums[k];
                    if(s==0) {
                        vector<int>temp={nums[i],nums[j],nums[k]};
                        ans.push_back(temp);
                        j++;
                        k--;
while(j<k && nums[j]==nums[j-1])j++;
while(j<k && nums[k]==nums[k+1])k--;
                    }else if(s<0) j++;
else k--;
                }
            }
        return ans;
    }
};
