#include <iostream>
#include <algorithm>
using namespace std;

double mean(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += arr[i];

    return (double)sum/n;
}

double median(int arr[], int n)
{
    sort(arr, arr+n);

    if(n % 2 == 0)
        return (arr[n/2] + arr[n/2 - 1]) / 2.0;
    else
        return arr[n/2];
}

int mode(int arr[], int n)
{
    int maxCount = 0, mode = arr[0];

    for(int i=0;i<n;i++)
    {
        int count = 0;

        for(int j=0;j<n;j++)
            if(arr[j] == arr[i])
                count++;

        if(count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}

int main()
{
    int arr[7] = {1,2,2,3,4,5,2};

    cout << "Mean = " << mean(arr,7) << endl;
    cout << "Median = " << median(arr,7) << endl;
    cout << "Mode = " << mode(arr,7) << endl;

    return 0;
}
