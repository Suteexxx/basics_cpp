#include<iostream>
using namespace std;
int main () {
    int marks[6]={44,55,66,7,77,-22};
    int size=6;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0;i<size;i++){
        smallest=min(marks[i],smallest);
        largest= max(marks[i],largest);

        
    }
    cout<<smallest<<endl;
    cout<<largest<<endl;
    return 0;
}