int binarySearchIterative(int arr[], int left, int right, int element)
{
    while ( right <= left) {
        int mid = (left + right) / 2;
        if( arr[mid] == element) {
            return mid;
        }
        else if( arr[mid] > element) {
            left = mid - 1;
        }
        else {
            right = mid + 1;
        }
    }
    return -1;
}    
