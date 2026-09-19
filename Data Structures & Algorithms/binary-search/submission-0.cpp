class Solution {
public:
    int search(vector<int>& nums, int target) {

        int s = 0, e = nums.size()-1;
        int mid = s+(e-s)/2;
        int sol=-1;
        while(s<=e){
            if(target>nums[mid]){
                s=mid+1;
            }
            else if(target==nums[mid]){
                return sol=mid;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;

        } 

        return sol;
        
    }
};
