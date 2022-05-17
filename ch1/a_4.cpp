#include <iostream>
#include <vector>

using namespace std;

void  max_min(std::vector<int> A, int n, int *max, int *min){
    int i, endOfLoop;
    // Check if N is not even (is odd)
    if ((n & 1) > 0 ){
        A[n] = A[n-1];
        endOfLoop = n;
    } else {
        endOfLoop = n - 1;
    }
    if (A[0] > A[1]){
        *max = A[0];
        *min = A[1];
    } else { 
        *max = A[1];
        *min = A[0];        
    }
    i=3;
    while (i<=endOfLoop){
        if (A[i-1] > A[i]){
            if (A[i-1] > *max) *max = A[i-1];
            if (A[i] < *min) *min = A[i];
        }else {
            if (A[i] > *max) *max = A[i];
            if (A[i-1] < *min) *min = A[i-1];
        }
        i+=2;
    }
}


int main() {
    cout <<"Input the size of the vector: ";
    int n,a;
    cin>>n;
    vector<int> A;
    int max,min;
    for (int i=0;i<n;i++ ){
        cin>>a;
        A.push_back(a);
    }
    max_min(A,n, &max, &min);
    return 0;
}