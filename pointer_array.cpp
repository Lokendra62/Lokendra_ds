#include<iostream>
using namespace std;
int main()
{
    int arr[5]{3,4,5,6,7};
    int *ptr;
    ptr= arr;
    for(int i=0;i<5;i++)
    {
        cout<<*(ptr+i)<<endl;

    }



}
