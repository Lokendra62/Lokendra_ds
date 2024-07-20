#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    x=low-1;
    y;
    pivot=arr[high];
    for(int y=low;y<high-1;y++)
    {
        if(arr[y]<=pivot)
        {
            x++;
            swap(arr[x],arr[y]);
        }

    }
    swap(arr[x+1],arr[high]);
        return x+1;

}
void quicksort(int arr[],int low, int high)
{
    if(low<high)
    {
        int pos= partition(arr,low,high);
        quicksort(arr,low pos-1);
        quicksort(arr,pos+1,high);

    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;

    }
}
int main()
{
    int arr[]={30,45,76,12,18,36,75};
}


