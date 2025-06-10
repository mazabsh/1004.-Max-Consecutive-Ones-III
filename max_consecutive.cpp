#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 
     int longestOnes(vector<int>& nums, int k){
       int left=0, maxLength=0; 
       for(int i=0; i<nums.size(); ++i){
         if(nums[i]==0){
           --k; 
         }
         while(k<0){
           if(nums[left]==0){
             ++k; 
           }
           ++left; 
         }
         maxLength = max(maxLength, i-left+1); 
       }
       return maxLength; 
     }
};
int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0}; 
    int k=2; 
    Solution sol; 
    cout << sol.longestOnes(nums, k) << endl; 
    return 0; 
    
}
