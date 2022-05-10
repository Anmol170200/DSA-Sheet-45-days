class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
        sort( nums.begin(), nums.end() );
        int n = nums.size();
        vector<vector<int>> ans;
        
        for( int  i =0 ;i< n-2; i++ ){
            if( i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int j = i+1, k= n-1;
            while( j<k ){
                int s = nums[i]+ nums[j]+nums[k];
                if( s == 0 ){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    j++;
                    while( j<n && temp[1] == nums[j] ){
                        j++;
                    }
                    k--;
                    while( k>0 && temp[2] == nums[k] ){
                        k--;
                    }
                }
                else if( s < 0 ){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};