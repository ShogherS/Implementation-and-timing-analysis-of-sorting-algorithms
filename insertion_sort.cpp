template<typename T>
void insertion_sort(T arr[], int size)
{
// analises of worst case runing time         cont  times  
    for (int i{1}; i < size; ++i) {         //a     n     
        T key = arr[i];                     //b     n-1
        int j = i - 1;                      //c     n-1
        while (j >= 0 && arr[j] > key) {    //d     n*(n-1)/2
            arr[j + 1] = arr[j];            //e     (n-1)*(n-2)/2
            --j;                            //c     (n-1)*(n-2)/2
        }
        arr[j + 1] = key;                   //d     n-1
    }
}
// a*n + b*(n-1) + c*(n-1) + d*n*(n-1)/2 + e*(n-1)*(n-2)/2 + c*(n-1)*(n-2)/2 + d*(n-1) = A*n*n + B*n + C
//The order of groth is O(n*n);
