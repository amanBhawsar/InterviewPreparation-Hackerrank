/*
We have to find a subset of size K from a list of N numbers so that 
the differece between it's maximun and minimun values is minimized. 
In order to satisfy this condition, the selected subset must have 
consecutive numbers from the input set. So we first sort the 
input array, and then we search which consecutive k values 
has the minimun difference between the last and first numbers. 
*/
int maxMin(int k, vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    
    int min = std::numeric_limits<int>::max();
    for(size_t i = k-1; i < arr.size();i++){
        int unfairness = arr[i] - arr[i-(k-1)];
        if(unfairness < min) min = unfairness;
    }
    return min;
}
