void plusMinus(vector<int> arr) {
    int n = arr.size();
    double positives = 0;
    double negatives = 0;
    double zeros = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            positives++;
        }
        if(arr[i] == 0){
            zeros++;
        }
        if(arr[i] < 0){
            negatives++;
        }
    }
    
   double ratio_positive = positives / n;
   double ratio_negative = negatives / n;
   double ratio_zero = zeros / n;
   
   cout << fixed << setprecision(6);
   cout << ratio_positive << endl;
   cout << ratio_negative << endl;
   cout << ratio_zero << endl;

}