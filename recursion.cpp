#include<iostream>
using namespace std;
 int sqrnumber(int n)
 {
     if(n==0)
        return 0;
     int sqr=n*n;
     cout<<sqr<<endl;
     return sqrnumber(n-1);
 }
 int main()
 {
     int num;
     cout<<"enter number to generate square"<<endl;
     cin>>num;
     sqrnumber(num);
 }

