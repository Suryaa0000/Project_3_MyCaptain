#include<iostream>
using namespace std;

int main(){
    int data[4];
    cout<<"Enter elements: ";

    for(int i = 0; i<4; ++i)
    cin>>data[i];

    cout<<"You Entered: ";
    for (int i = 0; i<4; ++i)
    cout<<endl<< *(data + i);
    
    return 0;
}