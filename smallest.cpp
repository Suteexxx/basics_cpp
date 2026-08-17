#include<iostream>
using namespace std;
int main () {
    int marks[6]={44,55,66,7,77,-22};
    int size=6;
    int smallest = INT_MAX;
    for(int i=0;i<size;i++){
        if(marks[i]<smallest){
            smallest=marks[i];

        }
    }
    cout<<smallest<<endl;
    return 0;
}