template<typename T>
void bubble_sort(T arr[], int size)
{
// analises of worst case runing time         cont  times  
    for (int i{0}; i < size; ++i) {         //a     n     
        bool quit{true};                    //b     n-1
        for (int j{0}; j < size-i-1; ++j) { //c     n*(n-1)/2
            if (arr[j] > arr[j+1]) {        //d     (n-1)*(n-2)/2
                int tmp = arr[j];           //e     (n-1)*(n-2)/2
                arr[j] = arr[j + 1];        //f     (n-1)*(n-2)/2
                arr[j + 1] = tmp;           //g     n*(n-1)/2
                quit = false;               //h     n*(n-1)/2
            }
        }
        if (quit)                           //i      n-1
            return;                         //j      1
    }
}
// a*n + b*(n-1) + c*n*(n-1)/2 + d*(n-1)*(n-2)/2 + e*(n-1)*(n-2)/2 + f*(n-1)*(n-2)/2 + g*(n-1)*(n-2) + h*(n-1)*(n-2) + i*(n-1) + 1= A*n*n + B*n + C
//The order of groth is O(n2);
