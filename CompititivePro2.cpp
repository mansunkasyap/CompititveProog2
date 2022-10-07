// PRODUCT OF EXCEPT SELF AND WITH O(n) 
#include<iostream>
using namespace std;

int  main ()
{
    int n; cout<<"Enter Size of array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter array of size "<<n;
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int mul = 1;

    // Getting Count of zero(s) present in array
    int cnt = 0;
    for (int i=0; i<n; i++)
    {
        if(arr[i] == 0)
            cnt++;
    }
// if count is 0
    if (cnt == 0)
    {
        for (int i=0; i<n; i++)
        {
            mul = mul*arr[i];
        }
        for (int i=0; i<n; i++)
        {
            cout<<mul/arr[i]<<" ";
        }   
    }
    // if Count becomes 1
    else if(cnt == 1)
    {
        for (int i=0; i<n; i++)
        {
            if (arr[i] != 0)
                mul = mul*arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i] != 0)
                cout<< "0"<<" ";
            else
                cout<<mul<<" ";
        }
    }
    // If Count is Greater than 1
    else
    {
        for(int i=0; i<n; i++)
            cout<<"0"<<" ";
    }
    return 0;
}
