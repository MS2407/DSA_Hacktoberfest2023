void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n = matrix.size();
	    //try every pair between two nodes
	    
	    for(int k=0;k<n;k++){
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	                //given nodes pair i,j include k
	                if(matrix[i][k]==-1 || matrix[k][j]==-1 ){
	                    //as path not exist from i to k OR k to j
	                    continue;
	                }
	                else if(matrix[i][j]==-1){
	                    //path from i to j NOT exists(INFINITY) but now 
	                    //going from i to k then k to j exists
	                    matrix[i][j] = matrix[i][k] + matrix[k][j];
	                    
	                }
	                else{
	                    //path i to j exists initially, but including k might give min path
	                    //NOTE matrix[i][j] is nOT -1 here
	                    matrix[i][j] = min(matrix[i][j],matrix[i][k] + matrix[k][j]);
	                }
	               
	            }
	        }
	    }
	}
