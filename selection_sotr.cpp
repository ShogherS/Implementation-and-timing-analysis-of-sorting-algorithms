template<typename T>
void selection_sort(T arr[], int size)
{
// analises of worst case runing time                       cont  times  
    for (int i{0}; i < size; ++i) {                         //a     n     
        int index{i};                                       //b     n-1
        for (int j{i+1}; j < size; ++j) {                   //c     n*(n-1)/2
            (arr[j] < arr[index]) ? index = j : index;      //d     (n-1)*(n-2)/2
        }
        std::swap(arr[index], arr[i]);                      //e      n-1
    }
}
// a*n + b*(n-1) + c*n*(n-1)/2 + d*(n-1)*(n-2)/2 + e*(n-1) = A*n*n + B*n + C
//The order of groth is O(n2);
