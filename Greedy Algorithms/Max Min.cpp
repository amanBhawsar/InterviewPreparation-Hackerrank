// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    
    int min = std::numeric_limits<int>::max();
    for(size_t i = k-1; i < arr.size();i++){
        int unfairness = arr[i] - arr[i-(k-1)];
        if(unfairness < min) min = unfairness;
    }
    return min;
}
