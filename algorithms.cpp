#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+x);
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<endl;

    }
    vector<int> v;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);

    }
    sort(v.begin(),v.end());
    for(auto value : v)

    {
          cout<<value<<" ";

    }
    cout<<endl;
    //function to find minimum element in array,string or vectors
    int mi= *min_element(v.begin(),v.end());
    cout<<mi<<endl;
    //function to find maximum element in array,string or vectors
    int ma= *max_element(v.begin(),v.end());
    cout<<ma<<endl;
    //function to find sum of all the element in array,string or vectors
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int ct = count(v.begin(),v.end(),4);
    cout<<ct<<endl;
    int n;
    cout<<"enter which element you want to search"<<endl;
    cin>>n;
    auto element = find(v.begin(),v.end(),n);
    if(element != v.end())
        cout<<*element<<endl;
    else
        cout<<"Element not found"<<endl;
        //function to reverse a string
    reverse(v.begin(),v.end());

 for(auto value : v)

    {
          cout<<value<<" ";

    }
    cout<<endl; 

    vector<int> v={1,2,3,-4,5};
    // gaama function
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});
    cout<<none_of(v.begin(),v.end(),[](int x){return x%2==0;});
    cout<<any_of(v.begin(),v.end(),[](int x){return x%2==0;});
    auto element = find(v.begin(),v.end(),-4);
    if(element != v.end())
        cout<<element-v.begin()+1<<endl;
    else
        cout<<"Element not found"<<endl;



}
