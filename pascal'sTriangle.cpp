class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>vect(numRows);
        for(int i=0;i<numRows;i++){
            vect[i].resize(i+1);
            for(int j=0;j<=i;j++)
            {
               if(i==j || j==0)
                    vect[i][j]=1;
                else{
                    vect[i][j]=vect[i-1][j-1]+vect[i-1][j];
                } 
            }
        }
        return vect;
    }
};
