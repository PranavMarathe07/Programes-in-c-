//It shows an the smaller value of index in the program
//ex: arr[4] = {2, 5, 9, 1};
//its output is the 3 (because smaller value is 1 and its index is 3)

#include<iostream>
#include<stdlib.h>
using namespace std;

int getpivot(int arr[], int n) 
{
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while(start < end)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid+1;               //it shows the first line
        }
        else
        {
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}

int main()
{
    int arr[5] = {10, 7, 9, 1, 6};

    cout <<"pivot is : " << getpivot(arr, 5) << endl;
    return 0;
}
