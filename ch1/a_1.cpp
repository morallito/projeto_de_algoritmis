#include <iostream>
#include <vector>
int Max(std::vector<int> A, int n){
    int i, temp;
    temp = A[0];
    for (int i=1; i < n; i++) if (A[i] > temp) temp=A[i];
    return temp;
}

int main() {
    std::cout <<"Input the size of the vector: ";
    int n;
    std::cin>>n;
    std::vector<int> A;
    int a;
    for (int i=0;i<n;i++ ){
        std::cin>>a;
        A.push_back(a);
    }
    std::cout<<"\n The bigger mumber is : ";
    std:: cout<< Max(A, n);
    std::cout<<"\n"
    return 0;
}