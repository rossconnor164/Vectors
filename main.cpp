// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    
    int local_sum = 0;
    int max_sum = -65535;

    for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 4; j++)
        {
            local_sum += arr[i][j];
            local_sum += arr[i][j+1];
            local_sum += arr[i][j+2];
            
            local_sum += arr[i+1][j+1];
            
            local_sum += arr[i+2][j];
            local_sum += arr[i+2][j+1];
            local_sum += arr[i+2][j+2];
            
            if (local_sum > max_sum)
            {
                max_sum = local_sum;
            }
            local_sum = 0;
        } 
    }
    
    return max_sum;

}

//https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays