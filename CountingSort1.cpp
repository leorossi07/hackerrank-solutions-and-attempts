vector<int> countingSort(vector<int> arr) {
    vector<int> freq_arr(100, 0);
    for(int num : arr){
        freq_arr[num]++;
    }
    return freq_arr;  
}