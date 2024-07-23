#include<iostream>
using namespace std;
int main()
{
    int arr[5]={9,6,6,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,min_index;

    for(int i=0;i<n-1;i++)
    {

    min_index=i;
    cout<<"pass: "<<i+1;
    for(int j=1;j<n;j++){
        if(arr[min_index]>arr[j])
        {
            min_index=j;
        }
    }



if(min_index!=i)

swap(arr[min_index],arr[i]);

for(int k=0;k<n;k++)
    {

        cout<<arr[k]<<"\t";
    }
    cout<<endl;










    }

}





