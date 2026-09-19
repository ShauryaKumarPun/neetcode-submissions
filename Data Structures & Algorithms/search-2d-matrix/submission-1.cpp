class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //to find row and column for dynamic Matrix of any size.
        int r=matrix.size();
        int c=matrix[0].size();

        int s = 0, e = r*c-1;
        int mid = s+(e-s)/2;
        
        while(s<=e){
            //to find row and column for mid element. r=mid/c; , c=mid%c;
            int row = mid/c;
            int col = mid%c;
            if(matrix[row][col]<target){
                s=mid+1;
            }
            else if(target==matrix[row][col]){
                return 1;
            }
            else{
                e=mid-1;
            }

            mid = s+(e-s)/2;
        }

        return 0;
    }
};
