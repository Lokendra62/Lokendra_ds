#include<iostream>
using namespace std;
int main()
{
    int arr[5]={0,2,5,1,4};
    int key;
    int j;

    for(int i=1;i<5;i++)
    {
        key=arr[i];
        j=i-1;

    while(j>=0 && arr[j]>key)
        {
           arr[j+1]=arr[j];
           j=j-1;


        }
        arr[j+1]=key;

}
      for(int k=0;k<5;k++)
      {
          cout<<arr[k]<<"\t";
      }






}
