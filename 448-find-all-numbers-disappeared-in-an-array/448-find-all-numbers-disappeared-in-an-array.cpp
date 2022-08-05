class Solution {
public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> hash;
    vector<int> ans;
    for(int i=1;i<=nums.size()+1 ;i++){
        hash.push_back(0);
    }
    for(int i=0;i<nums.size();i++){
        hash[nums[i]]=1;
    }
    for(int i=1;i<=nums.size();i++){
        if(hash[i]==0){
            ans.push_back(i);
        }
    }
    return ans;
}
};