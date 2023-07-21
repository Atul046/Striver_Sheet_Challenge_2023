// Set Matrix Zeroes
#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &v)
{
	// Write your code here.
	int n = v.size();
	int m = v[0].size();
	int c1 = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[i][j]==0)
            {
                // mark the i-th row to 0
                v[i][0]=0;

                // mark the j-th col to 0
                if(j!=0)
                    v[0][j]=0;
                else
                    c1 = 0;
            }
        }
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            if(v[i][j] !=0)
            {
                // check for col and row
                if(v[0][j]==0 || v[i][0]==0)
                {
                    v[i][j]=0;
                }
            }
        }
    }

    if(v[0][0] ==0){
        for(int j=0; j<m; j++)
            v[0][j]=0;
    }
    if(c1 == 0){
        for(int i=0; i<n; i++)
            v[i][0]=0;
    }
}

int main(){
    return 0;
}
