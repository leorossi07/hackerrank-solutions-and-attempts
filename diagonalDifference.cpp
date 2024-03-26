int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int sum_left_to_right = 0;
    int sum_right_to_left = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                sum_left_to_right += arr[i][j];
            }

        }
        sum_right_to_left += arr[i][n-1-i];
    }
    
    return abs(sum_left_to_right - sum_right_to_left);
    

}