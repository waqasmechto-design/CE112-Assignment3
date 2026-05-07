#include <iostream>
using namespace std;

void getExtremes(float &min, float &max, float a[], int n)
{
    min = a[0];
    max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }
}

int main()
{
    float arr[5] = {12.5, 4.3, 22.7, 1.5, 18.9};
    float min, max;

    getExtremes(min, max, arr, 5);

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    return 0;
}
