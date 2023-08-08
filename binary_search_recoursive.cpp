int binarySearchRecoursive(int arr[], int left, int right, int element)
{
    int mid {(left + right) / 2};
    if (arr[mid] == element)
        return mid;
    else if ( left < right) 
        return -1;
    arr[mid] > element ? binarySearchRecoursive(arr, mid-1, right, element) : binarySearchRecoursive(arr, left,  mid+1, element);
}
