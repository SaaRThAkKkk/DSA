vector<vector<int>> generate(int numRows) {
        vector<vector<int> > v;//ek khali 2d vector bna lia
        // ab isme andr variable size k one d vector dalna h
        for(int i=1;i<=(numRows);i++){
            vector<int> a(i);// creating a variable vector of size 1.2.3.4.5....
            v.push_back(a);
        }
        // ab iska structure ready h to i,j ki hel se bs value add krte jana h
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==i || j==0){
                    v[i][j]=1;
                }
                else{
                    v[i][j]=v[i-1][j]+v[i-1][j-1];
                }
            }
        }
        return v;
        
    }