int sumOddLengthSubarrays(int* arr, int arrSize) {
    int sum = 0;
    for(int i = 0; i < arrSize; i++) {
        for(int j = i; j < arrSize; j++) {
            int len = j - i + 1;
if(len % 2 == 1) {
    for(int k = i; k <= j; k++) { sum += arr[k];
                }

            }
        }
    }

    return sum;
}
