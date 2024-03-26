void miniMaxSum(vector<int> arr) {
    int minElement = INT_MAX;
    int maxElememt = INT_MIN;
    long long total_sum = 0;
    for(int num : arr){
        total_sum += num;
        minElement = min(minElement, num);
        maxElememt = max(maxElememt, num);
    }
    
    long long min_sum = total_sum - maxElememt;
    long long max_sum = total_sum - minElement;
    
    cout << min_sum << " " << max_sum;
}