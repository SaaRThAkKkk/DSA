vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();//row
        int n=matrix[0].size();//column
        int minr=0;
        int maxr=m-1;
        int minc=0;
        int maxc=n-1;
        vector<int> result;
        while(minr<=maxr && minc<=maxc){
            //right
            for(int j=minc;j<=maxc;j++){
                result.push_back(matrix[minr][j]);
            }
            minr++;
            if(maxr<minr || maxc<minc){
                break;
            }
            //down
            for(int i=minr;i<=maxr;i++){
                result.push_back(matrix[i][maxc]);
            }
            maxc--;
            if(maxr<minr || maxc<minc){
                break;
            }
            //left
             for(int j=maxc;j>=minc;j--){
                result.push_back(matrix[maxr][j]);
            }
            maxr--;
            if(maxr<minr || maxc<minc){
                break;
            }
            //up
            for(int i=maxr;i>=minr;i--){
                result.push_back(matrix[i][minc]);
            }
            minc++;

        }
        return result;
        
    }