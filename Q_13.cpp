// Search In A 2D Matrix

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int row = mat.size();
    int col = mat[0].size();
    int s = 0;
    int e = row*col - 1;

    while(s<=e)
    {
        int mid = s + (e-s)/2 ;
        if(mat[mid/col][mid%col] == target)
            return true;
        else if(mat[mid/col][mid%col] < target)
            s=mid+1;
        else
            e = mid-1;
    }
    return false;
}
