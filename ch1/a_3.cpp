#include <iostream>
#include <vector>

using namespace std;

void  print_max_min(std::vector<int> A, int n){
    int max, min;
    max = A[0];
    min = A[0];
    for (int i=1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        } else {
            if (A[i] < min) min = A[i];
        }

    }

    cout<< "\nThe max is: ";
    cout<< max;
    cout<< "\nThe minimum is: ";
    cout<< min;
}


int main() {
    cout <<"Input the size of the vector: ";
    int n,a;
    cin>>n;
    vector<int> A;

    for (int i=0;i<n;i++ ){
        cin>>a;
        A.push_back(a);
    }
    print_max_min(A,n);
    return 0;
}