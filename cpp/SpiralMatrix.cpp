class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m = matrix.size();
        if(m==0) return res;
        int n = matrix[0].size();
        int total = m*n;
        if(n==0) return res;
        int i=0;
        int j=0;
        int t = 0;
        int l = 0;
        while(total>0)
        {
            while(j<n&&total>0)
            {
                res.push_back(matrix[i][j]);
                j++;
                total--;
            }
            i++;t++;j--;
            while(i<m&&total>0)
            {
                res.push_back(matrix[i][j]);
                i++;
                total--;
            }
            j--;n--;i--;
            while(j>=l&&total>0)
            {
                res.push_back(matrix[i][j]);
                j--;
                total--;
            }
            i--;j++;m--;
            while(i>=t&&total>0)
            {
                res.push_back(matrix[i][j]);
                i--;
                total--;
                
            }
            j++;i++;l++;
        }
        return res;
        
        
    }
};
