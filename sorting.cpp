#include<iostream>
using namespace std;
//create bubble sort function with two arguments(array,size)

void bubblesort(int arr[],int n)
{
    //iterate pass
    for(int i=0;i<n;i++)//pass
    {
       cout<<"Pass: "<<i+1<<":   ";

        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
         for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    }

}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<""<<endl;
}
int main()
{
    int arr[5]={3,9,7,6,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<" Before call bubble sort"<<endl;
    print(arr,size);
    bubblesort(arr,size);

    cout<<"After bubble sort"<<endl;
    print(arr,size);
}







