class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       map<int,int>mp;
       
       int n=matrix.size();
       int m=matrix[0].size();
       int x[n+1];
       int y[m+1];
       memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
   
        for(int i=0;i<n;i+=1)
        {
            for(int j=0;j<m;j+=1)
            {
                if(matrix[i][j]==0)
                {
                    x[i]=1;
                    y[j]=1;
                }
            }
        }
        for(int i=0;i<n;i+=1)
        {
            for(int j=0;j<m;j+=1)
            {
                if(x[i] or y[j])
                {
                    matrix[i][j]=0;
                }
            }
        }
       // return matrix;

        


    }
};
