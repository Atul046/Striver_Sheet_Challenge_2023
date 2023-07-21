// Rotate Matrix

#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &arr, int n, int m)
{
    // Write your code here
    int top = 0;
    int left = 0;
    int right = m-1;
    int bottom = n-1;
  
    while(left<right && top<bottom)
    {
        int temp = arr[top][left];
        // left to right
        for(int i=left+1; i<=right; i++)
        {
            int k = arr[top][i];
            arr[top][i]=temp;
            temp = k;
        }
        top++;

        // top to bottom
        for(int i=top;i<=bottom; i++)
        {
            int k = arr[i][right];
            arr[i][right]=temp;
            temp = k;
        }
        right--;

        // right to left
        for(int i=right; i>=left; i--)
        {
            int k = arr[bottom][i];
            arr[bottom][i]=temp;
            temp=k;
        }
        bottom--;

        // bottom to top
        for(int i=bottom; i>=top; i--)
        {
            int k = arr[i][left];
            arr[i][left]=temp;
            temp=k;
        }
        left++;
        arr[top-1][left-1]=temp;
    }
}
