using namespace std;
#include <iostream>
#include <vector>
int main() {
    int n=5;
    int arr[5]={1,2,3,4,5};
    for (int st=0; st<n; st++) {
        for (int en=st; en<n; en++) {
            for (int i=st; i<=en; i++) {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}